/****************************************************************************
** Meta object code from reading C++ file 'qnetworkmanagerservice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qnetworkmanagerservice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qnetworkmanagerservice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QNetworkManagerInterface_t {
    QByteArrayData data[12];
    char stringdata0[191];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QNetworkManagerInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QNetworkManagerInterface_t qt_meta_stringdata_QNetworkManagerInterface = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QNetworkManagerInterface"
QT_MOC_LITERAL(1, 25, 11), // "deviceAdded"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 15), // "QDBusObjectPath"
QT_MOC_LITERAL(4, 54, 13), // "deviceRemoved"
QT_MOC_LITERAL(5, 68, 17), // "propertiesChanged"
QT_MOC_LITERAL(6, 86, 12), // "stateChanged"
QT_MOC_LITERAL(7, 99, 18), // "activationFinished"
QT_MOC_LITERAL(8, 118, 24), // "QDBusPendingCallWatcher*"
QT_MOC_LITERAL(9, 143, 15), // "propertiesReady"
QT_MOC_LITERAL(10, 159, 16), // "devicesListReady"
QT_MOC_LITERAL(11, 176, 14) // "propertiesSwap"

    },
    "QNetworkManagerInterface\0deviceAdded\0"
    "\0QDBusObjectPath\0deviceRemoved\0"
    "propertiesChanged\0stateChanged\0"
    "activationFinished\0QDBusPendingCallWatcher*\0"
    "propertiesReady\0devicesListReady\0"
    "propertiesSwap"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QNetworkManagerInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,
       5,    1,   60,    2, 0x06 /* Public */,
       6,    1,   63,    2, 0x06 /* Public */,
       7,    1,   66,    2, 0x06 /* Public */,
       9,    0,   69,    2, 0x06 /* Public */,
      10,    0,   70,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::QVariantMap,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariantMap,    2,

       0        // eod
};

void QNetworkManagerInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QNetworkManagerInterface *_t = static_cast<QNetworkManagerInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->deviceAdded((*reinterpret_cast< QDBusObjectPath(*)>(_a[1]))); break;
        case 1: _t->deviceRemoved((*reinterpret_cast< QDBusObjectPath(*)>(_a[1]))); break;
        case 2: _t->propertiesChanged((*reinterpret_cast< QMap<QString,QVariant>(*)>(_a[1]))); break;
        case 3: _t->stateChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 4: _t->activationFinished((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        case 5: _t->propertiesReady(); break;
        case 6: _t->devicesListReady(); break;
        case 7: _t->propertiesSwap((*reinterpret_cast< QMap<QString,QVariant>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusObjectPath >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusObjectPath >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusPendingCallWatcher* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QNetworkManagerInterface::*_t)(QDBusObjectPath );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkManagerInterface::deviceAdded)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QNetworkManagerInterface::*_t)(QDBusObjectPath );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkManagerInterface::deviceRemoved)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QNetworkManagerInterface::*_t)(QMap<QString,QVariant> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkManagerInterface::propertiesChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QNetworkManagerInterface::*_t)(quint32 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkManagerInterface::stateChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QNetworkManagerInterface::*_t)(QDBusPendingCallWatcher * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkManagerInterface::activationFinished)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QNetworkManagerInterface::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkManagerInterface::propertiesReady)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QNetworkManagerInterface::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkManagerInterface::devicesListReady)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject QNetworkManagerInterface::staticMetaObject = {
    { &QDBusAbstractInterface::staticMetaObject, qt_meta_stringdata_QNetworkManagerInterface.data,
      qt_meta_data_QNetworkManagerInterface,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QNetworkManagerInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QNetworkManagerInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QNetworkManagerInterface.stringdata0))
        return static_cast<void*>(const_cast< QNetworkManagerInterface*>(this));
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int QNetworkManagerInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void QNetworkManagerInterface::deviceAdded(QDBusObjectPath _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QNetworkManagerInterface::deviceRemoved(QDBusObjectPath _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QNetworkManagerInterface::propertiesChanged(QMap<QString,QVariant> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QNetworkManagerInterface::stateChanged(quint32 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QNetworkManagerInterface::activationFinished(QDBusPendingCallWatcher * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QNetworkManagerInterface::propertiesReady()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void QNetworkManagerInterface::devicesListReady()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}
struct qt_meta_stringdata_QNetworkManagerInterfaceAccessPoint_t {
    QByteArrayData data[5];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QNetworkManagerInterfaceAccessPoint_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QNetworkManagerInterfaceAccessPoint_t qt_meta_stringdata_QNetworkManagerInterfaceAccessPoint = {
    {
QT_MOC_LITERAL(0, 0, 35), // "QNetworkManagerInterfaceAcces..."
QT_MOC_LITERAL(1, 36, 17), // "propertiesChanged"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 15), // "propertiesReady"
QT_MOC_LITERAL(4, 71, 14) // "propertiesSwap"

    },
    "QNetworkManagerInterfaceAccessPoint\0"
    "propertiesChanged\0\0propertiesReady\0"
    "propertiesSwap"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QNetworkManagerInterfaceAccessPoint[] = {

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
       1,    1,   29,    2, 0x06 /* Public */,
       3,    0,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariantMap,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariantMap,    2,

       0        // eod
};

void QNetworkManagerInterfaceAccessPoint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QNetworkManagerInterfaceAccessPoint *_t = static_cast<QNetworkManagerInterfaceAccessPoint *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->propertiesChanged((*reinterpret_cast< QMap<QString,QVariant>(*)>(_a[1]))); break;
        case 1: _t->propertiesReady(); break;
        case 2: _t->propertiesSwap((*reinterpret_cast< QMap<QString,QVariant>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QNetworkManagerInterfaceAccessPoint::*_t)(QMap<QString,QVariant> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkManagerInterfaceAccessPoint::propertiesChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QNetworkManagerInterfaceAccessPoint::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkManagerInterfaceAccessPoint::propertiesReady)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QNetworkManagerInterfaceAccessPoint::staticMetaObject = {
    { &QDBusAbstractInterface::staticMetaObject, qt_meta_stringdata_QNetworkManagerInterfaceAccessPoint.data,
      qt_meta_data_QNetworkManagerInterfaceAccessPoint,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QNetworkManagerInterfaceAccessPoint::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QNetworkManagerInterfaceAccessPoint::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QNetworkManagerInterfaceAccessPoint.stringdata0))
        return static_cast<void*>(const_cast< QNetworkManagerInterfaceAccessPoint*>(this));
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int QNetworkManagerInterfaceAccessPoint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QNetworkManagerInterfaceAccessPoint::propertiesChanged(QMap<QString,QVariant> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QNetworkManagerInterfaceAccessPoint::propertiesReady()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
struct qt_meta_stringdata_QNetworkManagerInterfaceDevice_t {
    QByteArrayData data[7];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QNetworkManagerInterfaceDevice_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QNetworkManagerInterfaceDevice_t qt_meta_stringdata_QNetworkManagerInterfaceDevice = {
    {
QT_MOC_LITERAL(0, 0, 30), // "QNetworkManagerInterfaceDevice"
QT_MOC_LITERAL(1, 31, 12), // "stateChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 17), // "propertiesChanged"
QT_MOC_LITERAL(4, 63, 18), // "connectionsChanged"
QT_MOC_LITERAL(5, 82, 15), // "propertiesReady"
QT_MOC_LITERAL(6, 98, 14) // "propertiesSwap"

    },
    "QNetworkManagerInterfaceDevice\0"
    "stateChanged\0\0propertiesChanged\0"
    "connectionsChanged\0propertiesReady\0"
    "propertiesSwap"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QNetworkManagerInterfaceDevice[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,
       3,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       5,    0,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::UInt,    2,    2,
    QMetaType::Void, QMetaType::QVariantMap,    2,
    QMetaType::Void, QMetaType::QStringList,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariantMap,    2,

       0        // eod
};

void QNetworkManagerInterfaceDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QNetworkManagerInterfaceDevice *_t = static_cast<QNetworkManagerInterfaceDevice *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stateChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 1: _t->propertiesChanged((*reinterpret_cast< QMap<QString,QVariant>(*)>(_a[1]))); break;
        case 2: _t->connectionsChanged((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 3: _t->propertiesReady(); break;
        case 4: _t->propertiesSwap((*reinterpret_cast< QMap<QString,QVariant>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QNetworkManagerInterfaceDevice::*_t)(const QString & , quint32 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkManagerInterfaceDevice::stateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QNetworkManagerInterfaceDevice::*_t)(QMap<QString,QVariant> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkManagerInterfaceDevice::propertiesChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QNetworkManagerInterfaceDevice::*_t)(QStringList );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkManagerInterfaceDevice::connectionsChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QNetworkManagerInterfaceDevice::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkManagerInterfaceDevice::propertiesReady)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject QNetworkManagerInterfaceDevice::staticMetaObject = {
    { &QDBusAbstractInterface::staticMetaObject, qt_meta_stringdata_QNetworkManagerInterfaceDevice.data,
      qt_meta_data_QNetworkManagerInterfaceDevice,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QNetworkManagerInterfaceDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QNetworkManagerInterfaceDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QNetworkManagerInterfaceDevice.stringdata0))
        return static_cast<void*>(const_cast< QNetworkManagerInterfaceDevice*>(this));
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int QNetworkManagerInterfaceDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void QNetworkManagerInterfaceDevice::stateChanged(const QString & _t1, quint32 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QNetworkManagerInterfaceDevice::propertiesChanged(QMap<QString,QVariant> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QNetworkManagerInterfaceDevice::connectionsChanged(QStringList _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QNetworkManagerInterfaceDevice::propertiesReady()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
struct qt_meta_stringdata_QNetworkManagerInterfaceDeviceWired_t {
    QByteArrayData data[6];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QNetworkManagerInterfaceDeviceWired_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QNetworkManagerInterfaceDeviceWired_t qt_meta_stringdata_QNetworkManagerInterfaceDeviceWired = {
    {
QT_MOC_LITERAL(0, 0, 35), // "QNetworkManagerInterfaceDevic..."
QT_MOC_LITERAL(1, 36, 17), // "propertiesChanged"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 15), // "propertiesReady"
QT_MOC_LITERAL(4, 71, 14), // "carrierChanged"
QT_MOC_LITERAL(5, 86, 14) // "propertiesSwap"

    },
    "QNetworkManagerInterfaceDeviceWired\0"
    "propertiesChanged\0\0propertiesReady\0"
    "carrierChanged\0propertiesSwap"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QNetworkManagerInterfaceDeviceWired[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       3,    0,   37,    2, 0x06 /* Public */,
       4,    1,   38,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariantMap,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariantMap,    2,

       0        // eod
};

void QNetworkManagerInterfaceDeviceWired::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QNetworkManagerInterfaceDeviceWired *_t = static_cast<QNetworkManagerInterfaceDeviceWired *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->propertiesChanged((*reinterpret_cast< QMap<QString,QVariant>(*)>(_a[1]))); break;
        case 1: _t->propertiesReady(); break;
        case 2: _t->carrierChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->propertiesSwap((*reinterpret_cast< QMap<QString,QVariant>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QNetworkManagerInterfaceDeviceWired::*_t)(QMap<QString,QVariant> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkManagerInterfaceDeviceWired::propertiesChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QNetworkManagerInterfaceDeviceWired::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkManagerInterfaceDeviceWired::propertiesReady)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QNetworkManagerInterfaceDeviceWired::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkManagerInterfaceDeviceWired::carrierChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject QNetworkManagerInterfaceDeviceWired::staticMetaObject = {
    { &QDBusAbstractInterface::staticMetaObject, qt_meta_stringdata_QNetworkManagerInterfaceDeviceWired.data,
      qt_meta_data_QNetworkManagerInterfaceDeviceWired,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QNetworkManagerInterfaceDeviceWired::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QNetworkManagerInterfaceDeviceWired::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QNetworkManagerInterfaceDeviceWired.stringdata0))
        return static_cast<void*>(const_cast< QNetworkManagerInterfaceDeviceWired*>(this));
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int QNetworkManagerInterfaceDeviceWired::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QNetworkManagerInterfaceDeviceWired::propertiesChanged(QMap<QString,QVariant> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QNetworkManagerInterfaceDeviceWired::propertiesReady()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void QNetworkManagerInterfaceDeviceWired::carrierChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_QNetworkManagerInterfaceDeviceWireless_t {
    QByteArrayData data[5];
    char stringdata0[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QNetworkManagerInterfaceDeviceWireless_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QNetworkManagerInterfaceDeviceWireless_t qt_meta_stringdata_QNetworkManagerInterfaceDeviceWireless = {
    {
QT_MOC_LITERAL(0, 0, 38), // "QNetworkManagerInterfaceDevic..."
QT_MOC_LITERAL(1, 39, 17), // "propertiesChanged"
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 15), // "propertiesReady"
QT_MOC_LITERAL(4, 74, 14) // "propertiesSwap"

    },
    "QNetworkManagerInterfaceDeviceWireless\0"
    "propertiesChanged\0\0propertiesReady\0"
    "propertiesSwap"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QNetworkManagerInterfaceDeviceWireless[] = {

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
       1,    1,   29,    2, 0x06 /* Public */,
       3,    0,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariantMap,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariantMap,    2,

       0        // eod
};

void QNetworkManagerInterfaceDeviceWireless::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QNetworkManagerInterfaceDeviceWireless *_t = static_cast<QNetworkManagerInterfaceDeviceWireless *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->propertiesChanged((*reinterpret_cast< QMap<QString,QVariant>(*)>(_a[1]))); break;
        case 1: _t->propertiesReady(); break;
        case 2: _t->propertiesSwap((*reinterpret_cast< QMap<QString,QVariant>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QNetworkManagerInterfaceDeviceWireless::*_t)(QMap<QString,QVariant> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkManagerInterfaceDeviceWireless::propertiesChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QNetworkManagerInterfaceDeviceWireless::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkManagerInterfaceDeviceWireless::propertiesReady)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QNetworkManagerInterfaceDeviceWireless::staticMetaObject = {
    { &QDBusAbstractInterface::staticMetaObject, qt_meta_stringdata_QNetworkManagerInterfaceDeviceWireless.data,
      qt_meta_data_QNetworkManagerInterfaceDeviceWireless,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QNetworkManagerInterfaceDeviceWireless::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QNetworkManagerInterfaceDeviceWireless::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QNetworkManagerInterfaceDeviceWireless.stringdata0))
        return static_cast<void*>(const_cast< QNetworkManagerInterfaceDeviceWireless*>(this));
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int QNetworkManagerInterfaceDeviceWireless::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QNetworkManagerInterfaceDeviceWireless::propertiesChanged(QMap<QString,QVariant> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QNetworkManagerInterfaceDeviceWireless::propertiesReady()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
struct qt_meta_stringdata_QNetworkManagerInterfaceDeviceModem_t {
    QByteArrayData data[5];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QNetworkManagerInterfaceDeviceModem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QNetworkManagerInterfaceDeviceModem_t qt_meta_stringdata_QNetworkManagerInterfaceDeviceModem = {
    {
QT_MOC_LITERAL(0, 0, 35), // "QNetworkManagerInterfaceDevic..."
QT_MOC_LITERAL(1, 36, 17), // "propertiesChanged"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 15), // "propertiesReady"
QT_MOC_LITERAL(4, 71, 14) // "propertiesSwap"

    },
    "QNetworkManagerInterfaceDeviceModem\0"
    "propertiesChanged\0\0propertiesReady\0"
    "propertiesSwap"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QNetworkManagerInterfaceDeviceModem[] = {

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
       1,    1,   29,    2, 0x06 /* Public */,
       3,    0,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariantMap,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariantMap,    2,

       0        // eod
};

void QNetworkManagerInterfaceDeviceModem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QNetworkManagerInterfaceDeviceModem *_t = static_cast<QNetworkManagerInterfaceDeviceModem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->propertiesChanged((*reinterpret_cast< QMap<QString,QVariant>(*)>(_a[1]))); break;
        case 1: _t->propertiesReady(); break;
        case 2: _t->propertiesSwap((*reinterpret_cast< QMap<QString,QVariant>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QNetworkManagerInterfaceDeviceModem::*_t)(QMap<QString,QVariant> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkManagerInterfaceDeviceModem::propertiesChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QNetworkManagerInterfaceDeviceModem::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkManagerInterfaceDeviceModem::propertiesReady)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QNetworkManagerInterfaceDeviceModem::staticMetaObject = {
    { &QDBusAbstractInterface::staticMetaObject, qt_meta_stringdata_QNetworkManagerInterfaceDeviceModem.data,
      qt_meta_data_QNetworkManagerInterfaceDeviceModem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QNetworkManagerInterfaceDeviceModem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QNetworkManagerInterfaceDeviceModem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QNetworkManagerInterfaceDeviceModem.stringdata0))
        return static_cast<void*>(const_cast< QNetworkManagerInterfaceDeviceModem*>(this));
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int QNetworkManagerInterfaceDeviceModem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QNetworkManagerInterfaceDeviceModem::propertiesChanged(QMap<QString,QVariant> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QNetworkManagerInterfaceDeviceModem::propertiesReady()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
struct qt_meta_stringdata_QNetworkManagerSettings_t {
    QByteArrayData data[5];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QNetworkManagerSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QNetworkManagerSettings_t qt_meta_stringdata_QNetworkManagerSettings = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QNetworkManagerSettings"
QT_MOC_LITERAL(1, 24, 13), // "newConnection"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 15), // "QDBusObjectPath"
QT_MOC_LITERAL(4, 55, 20) // "connectionsListReady"

    },
    "QNetworkManagerSettings\0newConnection\0"
    "\0QDBusObjectPath\0connectionsListReady"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QNetworkManagerSettings[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       4,    0,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,

       0        // eod
};

void QNetworkManagerSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QNetworkManagerSettings *_t = static_cast<QNetworkManagerSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newConnection((*reinterpret_cast< QDBusObjectPath(*)>(_a[1]))); break;
        case 1: _t->connectionsListReady(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
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
            typedef void (QNetworkManagerSettings::*_t)(QDBusObjectPath );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkManagerSettings::newConnection)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QNetworkManagerSettings::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkManagerSettings::connectionsListReady)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QNetworkManagerSettings::staticMetaObject = {
    { &QDBusAbstractInterface::staticMetaObject, qt_meta_stringdata_QNetworkManagerSettings.data,
      qt_meta_data_QNetworkManagerSettings,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QNetworkManagerSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QNetworkManagerSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QNetworkManagerSettings.stringdata0))
        return static_cast<void*>(const_cast< QNetworkManagerSettings*>(this));
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int QNetworkManagerSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QNetworkManagerSettings::newConnection(QDBusObjectPath _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QNetworkManagerSettings::connectionsListReady()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
struct qt_meta_stringdata_QNetworkManagerSettingsConnection_t {
    QByteArrayData data[7];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QNetworkManagerSettingsConnection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QNetworkManagerSettingsConnection_t qt_meta_stringdata_QNetworkManagerSettingsConnection = {
    {
QT_MOC_LITERAL(0, 0, 33), // "QNetworkManagerSettingsConnec..."
QT_MOC_LITERAL(1, 34, 7), // "updated"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 7), // "removed"
QT_MOC_LITERAL(4, 51, 4), // "path"
QT_MOC_LITERAL(5, 56, 13), // "settingsReady"
QT_MOC_LITERAL(6, 70, 19) // "slotSettingsRemoved"

    },
    "QNetworkManagerSettingsConnection\0"
    "updated\0\0removed\0path\0settingsReady\0"
    "slotSettingsRemoved"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QNetworkManagerSettingsConnection[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    1,   35,    2, 0x06 /* Public */,
       5,    0,   38,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   39,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QNetworkManagerSettingsConnection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QNetworkManagerSettingsConnection *_t = static_cast<QNetworkManagerSettingsConnection *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updated(); break;
        case 1: _t->removed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->settingsReady(); break;
        case 3: _t->slotSettingsRemoved(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QNetworkManagerSettingsConnection::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkManagerSettingsConnection::updated)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QNetworkManagerSettingsConnection::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkManagerSettingsConnection::removed)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QNetworkManagerSettingsConnection::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkManagerSettingsConnection::settingsReady)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject QNetworkManagerSettingsConnection::staticMetaObject = {
    { &QDBusAbstractInterface::staticMetaObject, qt_meta_stringdata_QNetworkManagerSettingsConnection.data,
      qt_meta_data_QNetworkManagerSettingsConnection,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QNetworkManagerSettingsConnection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QNetworkManagerSettingsConnection::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QNetworkManagerSettingsConnection.stringdata0))
        return static_cast<void*>(const_cast< QNetworkManagerSettingsConnection*>(this));
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int QNetworkManagerSettingsConnection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QNetworkManagerSettingsConnection::updated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QNetworkManagerSettingsConnection::removed(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QNetworkManagerSettingsConnection::settingsReady()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
struct qt_meta_stringdata_QNetworkManagerConnectionActive_t {
    QByteArrayData data[5];
    char stringdata0[82];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QNetworkManagerConnectionActive_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QNetworkManagerConnectionActive_t qt_meta_stringdata_QNetworkManagerConnectionActive = {
    {
QT_MOC_LITERAL(0, 0, 31), // "QNetworkManagerConnectionActive"
QT_MOC_LITERAL(1, 32, 17), // "propertiesChanged"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 15), // "propertiesReady"
QT_MOC_LITERAL(4, 67, 14) // "propertiesSwap"

    },
    "QNetworkManagerConnectionActive\0"
    "propertiesChanged\0\0propertiesReady\0"
    "propertiesSwap"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QNetworkManagerConnectionActive[] = {

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
       1,    1,   29,    2, 0x06 /* Public */,
       3,    0,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariantMap,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariantMap,    2,

       0        // eod
};

void QNetworkManagerConnectionActive::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QNetworkManagerConnectionActive *_t = static_cast<QNetworkManagerConnectionActive *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->propertiesChanged((*reinterpret_cast< QMap<QString,QVariant>(*)>(_a[1]))); break;
        case 1: _t->propertiesReady(); break;
        case 2: _t->propertiesSwap((*reinterpret_cast< QMap<QString,QVariant>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QNetworkManagerConnectionActive::*_t)(QMap<QString,QVariant> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkManagerConnectionActive::propertiesChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QNetworkManagerConnectionActive::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkManagerConnectionActive::propertiesReady)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QNetworkManagerConnectionActive::staticMetaObject = {
    { &QDBusAbstractInterface::staticMetaObject, qt_meta_stringdata_QNetworkManagerConnectionActive.data,
      qt_meta_data_QNetworkManagerConnectionActive,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QNetworkManagerConnectionActive::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QNetworkManagerConnectionActive::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QNetworkManagerConnectionActive.stringdata0))
        return static_cast<void*>(const_cast< QNetworkManagerConnectionActive*>(this));
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int QNetworkManagerConnectionActive::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QNetworkManagerConnectionActive::propertiesChanged(QMap<QString,QVariant> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QNetworkManagerConnectionActive::propertiesReady()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
struct qt_meta_stringdata_QNetworkManagerIp4Config_t {
    QByteArrayData data[1];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QNetworkManagerIp4Config_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QNetworkManagerIp4Config_t qt_meta_stringdata_QNetworkManagerIp4Config = {
    {
QT_MOC_LITERAL(0, 0, 24) // "QNetworkManagerIp4Config"

    },
    "QNetworkManagerIp4Config"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QNetworkManagerIp4Config[] = {

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

void QNetworkManagerIp4Config::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QNetworkManagerIp4Config::staticMetaObject = {
    { &QDBusAbstractInterface::staticMetaObject, qt_meta_stringdata_QNetworkManagerIp4Config.data,
      qt_meta_data_QNetworkManagerIp4Config,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QNetworkManagerIp4Config::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QNetworkManagerIp4Config::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QNetworkManagerIp4Config.stringdata0))
        return static_cast<void*>(const_cast< QNetworkManagerIp4Config*>(this));
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int QNetworkManagerIp4Config::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
