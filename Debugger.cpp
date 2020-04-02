#include <Debugger.h>
#include <mainwindow.h>
#include <QTextCursor>
#include <QTextCharFormat>
#include <QTextEdit>
#include <stdio.h>

Debugger::Debugger(QTextEdit *edit, QString i){
    QString c = edit->toPlainText();
    this->bf = new Brainfuck(c, i);
    this->edit = edit;
    this->size = edit->toPlainText().length();
    reset();
}

void Debugger::reset(){
    bf->init();
}

void Debugger::run(int mode){
    //执行代码
    bf->run(mode);
}

INFO::INFO(){
    ip=0;
    sp=0;
    val_ip=0;
    val_sp=0;
    max_sp=0;
    int i;
    for(i=0;i<MAX_SIZE;i++){
        code[i] = 0;
        stack[i] = 0;
        out_buffer[i] = 0;
        in_buffer[i] = 0;
    }
}

INFO *Debugger::now(){

    INFO *info = new INFO();
    int i;
    for(i=0;i<MAX_SIZE;i++){
        int ci = bf->getCode(i);
        int si = bf->getStack(i);
        int bi = bf->getBuffer(i);
        int pi = bf->getRecord(i);
        info->code[i] = ci;
        info->stack[i] = si;
        info->out_buffer[i] = bi;
        info->spRecord[i] = pi;

    }
    info->ip = bf->getIp();
    info->sp = bf->getSp();
    info->val_ip = info->code[info->ip];
    info->val_sp = info->stack[info->sp];
    info->max_sp = bf->getMaxSp();

    return info;
}

QString Debugger::getOutput(){
    return QString(bf->getStringBuffer().toStdString().data());
}
