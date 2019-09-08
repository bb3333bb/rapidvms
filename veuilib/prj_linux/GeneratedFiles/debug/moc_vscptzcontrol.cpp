/****************************************************************************
** Meta object code from reading C++ file 'vscptzcontrol.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/vvidwidget/vscptzcontrol.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vscptzcontrol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_VSCPTZControl_t {
    QByteArrayData data[12];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VSCPTZControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VSCPTZControl_t qt_meta_stringdata_VSCPTZControl = {
    {
QT_MOC_LITERAL(0, 0, 13), // "VSCPTZControl"
QT_MOC_LITERAL(1, 14, 9), // "PTZAction"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 10), // "FPtzAction"
QT_MOC_LITERAL(4, 36, 6), // "action"
QT_MOC_LITERAL(5, 43, 7), // "PTZStop"
QT_MOC_LITERAL(6, 51, 9), // "PTZZoomin"
QT_MOC_LITERAL(7, 61, 10), // "PTZZoomout"
QT_MOC_LITERAL(8, 72, 7), // "PTZLeft"
QT_MOC_LITERAL(9, 80, 5), // "PTZUp"
QT_MOC_LITERAL(10, 86, 7), // "PTZDown"
QT_MOC_LITERAL(11, 94, 8) // "PTZRight"

    },
    "VSCPTZControl\0PTZAction\0\0FPtzAction\0"
    "action\0PTZStop\0PTZZoomin\0PTZZoomout\0"
    "PTZLeft\0PTZUp\0PTZDown\0PTZRight"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VSCPTZControl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,
      10,    0,   62,    2, 0x08 /* Private */,
      11,    0,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void VSCPTZControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VSCPTZControl *_t = static_cast<VSCPTZControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->PTZAction((*reinterpret_cast< FPtzAction(*)>(_a[1]))); break;
        case 1: _t->PTZStop(); break;
        case 2: _t->PTZZoomin(); break;
        case 3: _t->PTZZoomout(); break;
        case 4: _t->PTZLeft(); break;
        case 5: _t->PTZUp(); break;
        case 6: _t->PTZDown(); break;
        case 7: _t->PTZRight(); break;
        default: ;
        }
    }
}

const QMetaObject VSCPTZControl::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_VSCPTZControl.data,
      qt_meta_data_VSCPTZControl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VSCPTZControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VSCPTZControl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VSCPTZControl.stringdata0))
        return static_cast<void*>(const_cast< VSCPTZControl*>(this));
    return QDialog::qt_metacast(_clname);
}

int VSCPTZControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
