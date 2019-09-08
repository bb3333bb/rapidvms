/****************************************************************************
** Meta object code from reading C++ file 'vvidpbcontrol.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/vvidpbcontrol.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vvidpbcontrol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_VVidPBControl_t {
    QByteArrayData data[15];
    char stringdata0[185];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VVidPBControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VVidPBControl_t qt_meta_stringdata_VVidPBControl = {
    {
QT_MOC_LITERAL(0, 0, 13), // "VVidPBControl"
QT_MOC_LITERAL(1, 14, 16), // "SignalTimeUpdate"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 5), // "nTime"
QT_MOC_LITERAL(4, 38, 14), // "SignalSeekTime"
QT_MOC_LITERAL(5, 53, 10), // "SignalPlay"
QT_MOC_LITERAL(6, 64, 11), // "SignalPause"
QT_MOC_LITERAL(7, 76, 15), // "SlotDateSetting"
QT_MOC_LITERAL(8, 92, 10), // "SlotExport"
QT_MOC_LITERAL(9, 103, 12), // "SlotSeekTime"
QT_MOC_LITERAL(10, 116, 20), // "SlotSeekTimeFromDate"
QT_MOC_LITERAL(11, 137, 8), // "SlotPlay"
QT_MOC_LITERAL(12, 146, 9), // "SlotPause"
QT_MOC_LITERAL(13, 156, 14), // "SlotUpdateTime"
QT_MOC_LITERAL(14, 171, 13) // "SlotClearPlay"

    },
    "VVidPBControl\0SignalTimeUpdate\0\0nTime\0"
    "SignalSeekTime\0SignalPlay\0SignalPause\0"
    "SlotDateSetting\0SlotExport\0SlotSeekTime\0"
    "SlotSeekTimeFromDate\0SlotPlay\0SlotPause\0"
    "SlotUpdateTime\0SlotClearPlay"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VVidPBControl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    1,   77,    2, 0x06 /* Public */,
       5,    0,   80,    2, 0x06 /* Public */,
       6,    0,   81,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   82,    2, 0x0a /* Public */,
       8,    0,   83,    2, 0x0a /* Public */,
       9,    1,   84,    2, 0x0a /* Public */,
      10,    1,   87,    2, 0x0a /* Public */,
      11,    0,   90,    2, 0x0a /* Public */,
      12,    0,   91,    2, 0x0a /* Public */,
      13,    1,   92,    2, 0x0a /* Public */,
      14,    0,   95,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void,

       0        // eod
};

void VVidPBControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VVidPBControl *_t = static_cast<VVidPBControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SignalTimeUpdate((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 1: _t->SignalSeekTime((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 2: _t->SignalPlay(); break;
        case 3: _t->SignalPause(); break;
        case 4: _t->SlotDateSetting(); break;
        case 5: _t->SlotExport(); break;
        case 6: _t->SlotSeekTime((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 7: _t->SlotSeekTimeFromDate((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 8: _t->SlotPlay(); break;
        case 9: _t->SlotPause(); break;
        case 10: _t->SlotUpdateTime((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 11: _t->SlotClearPlay(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (VVidPBControl::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VVidPBControl::SignalTimeUpdate)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (VVidPBControl::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VVidPBControl::SignalSeekTime)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (VVidPBControl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VVidPBControl::SignalPlay)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (VVidPBControl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VVidPBControl::SignalPause)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject VVidPBControl::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_VVidPBControl.data,
      qt_meta_data_VVidPBControl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VVidPBControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VVidPBControl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VVidPBControl.stringdata0))
        return static_cast<void*>(const_cast< VVidPBControl*>(this));
    return QWidget::qt_metacast(_clname);
}

int VVidPBControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void VVidPBControl::SignalTimeUpdate(unsigned int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void VVidPBControl::SignalSeekTime(unsigned int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void VVidPBControl::SignalPlay()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void VVidPBControl::SignalPause()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
