/****************************************************************************
** Meta object code from reading C++ file 'vscviditemstorconf.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/config/viditem/vscviditemstorconf.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vscviditemstorconf.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_VSCVidItemStorConf_t {
    QByteArrayData data[7];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VSCVidItemStorConf_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VSCVidItemStorConf_t qt_meta_stringdata_VSCVidItemStorConf = {
    {
QT_MOC_LITERAL(0, 0, 18), // "VSCVidItemStorConf"
QT_MOC_LITERAL(1, 19, 14), // "SlotCallChange"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 4), // "type"
QT_MOC_LITERAL(4, 40, 11), // "std::string"
QT_MOC_LITERAL(5, 52, 5), // "strId"
QT_MOC_LITERAL(6, 58, 6) // "strCam"

    },
    "VSCVidItemStorConf\0SlotCallChange\0\0"
    "type\0std::string\0strId\0strCam"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VSCVidItemStorConf[] = {

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

void VSCVidItemStorConf::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VSCVidItemStorConf *_t = static_cast<VSCVidItemStorConf *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SlotCallChange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< std::string(*)>(_a[2])),(*reinterpret_cast< std::string(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject VSCVidItemStorConf::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_VSCVidItemStorConf.data,
      qt_meta_data_VSCVidItemStorConf,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VSCVidItemStorConf::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VSCVidItemStorConf::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VSCVidItemStorConf.stringdata0))
        return static_cast<void*>(const_cast< VSCVidItemStorConf*>(this));
    if (!strcmp(_clname, "VSCVidItemInf"))
        return static_cast< VSCVidItemInf*>(const_cast< VSCVidItemStorConf*>(this));
    return QObject::qt_metacast(_clname);
}

int VSCVidItemStorConf::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
