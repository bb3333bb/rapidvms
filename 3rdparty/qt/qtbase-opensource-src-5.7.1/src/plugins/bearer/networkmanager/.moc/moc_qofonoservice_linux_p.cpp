/****************************************************************************
** Meta object code from reading C++ file 'qofonoservice_linux_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../linux_common/qofonoservice_linux_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qofonoservice_linux_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QOfonoManagerInterface_t {
    QByteArrayData data[8];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QOfonoManagerInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QOfonoManagerInterface_t qt_meta_stringdata_QOfonoManagerInterface = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QOfonoManagerInterface"
QT_MOC_LITERAL(1, 23, 12), // "modemChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 10), // "modemAdded"
QT_MOC_LITERAL(4, 48, 15), // "QDBusObjectPath"
QT_MOC_LITERAL(5, 64, 4), // "path"
QT_MOC_LITERAL(6, 69, 3), // "var"
QT_MOC_LITERAL(7, 73, 12) // "modemRemoved"

    },
    "QOfonoManagerInterface\0modemChanged\0"
    "\0modemAdded\0QDBusObjectPath\0path\0var\0"
    "modemRemoved"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QOfonoManagerInterface[] = {

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
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    2,   30,    2, 0x08 /* Private */,
       7,    1,   35,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4, QMetaType::QVariantMap,    5,    6,
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void QOfonoManagerInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QOfonoManagerInterface *_t = static_cast<QOfonoManagerInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->modemChanged(); break;
        case 1: _t->modemAdded((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2]))); break;
        case 2: _t->modemRemoved((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusObjectPath >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusObjectPath >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QOfonoManagerInterface::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QOfonoManagerInterface::modemChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QOfonoManagerInterface::staticMetaObject = {
    { &QDBusAbstractInterface::staticMetaObject, qt_meta_stringdata_QOfonoManagerInterface.data,
      qt_meta_data_QOfonoManagerInterface,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QOfonoManagerInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QOfonoManagerInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QOfonoManagerInterface.stringdata0))
        return static_cast<void*>(const_cast< QOfonoManagerInterface*>(this));
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int QOfonoManagerInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QOfonoManagerInterface::modemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_QOfonoModemInterface_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QOfonoModemInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QOfonoModemInterface_t qt_meta_stringdata_QOfonoModemInterface = {
    {
QT_MOC_LITERAL(0, 0, 20) // "QOfonoModemInterface"

    },
    "QOfonoModemInterface"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QOfonoModemInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QOfonoModemInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QOfonoModemInterface::staticMetaObject = {
    { &QDBusAbstractInterface::staticMetaObject, qt_meta_stringdata_QOfonoModemInterface.data,
      qt_meta_data_QOfonoModemInterface,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QOfonoModemInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QOfonoModemInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QOfonoModemInterface.stringdata0))
        return static_cast<void*>(const_cast< QOfonoModemInterface*>(this));
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int QOfonoModemInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QOfonoNetworkRegistrationInterface_t {
    QByteArrayData data[5];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QOfonoNetworkRegistrationInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QOfonoNetworkRegistrationInterface_t qt_meta_stringdata_QOfonoNetworkRegistrationInterface = {
    {
QT_MOC_LITERAL(0, 0, 34), // "QOfonoNetworkRegistrationInte..."
QT_MOC_LITERAL(1, 35, 15), // "propertyChanged"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 12), // "QDBusVariant"
QT_MOC_LITERAL(4, 65, 5) // "value"

    },
    "QOfonoNetworkRegistrationInterface\0"
    "propertyChanged\0\0QDBusVariant\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QOfonoNetworkRegistrationInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 3,    2,    4,

       0        // eod
};

void QOfonoNetworkRegistrationInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QOfonoNetworkRegistrationInterface *_t = static_cast<QOfonoNetworkRegistrationInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->propertyChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QDBusVariant(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusVariant >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QOfonoNetworkRegistrationInterface::*_t)(const QString & , const QDBusVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QOfonoNetworkRegistrationInterface::propertyChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QOfonoNetworkRegistrationInterface::staticMetaObject = {
    { &QDBusAbstractInterface::staticMetaObject, qt_meta_stringdata_QOfonoNetworkRegistrationInterface.data,
      qt_meta_data_QOfonoNetworkRegistrationInterface,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QOfonoNetworkRegistrationInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QOfonoNetworkRegistrationInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QOfonoNetworkRegistrationInterface.stringdata0))
        return static_cast<void*>(const_cast< QOfonoNetworkRegistrationInterface*>(this));
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int QOfonoNetworkRegistrationInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QOfonoNetworkRegistrationInterface::propertyChanged(const QString & _t1, const QDBusVariant & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QOfonoDataConnectionManagerInterface_t {
    QByteArrayData data[6];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QOfonoDataConnectionManagerInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QOfonoDataConnectionManagerInterface_t qt_meta_stringdata_QOfonoDataConnectionManagerInterface = {
    {
QT_MOC_LITERAL(0, 0, 36), // "QOfonoDataConnectionManagerIn..."
QT_MOC_LITERAL(1, 37, 21), // "roamingAllowedChanged"
QT_MOC_LITERAL(2, 59, 0), // ""
QT_MOC_LITERAL(3, 60, 15), // "propertyChanged"
QT_MOC_LITERAL(4, 76, 12), // "QDBusVariant"
QT_MOC_LITERAL(5, 89, 5) // "value"

    },
    "QOfonoDataConnectionManagerInterface\0"
    "roamingAllowedChanged\0\0propertyChanged\0"
    "QDBusVariant\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QOfonoDataConnectionManagerInterface[] = {

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
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    2,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    2,    5,

       0        // eod
};

void QOfonoDataConnectionManagerInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QOfonoDataConnectionManagerInterface *_t = static_cast<QOfonoDataConnectionManagerInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->roamingAllowedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->propertyChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QDBusVariant(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusVariant >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QOfonoDataConnectionManagerInterface::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QOfonoDataConnectionManagerInterface::roamingAllowedChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QOfonoDataConnectionManagerInterface::staticMetaObject = {
    { &QDBusAbstractInterface::staticMetaObject, qt_meta_stringdata_QOfonoDataConnectionManagerInterface.data,
      qt_meta_data_QOfonoDataConnectionManagerInterface,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QOfonoDataConnectionManagerInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QOfonoDataConnectionManagerInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QOfonoDataConnectionManagerInterface.stringdata0))
        return static_cast<void*>(const_cast< QOfonoDataConnectionManagerInterface*>(this));
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int QOfonoDataConnectionManagerInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QOfonoDataConnectionManagerInterface::roamingAllowedChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QOfonoConnectionContextInterface_t {
    QByteArrayData data[5];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QOfonoConnectionContextInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QOfonoConnectionContextInterface_t qt_meta_stringdata_QOfonoConnectionContextInterface = {
    {
QT_MOC_LITERAL(0, 0, 32), // "QOfonoConnectionContextInterface"
QT_MOC_LITERAL(1, 33, 15), // "propertyChanged"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 12), // "QDBusVariant"
QT_MOC_LITERAL(4, 63, 5) // "value"

    },
    "QOfonoConnectionContextInterface\0"
    "propertyChanged\0\0QDBusVariant\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QOfonoConnectionContextInterface[] = {

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
       1,    2,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 3,    2,    4,

       0        // eod
};

void QOfonoConnectionContextInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QOfonoConnectionContextInterface *_t = static_cast<QOfonoConnectionContextInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->propertyChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QDBusVariant(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusVariant >(); break;
            }
            break;
        }
    }
}

const QMetaObject QOfonoConnectionContextInterface::staticMetaObject = {
    { &QDBusAbstractInterface::staticMetaObject, qt_meta_stringdata_QOfonoConnectionContextInterface.data,
      qt_meta_data_QOfonoConnectionContextInterface,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QOfonoConnectionContextInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QOfonoConnectionContextInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QOfonoConnectionContextInterface.stringdata0))
        return static_cast<void*>(const_cast< QOfonoConnectionContextInterface*>(this));
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int QOfonoConnectionContextInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
