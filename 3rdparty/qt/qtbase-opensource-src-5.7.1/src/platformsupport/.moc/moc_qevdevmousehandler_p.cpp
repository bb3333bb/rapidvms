/****************************************************************************
** Meta object code from reading C++ file 'qevdevmousehandler_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../input/evdevmouse/qevdevmousehandler_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qevdevmousehandler_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QEvdevMouseHandler_t {
    QByteArrayData data[13];
    char stringdata0[135];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QEvdevMouseHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QEvdevMouseHandler_t qt_meta_stringdata_QEvdevMouseHandler = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QEvdevMouseHandler"
QT_MOC_LITERAL(1, 19, 16), // "handleMouseEvent"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 1), // "x"
QT_MOC_LITERAL(4, 39, 1), // "y"
QT_MOC_LITERAL(5, 41, 3), // "abs"
QT_MOC_LITERAL(6, 45, 16), // "Qt::MouseButtons"
QT_MOC_LITERAL(7, 62, 7), // "buttons"
QT_MOC_LITERAL(8, 70, 16), // "handleWheelEvent"
QT_MOC_LITERAL(9, 87, 5), // "delta"
QT_MOC_LITERAL(10, 93, 15), // "Qt::Orientation"
QT_MOC_LITERAL(11, 109, 11), // "orientation"
QT_MOC_LITERAL(12, 121, 13) // "readMouseData"

    },
    "QEvdevMouseHandler\0handleMouseEvent\0"
    "\0x\0y\0abs\0Qt::MouseButtons\0buttons\0"
    "handleWheelEvent\0delta\0Qt::Orientation\0"
    "orientation\0readMouseData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QEvdevMouseHandler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   29,    2, 0x06 /* Public */,
       8,    2,   38,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool, 0x80000000 | 6,    3,    4,    5,    7,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 10,    9,   11,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QEvdevMouseHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QEvdevMouseHandler *_t = static_cast<QEvdevMouseHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handleMouseEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< Qt::MouseButtons(*)>(_a[4]))); break;
        case 1: _t->handleWheelEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Qt::Orientation(*)>(_a[2]))); break;
        case 2: _t->readMouseData(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QEvdevMouseHandler::*_t)(int , int , bool , Qt::MouseButtons );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEvdevMouseHandler::handleMouseEvent)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QEvdevMouseHandler::*_t)(int , Qt::Orientation );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEvdevMouseHandler::handleWheelEvent)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QEvdevMouseHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QEvdevMouseHandler.data,
      qt_meta_data_QEvdevMouseHandler,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QEvdevMouseHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QEvdevMouseHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QEvdevMouseHandler.stringdata0))
        return static_cast<void*>(const_cast< QEvdevMouseHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int QEvdevMouseHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QEvdevMouseHandler::handleMouseEvent(int _t1, int _t2, bool _t3, Qt::MouseButtons _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QEvdevMouseHandler::handleWheelEvent(int _t1, Qt::Orientation _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
