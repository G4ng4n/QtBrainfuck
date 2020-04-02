#include "Brainfuck.h"
#include <QString>
#include <QMessageBox>
#include <iostream>
#include <cstdio>
#include <QDebug>

#define DEBUG 0

Brainfuck::Brainfuck(QString c, QString inp){
    int i;
    size = c.length();
    for(i=0;i<c.length();i++){
        code[i] = (int)c.at(i).toAscii();
    }
    for(i=c.length();i<MAX_SIZE;i++){
        code[i] = 0;
    }
    if(inp != ""){
        for(i = 0;i<inp.length();i++){
            input[i] = (int)inp.at(i).toAscii();
        }
    }
    for(i=0;i<size;i++){
        buffer[i] = 0;
        stack[i] = 0;
        spRecord[i] = 0;
    }
    init();
}

void Brainfuck::test(int mode){
    switch(mode){
    case 1:
        while(ip<size){
            run(1);
        }break;
    case 2:
        while(ip<size){
            run(2);
        }break;
    case 0:
        run(0);
        break;
    default:
        break;
    }
    printf(getStringBuffer().toStdString().data());
}

int Brainfuck::getStack(int at){
    return stack[at];
}

int Brainfuck::getIp(){
    return ip;
}

int Brainfuck::getSp(){
    return sp;
}

void Brainfuck::run(int mode){
    while(code[ip] == '\n'){
        ip++;
    }

    switch(mode){
    case 0:
        runCode(0, size, false);
        break;
    case 1:
        runCode(ip,ip+1,false);
        break;
    case 2:
        runCode(ip,size, true);
        break;
    default:
        break;
    }

    if(DEBUG){
        reg_print();
        //printf(getStringBuffer().toStdString().data());
    }
}

int Brainfuck::getBuffer(int at){
    return buffer[at];
}

QString Brainfuck::getStringBuffer(){
    QString res = "";
    int i;
    for(i=0;buffer[i]!=0;i++){
        res += (QChar)buffer[i];
    }
    return res;
}

int Brainfuck::getMaxSp(){
    return max_sp;
}

// step为true则执行到当前行结束
void Brainfuck::runCode(int start, int end, bool step){
    for(ip=start;ip<end;ip++){
        if(DEBUG){
            debug_print();
        }
        switch(code[ip]){
        case '<':
            sp--;
            break;
        case '>':
            sp++;
            if(max_sp < sp){
                max_sp = sp;
            }
            break;
        case '+':
            stack[sp]++;

            break;
        case '-':
            stack[sp]--;
            break;
        case '.':
            buffer[p_buffer++] = stack[sp];
            break;
        case ',':
            stack[sp] = input[p_input++];
            break;
        case '\n':
            if(step){
                return;
            }else{
                continue;
            }
            break;
        case '[':
            brackets = 0;
            for(tmp_ip=ip;tmp_ip<size;tmp_ip++){
                if(code[tmp_ip]=='[') brackets++;
                if(code[tmp_ip]==']') brackets--;
                if(!brackets) break;
            }
            if(!stack[sp]){
                ip = tmp_ip;
                break;
            }else continue;
        case ']':
            tmp_ip = ip;
            brackets = 0;
            if(!stack[sp]) break;
            for(;tmp_ip>0;tmp_ip--){
                if(code[tmp_ip] == ']') brackets++;
                if(code[tmp_ip] == '[') brackets--;
                if(!brackets){
                    ip = tmp_ip;
                    break;
                }
            }
            break;
        default:
            continue;
        }
        spRecord[pSpRecord++]=sp;
    }
}

QString Brainfuck::print(){
    QString result = "";
    int i = 0;
    for(;i<size;i++){
        result += "Address:" + (QString)i + ", Stack:" + (QString)stack[i] + '\n';
    }
    return result;
}

void Brainfuck::reg_print(){
    printf("ip:%d, tmp_ip:%d, sp:%d\n", ip, tmp_ip, sp);
    printf("code[ip]:%d, code[tmp_ip]:%d\n", code[ip], code[tmp_ip]);
}

void Brainfuck::debug_print(){
    printf("Address:%d, Stack:%d, ip:%d, code[ip]=%d\n", sp, stack[sp], ip, code[ip]);
}

void Brainfuck::init(){
    sp = 0;
    ip = 0;
    p_buffer = 0;
    p_input = 0;
    tmp_ip = 0;
    brackets = 0;
    max_sp = 0;
    pSpRecord = 0;
}

int Brainfuck::getCode(int at){
    return code[at];
}

int Brainfuck::getRecord(int i){
    return spRecord[i];
}
