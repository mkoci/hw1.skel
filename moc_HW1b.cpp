/****************************************************************************
** Meta object code from reading C++ file 'HW1b.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "hw1/HW1b.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HW1b.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HW1b_t {
    QByteArrayData data[8];
    char stringdata0[61];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HW1b_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HW1b_t qt_meta_stringdata_HW1b = {
    {
QT_MOC_LITERAL(0, 0, 4), // "HW1b"
QT_MOC_LITERAL(1, 5, 12), // "changeSubdiv"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 5), // "value"
QT_MOC_LITERAL(4, 25, 11), // "changeTheta"
QT_MOC_LITERAL(5, 37, 5), // "angle"
QT_MOC_LITERAL(6, 43, 11), // "changeTwist"
QT_MOC_LITERAL(7, 55, 5) // "state"

    },
    "HW1b\0changeSubdiv\0\0value\0changeTheta\0"
    "angle\0changeTwist\0state"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HW1b[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       4,    1,   32,    2, 0x0a /* Public */,
       6,    1,   35,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void HW1b::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HW1b *_t = static_cast<HW1b *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeSubdiv((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->changeTheta((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->changeTwist((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject HW1b::staticMetaObject = {
    { &HW::staticMetaObject, qt_meta_stringdata_HW1b.data,
      qt_meta_data_HW1b,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HW1b::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HW1b::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HW1b.stringdata0))
        return static_cast<void*>(const_cast< HW1b*>(this));
    return HW::qt_metacast(_clname);
}

int HW1b::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = HW::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
