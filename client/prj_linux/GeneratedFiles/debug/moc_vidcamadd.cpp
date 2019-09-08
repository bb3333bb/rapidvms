/****************************************************************************
** Meta object code from reading C++ file 'vidcamadd.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/config/vidstor/vidcamadd.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vidcamadd.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_VidCamAdd_t {
    QByteArrayData data[16];
    char stringdata0[208];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VidCamAdd_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VidCamAdd_t qt_meta_stringdata_VidCamAdd = {
    {
QT_MOC_LITERAL(0, 0, 9), // "VidCamAdd"
QT_MOC_LITERAL(1, 10, 20), // "SignalSectionClicked"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 3), // "row"
QT_MOC_LITERAL(4, 36, 6), // "column"
QT_MOC_LITERAL(5, 43, 10), // "SlotNewCam"
QT_MOC_LITERAL(6, 54, 13), // "SlotDeleteCam"
QT_MOC_LITERAL(7, 68, 12), // "SlotApplyCam"
QT_MOC_LITERAL(8, 81, 13), // "SlotCancelCam"
QT_MOC_LITERAL(9, 95, 18), // "SlotSectionClicked"
QT_MOC_LITERAL(10, 114, 22), // "SlotRadioButtonClicked"
QT_MOC_LITERAL(11, 137, 14), // "SlotSearchRecv"
QT_MOC_LITERAL(12, 152, 15), // "SlotStartSearch"
QT_MOC_LITERAL(13, 168, 14), // "SlotStopSearch"
QT_MOC_LITERAL(14, 183, 10), // "SlotAddAll"
QT_MOC_LITERAL(15, 194, 13) // "SlotSelectAll"

    },
    "VidCamAdd\0SignalSectionClicked\0\0row\0"
    "column\0SlotNewCam\0SlotDeleteCam\0"
    "SlotApplyCam\0SlotCancelCam\0"
    "SlotSectionClicked\0SlotRadioButtonClicked\0"
    "SlotSearchRecv\0SlotStartSearch\0"
    "SlotStopSearch\0SlotAddAll\0SlotSelectAll"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VidCamAdd[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   79,    2, 0x0a /* Public */,
       6,    0,   80,    2, 0x0a /* Public */,
       7,    0,   81,    2, 0x0a /* Public */,
       8,    0,   82,    2, 0x0a /* Public */,
       9,    2,   83,    2, 0x0a /* Public */,
      10,    0,   88,    2, 0x0a /* Public */,
      11,    0,   89,    2, 0x0a /* Public */,
      12,    0,   90,    2, 0x0a /* Public */,
      13,    0,   91,    2, 0x0a /* Public */,
      14,    0,   92,    2, 0x0a /* Public */,
      15,    0,   93,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void VidCamAdd::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VidCamAdd *_t = static_cast<VidCamAdd *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SignalSectionClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->SlotNewCam(); break;
        case 2: _t->SlotDeleteCam(); break;
        case 3: _t->SlotApplyCam(); break;
        case 4: _t->SlotCancelCam(); break;
        case 5: _t->SlotSectionClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->SlotRadioButtonClicked(); break;
        case 7: _t->SlotSearchRecv(); break;
        case 8: _t->SlotStartSearch(); break;
        case 9: _t->SlotStopSearch(); break;
        case 10: _t->SlotAddAll(); break;
        case 11: _t->SlotSelectAll(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (VidCamAdd::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VidCamAdd::SignalSectionClicked)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject VidCamAdd::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_VidCamAdd.data,
      qt_meta_data_VidCamAdd,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VidCamAdd::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VidCamAdd::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VidCamAdd.stringdata0))
        return static_cast<void*>(const_cast< VidCamAdd*>(this));
    return QWidget::qt_metacast(_clname);
}

int VidCamAdd::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void VidCamAdd::SignalSectionClicked(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
