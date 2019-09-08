/****************************************************************************
** Meta object code from reading C++ file 'qevdevkeyboardhandler_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../input/evdevkeyboard/qevdevkeyboardhandler_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qevdevkeyboardhandler_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QEvdevKeyboardHandler_t {
    QByteArrayData data[8];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QEvdevKeyboardHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QEvdevKeyboardHandler_t qt_meta_stringdata_QEvdevKeyboardHandler = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QEvdevKeyboardHandler"
QT_MOC_LITERAL(1, 22, 11), // "readKeycode"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 14), // "processKeycode"
QT_MOC_LITERAL(4, 50, 13), // "KeycodeAction"
QT_MOC_LITERAL(5, 64, 7), // "keycode"
QT_MOC_LITERAL(6, 72, 7), // "pressed"
QT_MOC_LITERAL(7, 80, 10) // "autorepeat"

    },
    "QEvdevKeyboardHandler\0readKeycode\0\0"
    "processKeycode\0KeycodeAction\0keycode\0"
    "pressed\0autorepeat"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QEvdevKeyboardHandler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    3,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    0x80000000 | 4, QMetaType::UShort, QMetaType::Bool, QMetaType::Bool,    5,    6,    7,

       0        // eod
};

void QEvdevKeyboardHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QEvdevKeyboardHandler *_t = static_cast<QEvdevKeyboardHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->readKeycode(); break;
        case 1: { KeycodeAction _r = _t->processKeycode((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< KeycodeAction*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject QEvdevKeyboardHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QEvdevKeyboardHandler.data,
      qt_meta_data_QEvdevKeyboardHandler,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QEvdevKeyboardHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QEvdevKeyboardHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QEvdevKeyboardHandler.stringdata0))
        return static_cast<void*>(const_cast< QEvdevKeyboardHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int QEvdevKeyboardHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
