/****************************************************************************
** Meta object code from reading C++ file 'InputValidityTest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/tests/InputValidityTest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'InputValidityTest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_InputValidityTest_t {
    QByteArrayData data[11];
    char stringdata0[202];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InputValidityTest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InputValidityTest_t qt_meta_stringdata_InputValidityTest = {
    {
QT_MOC_LITERAL(0, 0, 17), // "InputValidityTest"
QT_MOC_LITERAL(1, 18, 14), // "checkFileValid"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 20), // "checkFileNonexistent"
QT_MOC_LITERAL(4, 55, 23), // "checkFileMismatchedType"
QT_MOC_LITERAL(5, 79, 25), // "checkFileMissingMandatory"
QT_MOC_LITERAL(6, 105, 28), // "checkFileMissingNonMandatory"
QT_MOC_LITERAL(7, 134, 17), // "checkDetectsTeach"
QT_MOC_LITERAL(8, 152, 15), // "checkDetectsPub"
QT_MOC_LITERAL(9, 168, 16), // "checkDetectsPres"
QT_MOC_LITERAL(10, 185, 16) // "checkDetectsFund"

    },
    "InputValidityTest\0checkFileValid\0\0"
    "checkFileNonexistent\0checkFileMismatchedType\0"
    "checkFileMissingMandatory\0"
    "checkFileMissingNonMandatory\0"
    "checkDetectsTeach\0checkDetectsPub\0"
    "checkDetectsPres\0checkDetectsFund"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InputValidityTest[] = {

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
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void InputValidityTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        InputValidityTest *_t = static_cast<InputValidityTest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->checkFileValid(); break;
        case 1: _t->checkFileNonexistent(); break;
        case 2: _t->checkFileMismatchedType(); break;
        case 3: _t->checkFileMissingMandatory(); break;
        case 4: _t->checkFileMissingNonMandatory(); break;
        case 5: _t->checkDetectsTeach(); break;
        case 6: _t->checkDetectsPub(); break;
        case 7: _t->checkDetectsPres(); break;
        case 8: _t->checkDetectsFund(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject InputValidityTest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_InputValidityTest.data,
      qt_meta_data_InputValidityTest,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *InputValidityTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InputValidityTest::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_InputValidityTest.stringdata0))
        return static_cast<void*>(const_cast< InputValidityTest*>(this));
    return QObject::qt_metacast(_clname);
}

int InputValidityTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
