/****************************************************************************
** Meta object code from reading C++ file 'dbusconnection_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../linuxaccessibility/dbusconnection_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dbusconnection_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DBusConnection_t {
    QByteArrayData data[12];
    char stringdata0[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DBusConnection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DBusConnection_t qt_meta_stringdata_DBusConnection = {
    {
QT_MOC_LITERAL(0, 0, 14), // "DBusConnection"
QT_MOC_LITERAL(1, 15, 14), // "enabledChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 7), // "enabled"
QT_MOC_LITERAL(4, 39, 17), // "getAddressFromXCB"
QT_MOC_LITERAL(5, 57, 17), // "serviceRegistered"
QT_MOC_LITERAL(6, 75, 19), // "serviceUnregistered"
QT_MOC_LITERAL(7, 95, 14), // "connectA11yBus"
QT_MOC_LITERAL(8, 110, 7), // "address"
QT_MOC_LITERAL(9, 118, 9), // "dbusError"
QT_MOC_LITERAL(10, 128, 10), // "QDBusError"
QT_MOC_LITERAL(11, 139, 5) // "error"

    },
    "DBusConnection\0enabledChanged\0\0enabled\0"
    "getAddressFromXCB\0serviceRegistered\0"
    "serviceUnregistered\0connectA11yBus\0"
    "address\0dbusError\0QDBusError\0error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DBusConnection[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   47,    2, 0x08 /* Private */,
       5,    0,   48,    2, 0x08 /* Private */,
       6,    0,   49,    2, 0x08 /* Private */,
       7,    1,   50,    2, 0x08 /* Private */,
       9,    1,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::QString,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, 0x80000000 | 10,   11,

       0        // eod
};

void DBusConnection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DBusConnection *_t = static_cast<DBusConnection *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->enabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: { QString _r = _t->getAddressFromXCB();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 2: _t->serviceRegistered(); break;
        case 3: _t->serviceUnregistered(); break;
        case 4: _t->connectA11yBus((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->dbusError((*reinterpret_cast< const QDBusError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DBusConnection::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DBusConnection::enabledChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject DBusConnection::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DBusConnection.data,
      qt_meta_data_DBusConnection,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DBusConnection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DBusConnection::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DBusConnection.stringdata0))
        return static_cast<void*>(const_cast< DBusConnection*>(this));
    return QObject::qt_metacast(_clname);
}

int DBusConnection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void DBusConnection::enabledChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
