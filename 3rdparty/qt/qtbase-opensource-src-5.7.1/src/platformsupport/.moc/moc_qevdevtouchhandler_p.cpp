/****************************************************************************
** Meta object code from reading C++ file 'qevdevtouchhandler_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../input/evdevtouch/qevdevtouchhandler_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qevdevtouchhandler_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QEvdevTouchScreenHandler_t {
    QByteArrayData data[3];
    char stringdata0[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QEvdevTouchScreenHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QEvdevTouchScreenHandler_t qt_meta_stringdata_QEvdevTouchScreenHandler = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QEvdevTouchScreenHandler"
QT_MOC_LITERAL(1, 25, 8), // "readData"
QT_MOC_LITERAL(2, 34, 0) // ""

    },
    "QEvdevTouchScreenHandler\0readData\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QEvdevTouchScreenHandler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QEvdevTouchScreenHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QEvdevTouchScreenHandler *_t = static_cast<QEvdevTouchScreenHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->readData(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QEvdevTouchScreenHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QEvdevTouchScreenHandler.data,
      qt_meta_data_QEvdevTouchScreenHandler,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QEvdevTouchScreenHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QEvdevTouchScreenHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QEvdevTouchScreenHandler.stringdata0))
        return static_cast<void*>(const_cast< QEvdevTouchScreenHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int QEvdevTouchScreenHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_QEvdevTouchScreenHandlerThread_t {
    QByteArrayData data[4];
    char stringdata0[82];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QEvdevTouchScreenHandlerThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QEvdevTouchScreenHandlerThread_t qt_meta_stringdata_QEvdevTouchScreenHandlerThread = {
    {
QT_MOC_LITERAL(0, 0, 30), // "QEvdevTouchScreenHandlerThread"
QT_MOC_LITERAL(1, 31, 21), // "touchDeviceRegistered"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 27) // "notifyTouchDeviceRegistered"

    },
    "QEvdevTouchScreenHandlerThread\0"
    "touchDeviceRegistered\0\0"
    "notifyTouchDeviceRegistered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QEvdevTouchScreenHandlerThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    0,   25,    2, 0x00 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,

       0        // eod
};

void QEvdevTouchScreenHandlerThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QEvdevTouchScreenHandlerThread *_t = static_cast<QEvdevTouchScreenHandlerThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->touchDeviceRegistered(); break;
        case 1: _t->notifyTouchDeviceRegistered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QEvdevTouchScreenHandlerThread::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEvdevTouchScreenHandlerThread::touchDeviceRegistered)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QEvdevTouchScreenHandlerThread::staticMetaObject = {
    { &QDaemonThread::staticMetaObject, qt_meta_stringdata_QEvdevTouchScreenHandlerThread.data,
      qt_meta_data_QEvdevTouchScreenHandlerThread,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QEvdevTouchScreenHandlerThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QEvdevTouchScreenHandlerThread::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QEvdevTouchScreenHandlerThread.stringdata0))
        return static_cast<void*>(const_cast< QEvdevTouchScreenHandlerThread*>(this));
    return QDaemonThread::qt_metacast(_clname);
}

int QEvdevTouchScreenHandlerThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDaemonThread::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QEvdevTouchScreenHandlerThread::touchDeviceRegistered()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
