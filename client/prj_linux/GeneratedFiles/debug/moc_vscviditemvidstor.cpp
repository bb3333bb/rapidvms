/****************************************************************************
** Meta object code from reading C++ file 'vscviditemvidstor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/common/viditem/vscviditemvidstor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vscviditemvidstor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_VSCVidItemVidStor_t {
    QByteArrayData data[7];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VSCVidItemVidStor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VSCVidItemVidStor_t qt_meta_stringdata_VSCVidItemVidStor = {
    {
QT_MOC_LITERAL(0, 0, 17), // "VSCVidItemVidStor"
QT_MOC_LITERAL(1, 18, 14), // "SlotCallChange"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 4), // "type"
QT_MOC_LITERAL(4, 39, 11), // "std::string"
QT_MOC_LITERAL(5, 51, 5), // "strId"
QT_MOC_LITERAL(6, 57, 6) // "strCam"

    },
    "VSCVidItemVidStor\0SlotCallChange\0\0"
    "type\0std::string\0strId\0strCam"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VSCVidItemVidStor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4, 0x80000000 | 4,    3,    5,    6,

       0        // eod
};

void VSCVidItemVidStor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VSCVidItemVidStor *_t = static_cast<VSCVidItemVidStor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SlotCallChange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< std::string(*)>(_a[2])),(*reinterpret_cast< std::string(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject VSCVidItemVidStor::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_VSCVidItemVidStor.data,
      qt_meta_data_VSCVidItemVidStor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VSCVidItemVidStor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VSCVidItemVidStor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VSCVidItemVidStor.stringdata0))
        return static_cast<void*>(const_cast< VSCVidItemVidStor*>(this));
    if (!strcmp(_clname, "VSCVidItemInf"))
        return static_cast< VSCVidItemInf*>(const_cast< VSCVidItemVidStor*>(this));
    return QObject::qt_metacast(_clname);
}

int VSCVidItemVidStor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
