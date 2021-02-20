/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../oop_lab_2/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[21];
    char stringdata0[319];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 11), // "clock_timer"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 11), // "updateClock"
QT_MOC_LITERAL(4, 36, 10), // "clock_ends"
QT_MOC_LITERAL(5, 47, 10), // "starttimer"
QT_MOC_LITERAL(6, 58, 2), // "ms"
QT_MOC_LITERAL(7, 61, 12), // "count_timers"
QT_MOC_LITERAL(8, 74, 10), // "startClock"
QT_MOC_LITERAL(9, 85, 11), // "tim_minimal"
QT_MOC_LITERAL(10, 97, 10), // "tim_update"
QT_MOC_LITERAL(11, 108, 7), // "tim_end"
QT_MOC_LITERAL(12, 116, 1), // "i"
QT_MOC_LITERAL(13, 118, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(14, 140, 37), // "on_listWidget_timer_itemDoubl..."
QT_MOC_LITERAL(15, 178, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(16, 195, 4), // "item"
QT_MOC_LITERAL(17, 200, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(18, 224, 31), // "on_listWidget_timer_itemChanged"
QT_MOC_LITERAL(19, 256, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(20, 280, 38) // "on_listWidget_clocks_itemDoub..."

    },
    "MainWindow\0clock_timer\0\0updateClock\0"
    "clock_ends\0starttimer\0ms\0count_timers\0"
    "startClock\0tim_minimal\0tim_update\0"
    "tim_end\0i\0on_pushButton_clicked\0"
    "on_listWidget_timer_itemDoubleClicked\0"
    "QListWidgetItem*\0item\0on_pushButton_2_clicked\0"
    "on_listWidget_timer_itemChanged\0"
    "on_pushButton_3_clicked\0"
    "on_listWidget_clocks_itemDoubleClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    0,   91,    2, 0x08 /* Private */,
       5,    1,   92,    2, 0x08 /* Private */,
       7,    0,   95,    2, 0x08 /* Private */,
       8,    0,   96,    2, 0x08 /* Private */,
       9,    0,   97,    2, 0x08 /* Private */,
      10,    0,   98,    2, 0x08 /* Private */,
      11,    1,   99,    2, 0x08 /* Private */,
      13,    0,  102,    2, 0x08 /* Private */,
      14,    1,  103,    2, 0x08 /* Private */,
      17,    0,  106,    2, 0x08 /* Private */,
      18,    1,  107,    2, 0x08 /* Private */,
      19,    0,  110,    2, 0x08 /* Private */,
      20,    1,  111,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clock_timer(); break;
        case 1: _t->updateClock(); break;
        case 2: _t->clock_ends(); break;
        case 3: _t->starttimer((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: { int _r = _t->count_timers();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->startClock(); break;
        case 6: _t->tim_minimal(); break;
        case 7: _t->tim_update(); break;
        case 8: _t->tim_end((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_pushButton_clicked(); break;
        case 10: _t->on_listWidget_timer_itemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 11: _t->on_pushButton_2_clicked(); break;
        case 12: _t->on_listWidget_timer_itemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 13: _t->on_pushButton_3_clicked(); break;
        case 14: _t->on_listWidget_clocks_itemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
