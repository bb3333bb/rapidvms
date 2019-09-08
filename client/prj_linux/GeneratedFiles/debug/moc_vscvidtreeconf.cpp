/****************************************************************************
** Meta object code from reading C++ file 'vscvidtreeconf.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/config/vscvidtreeconf.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vscvidtreeconf.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_VSCVidTreeConf_t {
    QByteArrayData data[16];
    char stringdata0[243];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VSCVidTreeConf_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VSCVidTreeConf_t qt_meta_stringdata_VSCVidTreeConf = {
    {
QT_MOC_LITERAL(0, 0, 14), // "VSCVidTreeConf"
QT_MOC_LITERAL(1, 15, 20), // "SignalStorAddSelectd"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 21), // "SignalStorConfSelectd"
QT_MOC_LITERAL(4, 59, 11), // "std::string"
QT_MOC_LITERAL(5, 71, 7), // "strStor"
QT_MOC_LITERAL(6, 79, 21), // "SignalDiskConfSelectd"
QT_MOC_LITERAL(7, 101, 23), // "SignalClientConfSelectd"
QT_MOC_LITERAL(8, 125, 21), // "SignalViewConfSelectd"
QT_MOC_LITERAL(9, 147, 21), // "SignalEmapConfSelectd"
QT_MOC_LITERAL(10, 169, 19), // "SignalCamAddSelectd"
QT_MOC_LITERAL(11, 189, 20), // "SignalCamConfSelectd"
QT_MOC_LITERAL(12, 210, 6), // "strCam"
QT_MOC_LITERAL(13, 217, 14), // "SlotCallChange"
QT_MOC_LITERAL(14, 232, 4), // "type"
QT_MOC_LITERAL(15, 237, 5) // "strId"

    },
    "VSCVidTreeConf\0SignalStorAddSelectd\0"
    "\0SignalStorConfSelectd\0std::string\0"
    "strStor\0SignalDiskConfSelectd\0"
    "SignalClientConfSelectd\0SignalViewConfSelectd\0"
    "SignalEmapConfSelectd\0SignalCamAddSelectd\0"
    "SignalCamConfSelectd\0strCam\0SlotCallChange\0"
    "type\0strId"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VSCVidTreeConf[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    1,   60,    2, 0x06 /* Public */,
       6,    1,   63,    2, 0x06 /* Public */,
       7,    0,   66,    2, 0x06 /* Public */,
       8,    0,   67,    2, 0x06 /* Public */,
       9,    0,   68,    2, 0x06 /* Public */,
      10,    1,   69,    2, 0x06 /* Public */,
      11,    2,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    3,   77,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4,    5,   12,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4, 0x80000000 | 4,   14,   15,   12,

       0        // eod
};

void VSCVidTreeConf::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VSCVidTreeConf *_t = static_cast<VSCVidTreeConf *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SignalStorAddSelectd(); break;
        case 1: _t->SignalStorConfSelectd((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 2: _t->SignalDiskConfSelectd((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 3: _t->SignalClientConfSelectd(); break;
        case 4: _t->SignalViewConfSelectd(); break;
        case 5: _t->SignalEmapConfSelectd(); break;
        case 6: _t->SignalCamAddSelectd((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 7: _t->SignalCamConfSelectd((*reinterpret_cast< std::string(*)>(_a[1])),(*reinterpret_cast< std::string(*)>(_a[2]))); break;
        case 8: _t->SlotCallChange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< std::string(*)>(_a[2])),(*reinterpret_cast< std::string(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (VSCVidTreeConf::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VSCVidTreeConf::SignalStorAddSelectd)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (VSCVidTreeConf::*_t)(std::string );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VSCVidTreeConf::SignalStorConfSelectd)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (VSCVidTreeConf::*_t)(std::string );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VSCVidTreeConf::SignalDiskConfSelectd)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (VSCVidTreeConf::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VSCVidTreeConf::SignalClientConfSelectd)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (VSCVidTreeConf::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VSCVidTreeConf::SignalViewConfSelectd)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (VSCVidTreeConf::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VSCVidTreeConf::SignalEmapConfSelectd)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (VSCVidTreeConf::*_t)(std::string );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VSCVidTreeConf::SignalCamAddSelectd)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (VSCVidTreeConf::*_t)(std::string , std::string );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VSCVidTreeConf::SignalCamConfSelectd)) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject VSCVidTreeConf::staticMetaObject = {
    { &VSCVidTreeInf::staticMetaObject, qt_meta_stringdata_VSCVidTreeConf.data,
      qt_meta_data_VSCVidTreeConf,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VSCVidTreeConf::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VSCVidTreeConf::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VSCVidTreeConf.stringdata0))
        return static_cast<void*>(const_cast< VSCVidTreeConf*>(this));
    return VSCVidTreeInf::qt_metacast(_clname);
}

int VSCVidTreeConf::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VSCVidTreeInf::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void VSCVidTreeConf::SignalStorAddSelectd()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void VSCVidTreeConf::SignalStorConfSelectd(std::string _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void VSCVidTreeConf::SignalDiskConfSelectd(std::string _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void VSCVidTreeConf::SignalClientConfSelectd()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void VSCVidTreeConf::SignalViewConfSelectd()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void VSCVidTreeConf::SignalEmapConfSelectd()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void VSCVidTreeConf::SignalCamAddSelectd(std::string _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void VSCVidTreeConf::SignalCamConfSelectd(std::string _t1, std::string _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
