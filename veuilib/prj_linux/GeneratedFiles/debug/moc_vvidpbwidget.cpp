/****************************************************************************
** Meta object code from reading C++ file 'vvidpbwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/vvidpbwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vvidpbwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_VVidPBWidget_t {
    QByteArrayData data[20];
    char stringdata0[228];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VVidPBWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VVidPBWidget_t qt_meta_stringdata_VVidPBWidget = {
    {
QT_MOC_LITERAL(0, 0, 12), // "VVidPBWidget"
QT_MOC_LITERAL(1, 13, 16), // "ShowFocusClicked"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 3), // "nId"
QT_MOC_LITERAL(4, 35, 14), // "Layout1Clicked"
QT_MOC_LITERAL(5, 50, 15), // "VideoSwitchWith"
QT_MOC_LITERAL(6, 66, 6), // "nSrcId"
QT_MOC_LITERAL(7, 73, 6), // "nDstId"
QT_MOC_LITERAL(8, 80, 10), // "stopAction"
QT_MOC_LITERAL(9, 91, 14), // "videoMouseMove"
QT_MOC_LITERAL(10, 106, 12), // "QMouseEvent*"
QT_MOC_LITERAL(11, 119, 1), // "e"
QT_MOC_LITERAL(12, 121, 21), // "videoResizeEventTimer"
QT_MOC_LITERAL(13, 143, 16), // "videoResizeEvent"
QT_MOC_LITERAL(14, 160, 9), // "AutoFocus"
QT_MOC_LITERAL(15, 170, 12), // "SlotSeekTime"
QT_MOC_LITERAL(16, 183, 5), // "nTime"
QT_MOC_LITERAL(17, 189, 8), // "SlotPlay"
QT_MOC_LITERAL(18, 198, 9), // "SlotPause"
QT_MOC_LITERAL(19, 208, 19) // "SlotTimerInfoUpdate"

    },
    "VVidPBWidget\0ShowFocusClicked\0\0nId\0"
    "Layout1Clicked\0VideoSwitchWith\0nSrcId\0"
    "nDstId\0stopAction\0videoMouseMove\0"
    "QMouseEvent*\0e\0videoResizeEventTimer\0"
    "videoResizeEvent\0AutoFocus\0SlotSeekTime\0"
    "nTime\0SlotPlay\0SlotPause\0SlotTimerInfoUpdate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VVidPBWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    1,   77,    2, 0x06 /* Public */,
       5,    2,   80,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   85,    2, 0x0a /* Public */,
       9,    1,   86,    2, 0x0a /* Public */,
      12,    0,   89,    2, 0x0a /* Public */,
      13,    0,   90,    2, 0x0a /* Public */,
      14,    0,   91,    2, 0x0a /* Public */,
      15,    1,   92,    2, 0x0a /* Public */,
      17,    0,   95,    2, 0x0a /* Public */,
      18,    0,   96,    2, 0x0a /* Public */,
      19,    0,   97,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void VVidPBWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VVidPBWidget *_t = static_cast<VVidPBWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ShowFocusClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->Layout1Clicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->VideoSwitchWith((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->stopAction(); break;
        case 4: _t->videoMouseMove((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 5: _t->videoResizeEventTimer(); break;
        case 6: _t->videoResizeEvent(); break;
        case 7: _t->AutoFocus(); break;
        case 8: _t->SlotSeekTime((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 9: _t->SlotPlay(); break;
        case 10: _t->SlotPause(); break;
        case 11: _t->SlotTimerInfoUpdate(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (VVidPBWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VVidPBWidget::ShowFocusClicked)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (VVidPBWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VVidPBWidget::Layout1Clicked)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (VVidPBWidget::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VVidPBWidget::VideoSwitchWith)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject VVidPBWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_VVidPBWidget.data,
      qt_meta_data_VVidPBWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VVidPBWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VVidPBWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VVidPBWidget.stringdata0))
        return static_cast<void*>(const_cast< VVidPBWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int VVidPBWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void VVidPBWidget::ShowFocusClicked(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void VVidPBWidget::Layout1Clicked(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void VVidPBWidget::VideoSwitchWith(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
