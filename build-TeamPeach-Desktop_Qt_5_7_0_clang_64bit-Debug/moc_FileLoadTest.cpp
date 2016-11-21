/****************************************************************************
** Meta object code from reading C++ file 'FileLoadTest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/tests/FileLoadTest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FileLoadTest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FileLoadTest_t {
    QByteArrayData data[11];
    char stringdata0[178];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileLoadTest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileLoadTest_t qt_meta_stringdata_FileLoadTest = {
    {
QT_MOC_LITERAL(0, 0, 12), // "FileLoadTest"
QT_MOC_LITERAL(1, 13, 10), // "loadNoFile"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 10), // "loadGrants"
QT_MOC_LITERAL(4, 36, 16), // "loadPublications"
QT_MOC_LITERAL(5, 53, 17), // "loadPresentations"
QT_MOC_LITERAL(6, 71, 12), // "loadTeaching"
QT_MOC_LITERAL(7, 84, 21), // "teachingMandatoryCols"
QT_MOC_LITERAL(8, 106, 25), // "presentationMandatoryCols"
QT_MOC_LITERAL(9, 132, 19), // "grantsMandatoryCols"
QT_MOC_LITERAL(10, 152, 25) // "publicationsMandatoryCols"

    },
    "FileLoadTest\0loadNoFile\0\0loadGrants\0"
    "loadPublications\0loadPresentations\0"
    "loadTeaching\0teachingMandatoryCols\0"
    "presentationMandatoryCols\0grantsMandatoryCols\0"
    "publicationsMandatoryCols"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileLoadTest[] = {

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

void FileLoadTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FileLoadTest *_t = static_cast<FileLoadTest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadNoFile(); break;
        case 1: _t->loadGrants(); break;
        case 2: _t->loadPublications(); break;
        case 3: _t->loadPresentations(); break;
        case 4: _t->loadTeaching(); break;
        case 5: _t->teachingMandatoryCols(); break;
        case 6: _t->presentationMandatoryCols(); break;
        case 7: _t->grantsMandatoryCols(); break;
        case 8: _t->publicationsMandatoryCols(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject FileLoadTest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FileLoadTest.data,
      qt_meta_data_FileLoadTest,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FileLoadTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileLoadTest::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FileLoadTest.stringdata0))
        return static_cast<void*>(const_cast< FileLoadTest*>(this));
    return QObject::qt_metacast(_clname);
}

int FileLoadTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
