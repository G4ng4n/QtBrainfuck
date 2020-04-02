#ifndef BRAINFUCK_H
#define BRAINFUCK_H

#include <QString>

// 设置代码段和数据段的大小
#define MAX_SIZE 4096

class Brainfuck{

// 一个bf的实例表示一个完整的解释器
// 实例的构造方法接收一个字符串
public:
    Brainfuck(QString c, QString input);
    void test(int mode); // 用于测试类的正确性
    int getStack(int at); // 返回数据
    int getSp(); // 返回栈指针， 用于设置编辑区高亮
    int getIp(); // 返回下一条指令
    void run(int mode); // 运行代码,0为直接运行，1为步入，2为步过
    int getBuffer(int at);
    QString getStringBuffer();
    int getCode(int at);
    void init();
    int getMaxSp();
    int getRecord(int i);

private:
    QString print();
    void debug_print();
    void reg_print();
    int stack[MAX_SIZE];
    int code[MAX_SIZE];
    int sp;
    int max_sp;
    int size;
    int ip;
    int tmp_ip;
    int brackets;
    int buffer[MAX_SIZE]; //存储输出
    int p_buffer;
    int input[MAX_SIZE]; //传入输入
    int p_input;
    int spRecord[MAX_SIZE];
    int pSpRecord;
    void runCode(int start, int end, bool step); // 真正的执行部分

};

#endif // BRAINFUCK_H
