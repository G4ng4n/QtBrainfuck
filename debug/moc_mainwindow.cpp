/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
      26,   11,   11,   11, 0x0a,
      41,   11,   11,   11, 0x0a,
      56,   11,   11,   11, 0x0a,
      73,   11,   11,   11, 0x0a,
      89,   11,   11,   11, 0x0a,
      99,   11,   11,   11, 0x0a,
     110,   11,   11,   11, 0x0a,
     118,   11,   11,   11, 0x0a,
     135,   11,   11,   11, 0x0a,
     146,   11,   11,   11, 0x0a,
     162,   11,   11,   11, 0x0a,
     180,   11,   11,   11, 0x0a,
     197,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_file_new()\0on_file_open()\0"
    "on_file_save()\0on_text_format()\0"
    "on_text_check()\0on_help()\0on_about()\0"
    "on_ui()\0on_debug_start()\0on_debug()\0"
    "on_debug_over()\0on_debug_resume()\0"
    "on_debug_stepo()\0on_input()\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_file_new(); break;
        case 1: _t->on_file_open(); break;
        case 2: _t->on_file_save(); break;
        case 3: _t->on_text_format(); break;
        case 4: _t->on_text_check(); break;
        case 5: _t->on_help(); break;
        case 6: _t->on_about(); break;
        case 7: _t->on_ui(); break;
        case 8: _t->on_debug_start(); break;
        case 9: _t->on_debug(); break;
        case 10: _t->on_debug_over(); break;
        case 11: _t->on_debug_resume(); break;
        case 12: _t->on_debug_stepo(); break;
        case 13: _t->on_input(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
