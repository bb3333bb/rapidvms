/****************************************************************************
** Meta object code from reading C++ file 'vidstoradd.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/config/vidstor/vidstoradd.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vidstoradd.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_VidStorAdd_t {
    QByteArrayData data[10];
    char stringdata0[119];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VidStorAdd_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VidStorAdd_t qt_meta_stringdata_VidStorAdd = {
    {
QT_MOC_LITERAL(0, 0, 10), // "VidStorAdd"
QT_MOC_LITERAL(1, 11, 20), // "SignalSectionClicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 3), // "row"
QT_MOC_LITERAL(4, 37, 6), // "column"
QT_MOC_LITERAL(5, 44, 11), // "SlotNewStor"
QT_MOC_LITERAL(6, 56, 14), // "SlotDeleteStor"
QT_MOC_LITERAL(7, 71, 13), // "SlotApplyStor"
QT_MOC_LITERAL(8, 85, 14), // "SlotCancelStor"
QT_MOC_LITERAL(9, 100, 18) // "SlotSectionClicked"

    },
    "VidStorAdd\0SignalSectionClicked\0\0row\0"
    "column\0SlotNewStor\0SlotDeleteStor\0"
    "SlotApplyStor\0SlotCancelStor\0"
    "SlotSectionClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VidStorAdd[] = {

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

void VidStorAdd::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VidStorAdd *_t = static_cast<VidStorAdd *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SignalSectionClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->SlotNewStor(); break;
        case 2: _t->SlotDeleteStor(); break;
        case 3: _t->SlotApplyStor(); break;
        case 4: _t->SlotCancelStor(); break;
        case 5: _t->SlotSectionClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (VidStorAdd::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VidStorAdd::SignalSectionClicked)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject VidStorAdd::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_VidStorAdd.data,
      qt_meta_data_VidStorAdd,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VidStorAdd::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VidStorAdd::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VidStorAdd.stringdata0))
        return static_cast<void*>(const_cast< VidStorAdd*>(this));
    return QWidget::qt_metacast(_clname);
}

int VidStorAdd::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void VidStorAdd::SignalSectionClicked(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
