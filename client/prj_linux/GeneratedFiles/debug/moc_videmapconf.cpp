/****************************************************************************
** Meta object code from reading C++ file 'videmapconf.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/config/videmap/videmapconf.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'videmapconf.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_VidEmapConf_t {
    QByteArrayData data[10];
    char stringdata0[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VidEmapConf_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VidEmapConf_t qt_meta_stringdata_VidEmapConf = {
    {
QT_MOC_LITERAL(0, 0, 11), // "VidEmapConf"
QT_MOC_LITERAL(1, 12, 20), // "SignalSectionClicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 3), // "row"
QT_MOC_LITERAL(4, 38, 6), // "column"
QT_MOC_LITERAL(5, 45, 7), // "SlotNew"
QT_MOC_LITERAL(6, 53, 10), // "SlotDelete"
QT_MOC_LITERAL(7, 64, 9), // "SlotApply"
QT_MOC_LITERAL(8, 74, 10), // "SlotCancel"
QT_MOC_LITERAL(9, 85, 18) // "SlotSectionClicked"

    },
    "VidEmapConf\0SignalSectionClicked\0\0row\0"
    "column\0SlotNew\0SlotDelete\0SlotApply\0"
    "SlotCancel\0SlotSectionClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VidEmapConf[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   49,    2, 0x0a /* Public */,
       6,    0,   50,    2, 0x0a /* Public */,
       7,    0,   51,    2, 0x0a /* Public */,
       8,    0,   52,    2, 0x0a /* Public */,
       9,    2,   53,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,

       0        // eod
};

void VidEmapConf::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VidEmapConf *_t = static_cast<VidEmapConf *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SignalSectionClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->SlotNew(); break;
        case 2: _t->SlotDelete(); break;
        case 3: _t->SlotApply(); break;
        case 4: _t->SlotCancel(); break;
        case 5: _t->SlotSectionClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (VidEmapConf::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VidEmapConf::SignalSectionClicked)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject VidEmapConf::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_VidEmapConf.data,
      qt_meta_data_VidEmapConf,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VidEmapConf::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VidEmapConf::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VidEmapConf.stringdata0))
        return static_cast<void*>(const_cast< VidEmapConf*>(this));
    return QWidget::qt_metacast(_clname);
}

int VidEmapConf::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void VidEmapConf::SignalSectionClicked(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
