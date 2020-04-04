/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDockWidget>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_open;
    QAction *action_save;
    QAction *action_exit;
    QAction *action_stepi;
    QAction *action_stepo;
    QAction *action_run;
    QAction *action_new;
    QAction *action_stack;
    QAction *action_output;
    QAction *action_about;
    QAction *action_manual;
    QAction *action_resume;
    QAction *action_start;
    QAction *action_over;
    QAction *action_check;
    QAction *action_format;
    QAction *action_hide;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_start;
    QPushButton *pushButton_over;
    QPushButton *pushButton_stepo;
    QPushButton *pushButton_resume;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_check;
    QPushButton *pushButton_format;
    QPushButton *pushButton_clear;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QMenu *menu_5;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QDockWidget *dockWidget_output;
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *textEdit_input;
    QPushButton *pushButton_input;
    QPushButton *pushButton_clear_input;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *textEdit_output;
    QDockWidget *dockWidget_stack;
    QWidget *dockWidgetContents_2;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_ip;
    QListWidget *listWidget_code;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_sp;
    QListWidget *listWidget_stack;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(960, 720);
        MainWindow->setMinimumSize(QSize(960, 720));
        MainWindow->setMaximumSize(QSize(960, 720));
        action_open = new QAction(MainWindow);
        action_open->setObjectName(QString::fromUtf8("action_open"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/open"), QSize(), QIcon::Normal, QIcon::Off);
        action_open->setIcon(icon);
        action_save = new QAction(MainWindow);
        action_save->setObjectName(QString::fromUtf8("action_save"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/save"), QSize(), QIcon::Normal, QIcon::Off);
        action_save->setIcon(icon1);
        action_exit = new QAction(MainWindow);
        action_exit->setObjectName(QString::fromUtf8("action_exit"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/exit"), QSize(), QIcon::Normal, QIcon::Off);
        action_exit->setIcon(icon2);
        action_stepi = new QAction(MainWindow);
        action_stepi->setObjectName(QString::fromUtf8("action_stepi"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/stepi"), QSize(), QIcon::Normal, QIcon::Off);
        action_stepi->setIcon(icon3);
        action_stepo = new QAction(MainWindow);
        action_stepo->setObjectName(QString::fromUtf8("action_stepo"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/stepo"), QSize(), QIcon::Normal, QIcon::Off);
        action_stepo->setIcon(icon4);
        action_run = new QAction(MainWindow);
        action_run->setObjectName(QString::fromUtf8("action_run"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/reload"), QSize(), QIcon::Normal, QIcon::Off);
        action_run->setIcon(icon5);
        action_new = new QAction(MainWindow);
        action_new->setObjectName(QString::fromUtf8("action_new"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/new"), QSize(), QIcon::Normal, QIcon::Off);
        action_new->setIcon(icon6);
        action_stack = new QAction(MainWindow);
        action_stack->setObjectName(QString::fromUtf8("action_stack"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/stack"), QSize(), QIcon::Normal, QIcon::Off);
        action_stack->setIcon(icon7);
        action_output = new QAction(MainWindow);
        action_output->setObjectName(QString::fromUtf8("action_output"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/show"), QSize(), QIcon::Normal, QIcon::Off);
        action_output->setIcon(icon8);
        action_about = new QAction(MainWindow);
        action_about->setObjectName(QString::fromUtf8("action_about"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons/about"), QSize(), QIcon::Normal, QIcon::Off);
        action_about->setIcon(icon9);
        action_manual = new QAction(MainWindow);
        action_manual->setObjectName(QString::fromUtf8("action_manual"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icons/help"), QSize(), QIcon::Normal, QIcon::Off);
        action_manual->setIcon(icon10);
        action_resume = new QAction(MainWindow);
        action_resume->setObjectName(QString::fromUtf8("action_resume"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icons/step"), QSize(), QIcon::Normal, QIcon::Off);
        action_resume->setIcon(icon11);
        action_start = new QAction(MainWindow);
        action_start->setObjectName(QString::fromUtf8("action_start"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/icons/debug"), QSize(), QIcon::Normal, QIcon::Off);
        action_start->setIcon(icon12);
        action_over = new QAction(MainWindow);
        action_over->setObjectName(QString::fromUtf8("action_over"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/icons/over"), QSize(), QIcon::Normal, QIcon::Off);
        action_over->setIcon(icon13);
        action_check = new QAction(MainWindow);
        action_check->setObjectName(QString::fromUtf8("action_check"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/icons/check"), QSize(), QIcon::Normal, QIcon::Off);
        action_check->setIcon(icon14);
        action_format = new QAction(MainWindow);
        action_format->setObjectName(QString::fromUtf8("action_format"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/icons/format"), QSize(), QIcon::Normal, QIcon::Off);
        action_format->setIcon(icon15);
        action_hide = new QAction(MainWindow);
        action_hide->setObjectName(QString::fromUtf8("action_hide"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        QFont font;
        font.setFamily(QString::fromUtf8("Consolas"));
        font.setPointSize(12);
        textEdit->setFont(font);

        gridLayout->addWidget(textEdit, 0, 0, 1, 1);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_start = new QPushButton(groupBox);
        pushButton_start->setObjectName(QString::fromUtf8("pushButton_start"));

        horizontalLayout->addWidget(pushButton_start);

        pushButton_over = new QPushButton(groupBox);
        pushButton_over->setObjectName(QString::fromUtf8("pushButton_over"));

        horizontalLayout->addWidget(pushButton_over);

        pushButton_stepo = new QPushButton(groupBox);
        pushButton_stepo->setObjectName(QString::fromUtf8("pushButton_stepo"));

        horizontalLayout->addWidget(pushButton_stepo);

        pushButton_resume = new QPushButton(groupBox);
        pushButton_resume->setObjectName(QString::fromUtf8("pushButton_resume"));

        horizontalLayout->addWidget(pushButton_resume);


        gridLayout->addWidget(groupBox, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_check = new QPushButton(groupBox_2);
        pushButton_check->setObjectName(QString::fromUtf8("pushButton_check"));

        horizontalLayout_2->addWidget(pushButton_check);

        pushButton_format = new QPushButton(groupBox_2);
        pushButton_format->setObjectName(QString::fromUtf8("pushButton_format"));

        horizontalLayout_2->addWidget(pushButton_format);

        pushButton_clear = new QPushButton(groupBox_2);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));

        horizontalLayout_2->addWidget(pushButton_clear);


        gridLayout->addWidget(groupBox_2, 2, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 960, 26));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        menu_4 = new QMenu(menubar);
        menu_4->setObjectName(QString::fromUtf8("menu_4"));
        menu_5 = new QMenu(menubar);
        menu_5->setObjectName(QString::fromUtf8("menu_5"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        dockWidget_output = new QDockWidget(MainWindow);
        dockWidget_output->setObjectName(QString::fromUtf8("dockWidget_output"));
        dockWidget_output->setMinimumSize(QSize(200, 500));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_3 = new QGroupBox(dockWidgetContents);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_2 = new QVBoxLayout(groupBox_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        textEdit_input = new QTextEdit(groupBox_3);
        textEdit_input->setObjectName(QString::fromUtf8("textEdit_input"));

        verticalLayout_2->addWidget(textEdit_input);

        pushButton_input = new QPushButton(groupBox_3);
        pushButton_input->setObjectName(QString::fromUtf8("pushButton_input"));

        verticalLayout_2->addWidget(pushButton_input);

        pushButton_clear_input = new QPushButton(groupBox_3);
        pushButton_clear_input->setObjectName(QString::fromUtf8("pushButton_clear_input"));

        verticalLayout_2->addWidget(pushButton_clear_input);


        verticalLayout->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(dockWidgetContents);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        verticalLayout_3 = new QVBoxLayout(groupBox_4);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        textEdit_output = new QTextEdit(groupBox_4);
        textEdit_output->setObjectName(QString::fromUtf8("textEdit_output"));
        textEdit_output->setReadOnly(true);

        verticalLayout_3->addWidget(textEdit_output);


        verticalLayout->addWidget(groupBox_4);

        dockWidget_output->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget_output);
        dockWidget_stack = new QDockWidget(MainWindow);
        dockWidget_stack->setObjectName(QString::fromUtf8("dockWidget_stack"));
        dockWidget_stack->setMinimumSize(QSize(500, 500));
        dockWidget_stack->setMaximumSize(QSize(500, 500));
        dockWidget_stack->setFloating(true);
        dockWidget_stack->setAllowedAreas(Qt::NoDockWidgetArea);
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QString::fromUtf8("dockWidgetContents_2"));
        horizontalLayout_3 = new QHBoxLayout(dockWidgetContents_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        groupBox_5 = new QGroupBox(dockWidgetContents_2);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        verticalLayout_4 = new QVBoxLayout(groupBox_5);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_ip = new QLabel(groupBox_5);
        label_ip->setObjectName(QString::fromUtf8("label_ip"));

        verticalLayout_4->addWidget(label_ip);

        listWidget_code = new QListWidget(groupBox_5);
        listWidget_code->setObjectName(QString::fromUtf8("listWidget_code"));

        verticalLayout_4->addWidget(listWidget_code);


        horizontalLayout_3->addWidget(groupBox_5);

        groupBox_6 = new QGroupBox(dockWidgetContents_2);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        verticalLayout_5 = new QVBoxLayout(groupBox_6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_sp = new QLabel(groupBox_6);
        label_sp->setObjectName(QString::fromUtf8("label_sp"));

        verticalLayout_5->addWidget(label_sp);

        listWidget_stack = new QListWidget(groupBox_6);
        listWidget_stack->setObjectName(QString::fromUtf8("listWidget_stack"));

        verticalLayout_5->addWidget(listWidget_stack);


        horizontalLayout_3->addWidget(groupBox_6);

        dockWidget_stack->setWidget(dockWidgetContents_2);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dockWidget_stack);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_5->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_3->menuAction());
        menubar->addAction(menu_4->menuAction());
        menu->addAction(action_new);
        menu->addAction(action_open);
        menu->addAction(action_save);
        menu->addAction(action_exit);
        menu_2->addAction(action_start);
        menu_2->addAction(action_stepo);
        menu_2->addAction(action_resume);
        menu_2->addAction(action_over);
        menu_3->addAction(action_stack);
        menu_3->addAction(action_output);
        menu_3->addAction(action_hide);
        menu_4->addAction(action_manual);
        menu_4->addAction(action_about);
        menu_5->addAction(action_check);
        menu_5->addAction(action_format);
        toolBar->addAction(action_new);
        toolBar->addAction(action_open);
        toolBar->addAction(action_save);
        toolBar->addSeparator();
        toolBar->addAction(action_start);
        toolBar->addAction(action_stepi);
        toolBar->addAction(action_stepo);
        toolBar->addAction(action_resume);
        toolBar->addAction(action_over);
        toolBar->addAction(action_run);
        toolBar->addSeparator();
        toolBar->addAction(action_check);
        toolBar->addAction(action_format);

        retranslateUi(MainWindow);
        QObject::connect(action_exit, SIGNAL(triggered()), MainWindow, SLOT(close()));
        QObject::connect(pushButton_clear, SIGNAL(clicked()), textEdit, SLOT(clear()));
        QObject::connect(action_output, SIGNAL(triggered()), dockWidget_output, SLOT(show()));
        QObject::connect(action_hide, SIGNAL(triggered()), dockWidget_output, SLOT(hide()));
        QObject::connect(pushButton_clear_input, SIGNAL(clicked()), textEdit_input, SLOT(clear()));
        QObject::connect(action_stack, SIGNAL(triggered()), dockWidget_stack, SLOT(show()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        action_open->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        action_open->setStatusTip(QApplication::translate("MainWindow", "\346\211\223\345\274\200brainfuck\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        action_open->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0, QApplication::UnicodeUTF8));
        action_save->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        action_save->setStatusTip(QApplication::translate("MainWindow", "\344\277\235\345\255\230\345\275\223\345\211\215\347\252\227\345\217\243\345\206\205\345\256\271\344\270\272brainfuck\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        action_save->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        action_exit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        action_exit->setStatusTip(QApplication::translate("MainWindow", "\351\200\200\345\207\272\347\250\213\345\272\217", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        action_exit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        action_stepi->setText(QApplication::translate("MainWindow", "\344\270\213\344\270\200\346\255\245", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        action_stepi->setStatusTip(QApplication::translate("MainWindow", "\351\200\220\345\255\227\347\254\246\346\211\247\350\241\214", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        action_stepi->setShortcut(QApplication::translate("MainWindow", "F7", 0, QApplication::UnicodeUTF8));
        action_stepo->setText(QApplication::translate("MainWindow", "\344\270\213\344\270\200\346\255\245", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        action_stepo->setStatusTip(QApplication::translate("MainWindow", "\346\211\247\350\241\214\350\207\263\344\270\213\344\270\200\350\241\214", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        action_stepo->setShortcut(QApplication::translate("MainWindow", "F8", 0, QApplication::UnicodeUTF8));
        action_run->setText(QApplication::translate("MainWindow", "\351\207\215\346\226\260\350\275\275\345\205\245", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        action_run->setStatusTip(QApplication::translate("MainWindow", "\345\274\200\345\247\213/\351\207\215\346\226\260\345\274\200\345\247\213\350\260\203\350\257\225\357\274\214\346\255\244\346\227\266\344\273\243\347\240\201\346\241\206\345\260\206\344\270\215\345\217\257\347\274\226\350\276\221", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        action_run->setShortcut(QApplication::translate("MainWindow", "Ctrl+F2", 0, QApplication::UnicodeUTF8));
        action_new->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        action_new->setStatusTip(QApplication::translate("MainWindow", "\346\226\260\345\273\272\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        action_new->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0, QApplication::UnicodeUTF8));
        action_stack->setText(QApplication::translate("MainWindow", "\346\240\210\347\252\227\345\217\243", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        action_stack->setStatusTip(QApplication::translate("MainWindow", "\346\230\276\347\244\272/\351\232\220\350\227\217\346\240\210\347\252\227\345\217\243", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        action_stack->setShortcut(QApplication::translate("MainWindow", "Alt+1", 0, QApplication::UnicodeUTF8));
        action_output->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\350\276\223\345\205\245\350\276\223\345\207\272", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        action_output->setStatusTip(QApplication::translate("MainWindow", "\346\230\276\347\244\272/\351\232\220\350\227\217\350\276\223\345\205\245\350\276\223\345\207\272\347\252\227\345\217\243", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        action_output->setShortcut(QApplication::translate("MainWindow", "Alt+2", 0, QApplication::UnicodeUTF8));
        action_about->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        action_about->setStatusTip(QApplication::translate("MainWindow", "\345\205\263\344\272\216\344\275\234\350\200\205", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        action_manual->setText(QApplication::translate("MainWindow", "Brainfuck\350\257\255\346\263\225\350\247\204\345\210\231", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        action_manual->setStatusTip(QApplication::translate("MainWindow", "\346\230\276\347\244\272\345\256\214\346\225\264\350\257\255\346\263\225\350\247\204\345\210\231", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        action_manual->setShortcut(QApplication::translate("MainWindow", "Ctrl+H", 0, QApplication::UnicodeUTF8));
        action_resume->setText(QApplication::translate("MainWindow", "\347\273\247\347\273\255", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        action_resume->setStatusTip(QApplication::translate("MainWindow", "\350\277\220\350\241\214\350\207\263\347\273\223\345\260\276", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        action_resume->setShortcut(QApplication::translate("MainWindow", "C", 0, QApplication::UnicodeUTF8));
        action_start->setText(QApplication::translate("MainWindow", "\350\277\220\350\241\214\344\273\243\347\240\201", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        action_start->setStatusTip(QApplication::translate("MainWindow", "\345\274\200\345\247\213\350\260\203\350\257\225\345\220\216\357\274\214\344\273\243\347\240\201\346\241\206\345\260\206\344\270\215\345\217\257\347\274\226\350\276\221", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        action_start->setShortcut(QApplication::translate("MainWindow", "Ctrl+F2", 0, QApplication::UnicodeUTF8));
        action_over->setText(QApplication::translate("MainWindow", "\347\273\223\346\235\237\350\260\203\350\257\225", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        action_over->setStatusTip(QApplication::translate("MainWindow", "\347\273\223\346\235\237\350\260\203\350\257\225\347\212\266\346\200\201\357\274\214\351\207\215\346\226\260\347\274\226\350\276\221\344\273\243\347\240\201", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        action_over->setShortcut(QApplication::translate("MainWindow", "F3", 0, QApplication::UnicodeUTF8));
        action_check->setText(QApplication::translate("MainWindow", "\344\273\243\347\240\201\350\257\255\346\263\225\346\243\200\346\237\245", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        action_check->setStatusTip(QApplication::translate("MainWindow", "\346\243\200\346\237\245\346\213\254\345\217\267\343\200\201\346\227\240\345\205\263\345\255\227\347\254\246", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        action_format->setText(QApplication::translate("MainWindow", "\344\273\243\347\240\201\346\240\274\345\274\217\345\214\226", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        action_format->setStatusTip(QApplication::translate("MainWindow", "\346\270\205\351\231\244\346\227\240\345\205\263\345\255\227\347\254\246\357\274\214\346\215\242\350\241\214\347\254\246\345\260\206\344\274\232\350\242\253\344\277\235\347\225\231", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        action_hide->setText(QApplication::translate("MainWindow", "\351\232\220\350\227\217\350\276\223\345\205\245\350\276\223\345\207\272", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "\350\260\203\350\257\225\346\223\215\344\275\234", 0, QApplication::UnicodeUTF8));
        pushButton_start->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\350\260\203\350\257\225", 0, QApplication::UnicodeUTF8));
        pushButton_over->setText(QApplication::translate("MainWindow", "\347\273\223\346\235\237\350\260\203\350\257\225", 0, QApplication::UnicodeUTF8));
        pushButton_stepo->setText(QApplication::translate("MainWindow", "\346\255\245\350\277\207", 0, QApplication::UnicodeUTF8));
        pushButton_resume->setText(QApplication::translate("MainWindow", "\350\277\220\350\241\214\350\207\263\347\273\223\346\235\237", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\344\273\243\347\240\201\345\267\245\345\205\267", 0, QApplication::UnicodeUTF8));
        pushButton_check->setText(QApplication::translate("MainWindow", "\350\257\255\346\263\225\346\243\200\346\237\245", 0, QApplication::UnicodeUTF8));
        pushButton_format->setText(QApplication::translate("MainWindow", "\344\273\243\347\240\201\346\240\274\345\274\217\345\214\226", 0, QApplication::UnicodeUTF8));
        pushButton_clear->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272", 0, QApplication::UnicodeUTF8));
        menu->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
        menu_2->setTitle(QApplication::translate("MainWindow", "\350\277\220\350\241\214", 0, QApplication::UnicodeUTF8));
        menu_3->setTitle(QApplication::translate("MainWindow", "\347\252\227\345\217\243", 0, QApplication::UnicodeUTF8));
        menu_4->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251", 0, QApplication::UnicodeUTF8));
        menu_5->setTitle(QApplication::translate("MainWindow", "\344\273\243\347\240\201", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0, QApplication::UnicodeUTF8));
        dockWidget_output->setWindowTitle(QApplication::translate("MainWindow", "\350\276\223\345\205\245/\350\276\223\345\207\272", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\350\276\223\345\205\245", 0, QApplication::UnicodeUTF8));
        pushButton_input->setText(QApplication::translate("MainWindow", "\347\241\256\350\256\244", 0, QApplication::UnicodeUTF8));
        pushButton_clear_input->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "\350\276\223\345\207\272", 0, QApplication::UnicodeUTF8));
        dockWidget_stack->setWindowTitle(QApplication::translate("MainWindow", "\345\206\205\345\255\230\345\270\203\345\261\200", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "\344\273\243\347\240\201", 0, QApplication::UnicodeUTF8));
        label_ip->setText(QString());
        groupBox_6->setTitle(QApplication::translate("MainWindow", "\346\240\210", 0, QApplication::UnicodeUTF8));
        label_sp->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
