#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>
#include <QLabel>
#include "Brainfuck.h"
#include <Debugger.h>
#include <QTextCursor>
#include <QVector>

#include <graphwidget.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    is_debugger_present = false;
    on_ui();
    out_string = "";

    //初始化图表窗口
    dock_graph = new QDockWidget("内存使用情况(X:指令指针, Y:数据指针)");
    dock_graph->resize(1280, 720);

    //帮助 窗口初始化
    dock_help = new QDockWidget("帮助");
    QString manual = "";
    manual.append("\nBrainfuck由八种运算符构成\n");
    manual.append("  字符\t含义\n");
    manual.append("  >\tptr++\n");
    manual.append("  <\tptr--\n");
    manual.append("  +\t*ptr++\n");
    manual.append("  -\t*ptr--\n");
    manual.append("  .\tputchar(*ptr)\n");
    manual.append("  ,\tgetchar(*ptr)\n");
    manual.append("  [\twhile(*ptr){\n");
    manual.append("  ]\t}\n");
    manual.append("  如下面是bf的hello world! :\n++++++++++[>+++++++>++++++++++>+++>++++<<<<-]>++.>+.+++++++..+++.\n>>++++.<++.<++++++++.--------.+++.------.--------.>+.\n");
    QLabel *l = new QLabel(this);
    l->setText(manual);
    dock_help->setWidget(l);

    // action槽绑定
        //文件部分
    connect(ui->action_open, SIGNAL(triggered()), this, SLOT(on_file_open()));
    connect(ui->action_new, SIGNAL(triggered()), this, SLOT(on_file_new()));
    connect(ui->action_save, SIGNAL(triggered()), this, SLOT(on_file_save()));

        // 代码部分
    connect(ui->action_check, SIGNAL(triggered()), this, SLOT(on_text_check()));
    connect(ui->action_format, SIGNAL(triggered()), this, SLOT(on_text_format()));

        //帮助部分
    connect(ui->action_manual, SIGNAL(triggered()), this, SLOT(on_help()));
    connect(ui->action_about, SIGNAL(triggered()), this, SLOT(on_about()));

        //调试部分
    connect(ui->action_start, SIGNAL(triggered()), this, SLOT(on_debug_start()));
    connect(ui->action_over, SIGNAL(triggered()), this, SLOT(on_debug_over()));
    connect(ui->action_resume,SIGNAL(triggered()), this, SLOT(on_debug_resume()));
//    connect(ui->action_stepi, SIGNAL(triggered()), this, SLOT(on_debug_stepi()));
    connect(ui->action_stepo,SIGNAL(triggered()), this, SLOT(on_debug_stepo()));

    // 按钮槽绑定
    connect(ui->pushButton_check,SIGNAL(clicked()),this,SLOT(on_text_check()));
    connect(ui->pushButton_format,SIGNAL(clicked()),this,SLOT(on_text_format()));
    connect(ui->pushButton_over,SIGNAL(clicked()),this,SLOT(on_debug_over()));
    connect(ui->pushButton_resume,SIGNAL(clicked()),this,SLOT(on_debug_resume()));
    connect(ui->pushButton_start,SIGNAL(clicked()),this,SLOT(on_debug_start()));
    //connect(ui->pushButton_stepi,SIGNAL(clicked()),this,SLOT(on_debug_stepi()));
    connect(ui->pushButton_stepo,SIGNAL(clicked()),this,SLOT(on_debug_stepo()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_file_open(){
    QString fileName;
    fileName = QFileDialog::getOpenFileName(this,"打开文件","","brainfuck File(*.bf)");
    if(fileName == "") return;
    else
    {
        QFile file(fileName);
        if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QMessageBox::warning(this,"error","打开失败");
            return;
        }
        else
        {
            if(!file.isReadable())
                QMessageBox::warning(this,"error","文件不可读");
            else
            {
                QTextStream textStream(&file);
                while(!textStream.atEnd())
                {
                    ui->textEdit->setPlainText(textStream.readAll());
                }
                ui->textEdit->show();
                file.close();
            }
        }
    }
}

void MainWindow::on_file_new(){
    ui->textEdit->clear();
}

void MainWindow::on_file_save(){
    QFileDialog fileDialog;
    QString fileName = fileDialog.getSaveFileName(this,"保存文件","","brainfuck File(*.bf)");
    if(fileName == "")
    {
        return;
    }
    QFile file(fileName);
    if(!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QMessageBox::warning(this,"error","保存失败");
        return;
    }
    else
    {
        QTextStream textStream(&file);
        QString str = ui->textEdit->toPlainText();
        textStream<<str;
        QMessageBox::warning(this,"tip","保存完毕");
        file.close();
    }
}

void MainWindow::on_text_check(){
    QString tmp = ui->textEdit->toPlainText();

    QString result = "";
    int lines = 0;
    int line_start = 0;
    int cnt_lf = 0;//换行符
    int cnt_un = 0;//未知符号
    int more_lf = 0;
    int left = 0;
    int right = 0;
    int i=0;
    for(;i<tmp.length();i++){
        switch(tmp.at(i).toAscii()){
        case '>':
        case '<':
        case '+':
        case '-':
        case ',':
        case '.':
            line_start++;
            continue;
        case '[':
            left++;
            continue;
        case ']':
            right++;
            continue;
        case '\n':
            cnt_lf++;
            if(i!=tmp.length()){
                if(tmp.at(i+1)=='\n'){
                    more_lf ++;
                }
            }
            lines++;
            line_start = 0;
            break;
        default:
            cnt_un++;
            line_start++;
            QString res="";
            res.sprintf("行:%d, 列:%d, 检测到不可执行字符--ascii-->%d\n", lines, line_start, tmp.at(i).toAscii());
            result.append(res);
            break;
        }
    }
    QString t = "";
    t.sprintf("检测到 %d 处错误:\n", cnt_un);
    t.append(result);
    if(left != right){
        QString brac = "";
        brac.sprintf("检测到括号不匹配，左括号 %d 个， 右括号 %d 个\n", left,right);
        t.append(brac);
    }
    QMessageBox::information(NULL, "检查结果", t);
}

void MainWindow::on_text_format(){
    QString tmp = ui->textEdit->toPlainText();
    QString result = "";
    int i;
    for(i=0;i<tmp.length();i++){
        switch(tmp.at(i).toAscii()){
        case '<':
        case '>':
        case ',':
        case '.':
        case '-':
        case '+':
        case '[':
        case ']':
        case '\n':
            result.append(tmp[i]);
        default:
            continue;
        }
    }
    ui->textEdit->setText(result);
    QMessageBox::information(NULL, "格式化", "格式化完成");
}

void MainWindow::on_help(){
    dock_help->show();
}

void MainWindow::on_about(){
    QMessageBox::information(NULL, "作者", "杨宇轩");
}

void MainWindow::on_debug_start(){
    is_debugger_present = true;
    on_ui();
    ui->textEdit_output->setText("");
    on_input(); //如果忘记确认则 自动获取输入
    dbg = new Debugger(ui->textEdit, input);
}

void MainWindow::on_ui(){
    if(is_debugger_present){
        ui->textEdit->setReadOnly(true);
        ui->pushButton_check->setEnabled(false);
        ui->pushButton_format->setEnabled(false);
        ui->pushButton_start->setEnabled(false);
        ui->pushButton_clear->setEnabled(false);
        ui->action_check->setEnabled(false);
        ui->action_format->setEnabled(false);
        ui->action_new->setEnabled(false);
        ui->action_open->setEnabled(false);
        ui->action_start->setEnabled(false);
        ui->pushButton_over->setEnabled(true);
        ui->pushButton_resume->setEnabled(true);
        ui->pushButton_stepo->setEnabled(true);
//        ui->pushButton_stepi->setEnabled(true);
        ui->action_over->setEnabled(true);
        ui->action_run->setEnabled(true);
        ui->action_resume->setEnabled(true);
        ui->action_stepo->setEnabled(true);
        ui->action_stepi->setEnabled(true);
        ui->pushButton_input->setEnabled(false);
        ui->textEdit_input->setReadOnly(true);
        ui->pushButton_clear_input->setEnabled(false);
    }else{
        ui->pushButton_clear_input->setEnabled(true);
        ui->textEdit_input->setReadOnly(false);
        ui->pushButton_input->setEnabled(true);
        ui->textEdit->setReadOnly(false);
        ui->action_over->setEnabled(false);
        ui->action_run->setEnabled(false);
        ui->action_resume->setEnabled(false);
        ui->action_stepo->setEnabled(false);
        ui->action_stepi->setEnabled(false);
        ui->pushButton_over->setEnabled(false);
        ui->pushButton_resume->setEnabled(false);
        ui->pushButton_stepo->setEnabled(false);
//        ui->pushButton_stepi->setEnabled(false);
        ui->pushButton_check->setEnabled(true);
        ui->pushButton_format->setEnabled(true);
        ui->pushButton_start->setEnabled(true);
        ui->pushButton_clear->setEnabled(true);
        ui->action_check->setEnabled(true);
        ui->action_format->setEnabled(true);
        ui->action_new->setEnabled(true);
        ui->action_open->setEnabled(true);
        ui->action_start->setEnabled(true);
    }
}

void MainWindow::on_debug_over(){
    is_debugger_present = false;
    on_ui();
    QMessageBox::information(NULL, "DEBUG", "调试结束\n");
//    now = dbg->now();// 保存调试退出的状态,以正确显示运行结果
    dbg->reset();

    //绘制折线图
    graph = new GraphWidget;
    graph->setDot(now->spRecord,dbg->size);
    graph->Paint();
    dock_graph->setWidget(graph);
    dock_graph->show();
}

void MainWindow::on_debug_resume(){
    dbg = new Debugger(ui->textEdit, input);
    dbg->run(STEP_OVER);
    on_debug();
}

//应当跟在每一次dbg->run的后面,以更新now
void MainWindow::on_debug(){
    now = dbg->now();

    QString res = dbg->getOutput();
    ui->textEdit_output->setText(res);

    //代码、栈窗口
    ui->label_ip->setText(QString("ip指针: %1").arg(now->ip));
    ui->label_sp->setText(QString("sp指针: %1").arg(now->sp));

    ui->listWidget_code->clear();
    for(int t=0;t<dbg->size;t++){
        ui->listWidget_code->addItem(QString("code[%1]  %2").arg(t).arg((char)now->code[t]));
    }
    ui->listWidget_stack->clear();

    //TODO: 改为MAX_SP
    int m = now->max_sp + 1;
    if(m<16) m=16;
    for(int t=0;t<m;t++){
        ui->listWidget_stack->addItem(QString("stack[%1]  %2").arg(t).arg(now->stack[t]));
    }

    //检查是否已经调试完毕
    if(dbg->size == 0 || now->ip>=dbg->size){
        on_debug_over();
    }

}


//void MainWindow::on_debug_stepi(){
//    dbg->run(STEP_IN);
//    on_debug();
//    QMessageBox::information(NULL, "DEBUG", "单步调试测试中\n");
//}

void MainWindow::on_debug_stepo(){
    dbg->run(STEP_OUT);
    on_debug();
//    QMessageBox::information(NULL, "DEBUG", "单步调试测试中\n");
}

void MainWindow::on_input(){
    QString c = ui->textEdit_input->toPlainText();
    input = c;
}
