/****************************************************************************
** Meta object code from reading C++ file 'hat.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../HAT1retafinal/hat.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hat.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HAT_t {
    QByteArrayData data[10];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HAT_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HAT_t qt_meta_stringdata_HAT = {
    {
QT_MOC_LITERAL(0, 0, 3), // "HAT"
QT_MOC_LITERAL(1, 4, 14), // "on_Yes_clicked"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 13), // "on_No_clicked"
QT_MOC_LITERAL(4, 34, 20), // "on_pegatabel_clicked"
QT_MOC_LITERAL(5, 55, 27), // "on_progressBar_valueChanged"
QT_MOC_LITERAL(6, 83, 5), // "value"
QT_MOC_LITERAL(7, 89, 20), // "on_Starttest_clicked"
QT_MOC_LITERAL(8, 110, 7), // "checked"
QT_MOC_LITERAL(9, 118, 21) // "on_pegatabela_clicked"

    },
    "HAT\0on_Yes_clicked\0\0on_No_clicked\0"
    "on_pegatabel_clicked\0on_progressBar_valueChanged\0"
    "value\0on_Starttest_clicked\0checked\0"
    "on_pegatabela_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HAT[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    1,   52,    2, 0x08 /* Private */,
       7,    1,   55,    2, 0x08 /* Private */,
       9,    1,   58,    2, 0x08 /* Private */,
       7,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,

       0        // eod
};

void HAT::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HAT *_t = static_cast<HAT *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_Yes_clicked(); break;
        case 1: _t->on_No_clicked(); break;
        case 2: _t->on_pegatabel_clicked(); break;
        //case 3: _t->on_progressBar_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        //case 4: _t->on_Starttest_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        //case 5: _t->on_pegatabela_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_Starttest_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HAT::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_HAT.data,
      qt_meta_data_HAT,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *HAT::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HAT::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HAT.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int HAT::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE