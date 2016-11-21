/****************************************************************************
** Meta object code from reading C++ file 'CustomSort.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/gui/CustomSort.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CustomSort.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CustomSort_t {
    QByteArrayData data[14];
    char stringdata0[278];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CustomSort_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CustomSort_t qt_meta_stringdata_CustomSort = {
    {
QT_MOC_LITERAL(0, 0, 10), // "CustomSort"
QT_MOC_LITERAL(1, 11, 7), // "setNext"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 8), // "fieldNum"
QT_MOC_LITERAL(4, 29, 12), // "currentIndex"
QT_MOC_LITERAL(5, 42, 30), // "on_field_0_currentIndexChanged"
QT_MOC_LITERAL(6, 73, 5), // "index"
QT_MOC_LITERAL(7, 79, 30), // "on_field_1_currentIndexChanged"
QT_MOC_LITERAL(8, 110, 30), // "on_field_2_currentIndexChanged"
QT_MOC_LITERAL(9, 141, 30), // "on_field_3_currentIndexChanged"
QT_MOC_LITERAL(10, 172, 30), // "on_field_4_currentIndexChanged"
QT_MOC_LITERAL(11, 203, 30), // "on_field_5_currentIndexChanged"
QT_MOC_LITERAL(12, 234, 21), // "on_buttonBox_rejected"
QT_MOC_LITERAL(13, 256, 21) // "on_buttonBox_accepted"

    },
    "CustomSort\0setNext\0\0fieldNum\0currentIndex\0"
    "on_field_0_currentIndexChanged\0index\0"
    "on_field_1_currentIndexChanged\0"
    "on_field_2_currentIndexChanged\0"
    "on_field_3_currentIndexChanged\0"
    "on_field_4_currentIndexChanged\0"
    "on_field_5_currentIndexChanged\0"
    "on_buttonBox_rejected\0on_buttonBox_accepted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CustomSort[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   59,    2, 0x08 /* Private */,
       5,    1,   64,    2, 0x08 /* Private */,
       7,    1,   67,    2, 0x08 /* Private */,
       8,    1,   70,    2, 0x08 /* Private */,
       9,    1,   73,    2, 0x08 /* Private */,
      10,    1,   76,    2, 0x08 /* Private */,
      11,    1,   79,    2, 0x08 /* Private */,
      12,    0,   82,    2, 0x08 /* Private */,
      13,    0,   83,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CustomSort::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CustomSort *_t = static_cast<CustomSort *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setNext((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->on_field_0_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_field_1_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_field_2_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_field_3_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_field_4_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_field_5_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_buttonBox_rejected(); break;
        case 8: _t->on_buttonBox_accepted(); break;
        default: ;
        }
    }
}

const QMetaObject CustomSort::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CustomSort.data,
      qt_meta_data_CustomSort,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CustomSort::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CustomSort::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CustomSort.stringdata0))
        return static_cast<void*>(const_cast< CustomSort*>(this));
    return QDialog::qt_metacast(_clname);
}

int CustomSort::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
