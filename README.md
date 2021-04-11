# qt_brainfuck

> An interpreter and debugger of Brainfuck, designed with Qt4(in C++)

## About

- This repo won't be updated any more, which means the critical bugs won't be fixed. It's hard to review my noob code :(
- Just assignment.
- This program need to be recoded, since all of the designs(classes, layouts, widgets) are meet minimum requirements.
- The naming rule is totally a mass, since I nderestimated the paoject's complexity.

## Files

- `-rw-r--r-- Brainfuck.h`
- `-rw-r--r-- Brainfuck.cpp`: Defined Brainfuck interppreter.
- `-rw-r--r-- brainfuck.pro`
- `-rw-r--r-- brainfuck.pro.user`
- `-rw-r--r-- Debugger.cpp`: Defined Debugger, which designed to connect `mainwindow.cpp` and `Brainfuck`. But in fact, I made too many subsequent changes, so the relationship between these files.
- `-rw-r--r-- Debugger.h`
- `-rw-r--r-- graphwidget.cpp`: Draw "memory used" graph.
- `-rw-r--r-- graphwidget.h`
- `-rw-r--r-- icon.qrc`
- `drwxr-xr-x icons/`
- `-rw-r--r-- main.cpp`
- `-rw-r--r-- mainwindow.cpp`
- `-rw-r--r-- mainwindow.h`
- `-rw-r--r-- mainwindow.ui`
- `-rw-r--r-- README.md`

## BUGS

- The stack graph cannot reflect the running state of the cycle structure correctly. In fact, the X pos of graph should depend on the steps, not the size of code. I've overlooked that.
