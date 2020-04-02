#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDockWidget>
#include <Debugger.h>
#include <QLineEdit>
#include <QLabel>
#include <QVBoxLayout>
#include <graphwidget.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    Debugger *dbg;
    bool is_debugger_present;
    INFO* now;

public slots:
    void on_file_new();
    void on_file_open();
    void on_file_save();
    void on_text_format();
    void on_text_check();
    void on_help();
    void on_about();
    void on_ui();
    void on_debug_start();//初始化dbg
    void on_debug(); //用于更新输入输出窗口数据
    void on_debug_over();
    void on_debug_resume();
//    void on_debug_stepi();
    void on_debug_stepo();
    void on_input();

private:
    Ui::MainWindow *ui;
    QDockWidget *dock_stack;
    QDockWidget *dock_io;
    QString input;
    QDockWidget *dock_help;
    QLineEdit *io_lineedit;
    QLabel *output;
    QVBoxLayout *io_layout;
    QString out_string;
    GraphWidget *graph;
    QDockWidget *dock_graph;
};

#endif // MAINWINDOW_H
