/****************************************************************************
** Meta object code from reading C++ file 'application_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../linuxaccessibility/application_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'application_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QSpiApplicationAdaptor_t {
    QByteArrayData data[11];
    char stringdata0[151];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QSpiApplicationAdaptor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QSpiApplicationAdaptor_t qt_meta_stringdata_QSpiApplicationAdaptor = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QSpiApplicationAdaptor"
QT_MOC_LITERAL(1, 23, 15), // "windowActivated"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 6), // "window"
QT_MOC_LITERAL(4, 47, 6), // "active"
QT_MOC_LITERAL(5, 54, 30), // "notifyKeyboardListenerCallback"
QT_MOC_LITERAL(6, 85, 12), // "QDBusMessage"
QT_MOC_LITERAL(7, 98, 7), // "message"
QT_MOC_LITERAL(8, 106, 27), // "notifyKeyboardListenerError"
QT_MOC_LITERAL(9, 134, 10), // "QDBusError"
QT_MOC_LITERAL(10, 145, 5) // "error"

    },
    "QSpiApplicationAdaptor\0windowActivated\0"
    "\0window\0active\0notifyKeyboardListenerCallback\0"
    "QDBusMessage\0message\0notifyKeyboardListenerError\0"
    "QDBusError\0error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QSpiApplicationAdaptor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   34,    2, 0x08 /* Private */,
       8,    2,   37,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::Bool,    3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 6,   10,    7,

       0        // eod
};

void QSpiApplicationAdaptor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QSpiApplicationAdaptor *_t = static_cast<QSpiApplicationAdaptor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->windowActivated((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->notifyKeyboardListenerCallback((*reinterpret_cast< const QDBusMessage(*)>(_a[1]))); break;
        case 2: _t->notifyKeyboardListenerError((*reinterpret_cast< const QDBusError(*)>(_a[1])),(*reinterpret_cast< const QDBusMessage(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QSpiApplicationAdaptor::*_t)(QObject * , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSpiApplicationAdaptor::windowActivated)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QSpiApplicationAdaptor::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QSpiApplicationAdaptor.data,
      qt_meta_data_QSpiApplicationAdaptor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QSpiApplicationAdaptor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSpiApplicationAdaptor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QSpiApplicationAdaptor.stringdata0))
        return static_cast<void*>(const_cast< QSpiApplicationAdaptor*>(this));
    return QObject::qt_metacast(_clname);
}

int QSpiApplicationAdaptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QSpiApplicationAdaptor::windowActivated(QObject * _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
