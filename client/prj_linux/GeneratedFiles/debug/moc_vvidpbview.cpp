/****************************************************************************
** Meta object code from reading C++ file 'vvidpbview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/live/vvidpbview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vvidpbview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_VVidPBView_t {
    QByteArrayData data[24];
    char stringdata0[320];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VVidPBView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VVidPBView_t qt_meta_stringdata_VVidPBView = {
    {
QT_MOC_LITERAL(0, 0, 10), // "VVidPBView"
QT_MOC_LITERAL(1, 11, 16), // "ShowFocusClicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 3), // "nId"
QT_MOC_LITERAL(4, 33, 18), // "ShowLayout1Clicked"
QT_MOC_LITERAL(5, 52, 16), // "SetLayoutMode4x4"
QT_MOC_LITERAL(6, 69, 16), // "SetLayoutMode3x3"
QT_MOC_LITERAL(7, 86, 16), // "SetLayoutMode2x2"
QT_MOC_LITERAL(8, 103, 14), // "SetLayoutMode6"
QT_MOC_LITERAL(9, 118, 17), // "SetLayoutMode12p1"
QT_MOC_LITERAL(10, 136, 14), // "SetLayoutMode1"
QT_MOC_LITERAL(11, 151, 16), // "SetLayoutMode5x5"
QT_MOC_LITERAL(12, 168, 16), // "SetLayoutMode6x6"
QT_MOC_LITERAL(13, 185, 16), // "SetLayoutMode8x8"
QT_MOC_LITERAL(14, 202, 16), // "SetLayoutMode1x3"
QT_MOC_LITERAL(15, 219, 16), // "SetLayoutMode1p6"
QT_MOC_LITERAL(16, 236, 11), // "DeviceEvent"
QT_MOC_LITERAL(17, 248, 8), // "deviceId"
QT_MOC_LITERAL(18, 257, 4), // "type"
QT_MOC_LITERAL(19, 262, 19), // "CameraDoubleClicked"
QT_MOC_LITERAL(20, 282, 11), // "std::string"
QT_MOC_LITERAL(21, 294, 7), // "strStor"
QT_MOC_LITERAL(22, 302, 6), // "strCam"
QT_MOC_LITERAL(23, 309, 10) // "strCamName"

    },
    "VVidPBView\0ShowFocusClicked\0\0nId\0"
    "ShowLayout1Clicked\0SetLayoutMode4x4\0"
    "SetLayoutMode3x3\0SetLayoutMode2x2\0"
    "SetLayoutMode6\0SetLayoutMode12p1\0"
    "SetLayoutMode1\0SetLayoutMode5x5\0"
    "SetLayoutMode6x6\0SetLayoutMode8x8\0"
    "SetLayoutMode1x3\0SetLayoutMode1p6\0"
    "DeviceEvent\0deviceId\0type\0CameraDoubleClicked\0"
    "std::string\0strStor\0strCam\0strCamName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VVidPBView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x0a /* Public */,
       4,    1,   92,    2, 0x0a /* Public */,
       5,    0,   95,    2, 0x0a /* Public */,
       6,    0,   96,    2, 0x0a /* Public */,
       7,    0,   97,    2, 0x0a /* Public */,
       8,    0,   98,    2, 0x0a /* Public */,
       9,    0,   99,    2, 0x0a /* Public */,
      10,    0,  100,    2, 0x0a /* Public */,
      11,    0,  101,    2, 0x0a /* Public */,
      12,    0,  102,    2, 0x0a /* Public */,
      13,    0,  103,    2, 0x0a /* Public */,
      14,    0,  104,    2, 0x0a /* Public */,
      15,    0,  105,    2, 0x0a /* Public */,
      16,    2,  106,    2, 0x0a /* Public */,
      19,    3,  111,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   17,   18,
    QMetaType::Void, 0x80000000 | 20, 0x80000000 | 20, 0x80000000 | 20,   21,   22,   23,

       0        // eod
};

void VVidPBView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VVidPBView *_t = static_cast<VVidPBView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ShowFocusClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->ShowLayout1Clicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->SetLayoutMode4x4(); break;
        case 3: _t->SetLayoutMode3x3(); break;
        case 4: _t->SetLayoutMode2x2(); break;
        case 5: _t->SetLayoutMode6(); break;
        case 6: _t->SetLayoutMode12p1(); break;
        case 7: _t->SetLayoutMode1(); break;
        case 8: _t->SetLayoutMode5x5(); break;
        case 9: _t->SetLayoutMode6x6(); break;
        case 10: _t->SetLayoutMode8x8(); break;
        case 11: _t->SetLayoutMode1x3(); break;
        case 12: _t->SetLayoutMode1p6(); break;
        case 13: _t->DeviceEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: _t->CameraDoubleClicked((*reinterpret_cast< std::string(*)>(_a[1])),(*reinterpret_cast< std::string(*)>(_a[2])),(*reinterpret_cast< std::string(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject VVidPBView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_VVidPBView.data,
      qt_meta_data_VVidPBView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VVidPBView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VVidPBView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VVidPBView.stringdata0))
        return static_cast<void*>(const_cast< VVidPBView*>(this));
    return QWidget::qt_metacast(_clname);
}

int VVidPBView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
