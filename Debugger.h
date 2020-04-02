#ifndef DEBUGGER_H
#define DEBUGGER_H
#include "Brainfuck.h"

#define STEP_OVER 0
#define STEP_IN 1
#define STEP_OUT 2

#include <QTextEdit>

class INFO{
public:
    int stack[MAX_SIZE];
    int code[MAX_SIZE];
    int out_buffer[MAX_SIZE];
    int in_buffer[MAX_SIZE];
    int spRecord[MAX_SIZE];
    int ip;
    int sp;
    int val_ip;
    int val_sp;
    int max_sp;
    INFO();
};

class Debugger{
public:
    INFO* now();
    void reset();
    void run(int mode);
    Debugger(QTextEdit *edit, QString i);
    int size;
    QString getOutput();


private:
    Brainfuck *bf;
    QTextEdit *edit;
//    QTextDocument *doc;
//    QTextCursor *cur;
};

#endif // DEBUGGER_H
