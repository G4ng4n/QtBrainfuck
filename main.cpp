#include "mainwindow.h"
#include <QApplication>
#include <Brainfuck.h>
#include <QDebug>
#include <QTextCodec>
#include <stdio.h>

int main(int argc, char *argv[])
{
    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF8"));
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF8"));
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF8"));
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
//    QString c="+++++++\n+++[\n>+++++++>++\n\n+++++++\n+>+++>++++<<<<-]>++.>+.+++++++..+++.>>++++.<++.<++++++++.--------.+++.------.--------.>+.";
//    //c = "++[>+>+<<-]";
//    Brainfuck *bf = new Brainfuck(c,"");
//    bf->test(1);
//    return 0;

}
