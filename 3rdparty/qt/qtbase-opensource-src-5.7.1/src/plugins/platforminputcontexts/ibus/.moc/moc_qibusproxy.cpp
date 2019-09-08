/****************************************************************************
** Meta object code from reading C++ file 'qibusproxy.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qibusproxy.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qibusproxy.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QIBusProxy_t {
    QByteArrayData data[24];
    char stringdata0[368];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QIBusProxy_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QIBusProxy_t qt_meta_stringdata_QIBusProxy = {
    {
QT_MOC_LITERAL(0, 0, 10), // "QIBusProxy"
QT_MOC_LITERAL(1, 11, 19), // "GlobalEngineChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 11), // "engine_name"
QT_MOC_LITERAL(4, 44, 18), // "CreateInputContext"
QT_MOC_LITERAL(5, 63, 34), // "QDBusPendingReply<QDBusObject..."
QT_MOC_LITERAL(6, 98, 4), // "name"
QT_MOC_LITERAL(7, 103, 4), // "Exit"
QT_MOC_LITERAL(8, 108, 19), // "QDBusPendingReply<>"
QT_MOC_LITERAL(9, 128, 7), // "restart"
QT_MOC_LITERAL(10, 136, 10), // "GetAddress"
QT_MOC_LITERAL(11, 147, 26), // "QDBusPendingReply<QString>"
QT_MOC_LITERAL(12, 174, 17), // "ListActiveEngines"
QT_MOC_LITERAL(13, 192, 31), // "QDBusPendingReply<QVariantList>"
QT_MOC_LITERAL(14, 224, 11), // "ListEngines"
QT_MOC_LITERAL(15, 236, 4), // "Ping"
QT_MOC_LITERAL(16, 241, 31), // "QDBusPendingReply<QDBusVariant>"
QT_MOC_LITERAL(17, 273, 12), // "QDBusVariant"
QT_MOC_LITERAL(18, 286, 4), // "data"
QT_MOC_LITERAL(19, 291, 17), // "RegisterComponent"
QT_MOC_LITERAL(20, 309, 10), // "components"
QT_MOC_LITERAL(21, 320, 15), // "GetGlobalEngine"
QT_MOC_LITERAL(22, 336, 15), // "getGlobalEngine"
QT_MOC_LITERAL(23, 352, 15) // "QIBusEngineDesc"

    },
    "QIBusProxy\0GlobalEngineChanged\0\0"
    "engine_name\0CreateInputContext\0"
    "QDBusPendingReply<QDBusObjectPath>\0"
    "name\0Exit\0QDBusPendingReply<>\0restart\0"
    "GetAddress\0QDBusPendingReply<QString>\0"
    "ListActiveEngines\0QDBusPendingReply<QVariantList>\0"
    "ListEngines\0Ping\0QDBusPendingReply<QDBusVariant>\0"
    "QDBusVariant\0data\0RegisterComponent\0"
    "components\0GetGlobalEngine\0getGlobalEngine\0"
    "QIBusEngineDesc"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QIBusProxy[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   67,    2, 0x0a /* Public */,
       7,    1,   70,    2, 0x0a /* Public */,
      10,    0,   73,    2, 0x0a /* Public */,
      12,    0,   74,    2, 0x0a /* Public */,
      14,    0,   75,    2, 0x0a /* Public */,
      15,    1,   76,    2, 0x0a /* Public */,
      19,    1,   79,    2, 0x0a /* Public */,
      21,    0,   82,    2, 0x0a /* Public */,
      22,    0,   83,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    0x80000000 | 5, QMetaType::QString,    6,
    0x80000000 | 8, QMetaType::Bool,    9,
    0x80000000 | 11,
    0x80000000 | 13,
    0x80000000 | 13,
    0x80000000 | 16, 0x80000000 | 17,   18,
    0x80000000 | 8, 0x80000000 | 17,   20,
    0x80000000 | 16,
    0x80000000 | 23,

       0        // eod
};

void QIBusProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QIBusProxy *_t = static_cast<QIBusProxy *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->GlobalEngineChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: { QDBusPendingReply<QDBusObjectPath> _r = _t->CreateInputContext((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QDBusObjectPath>*>(_a[0]) = _r; }  break;
        case 2: { QDBusPendingReply<> _r = _t->Exit((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 3: { QDBusPendingReply<QString> _r = _t->GetAddress();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QString>*>(_a[0]) = _r; }  break;
        case 4: { QDBusPendingReply<QVariantList> _r = _t->ListActiveEngines();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QVariantList>*>(_a[0]) = _r; }  break;
        case 5: { QDBusPendingReply<QVariantList> _r = _t->ListEngines();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QVariantList>*>(_a[0]) = _r; }  break;
        case 6: { QDBusPendingReply<QDBusVariant> _r = _t->Ping((*reinterpret_cast< const QDBusVariant(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QDBusVariant>*>(_a[0]) = _r; }  break;
        case 7: { QDBusPendingReply<> _r = _t->RegisterComponent((*reinterpret_cast< const QDBusVariant(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 8: { QDBusPendingReply<QDBusVariant> _r = _t->GetGlobalEngine();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QDBusVariant>*>(_a[0]) = _r; }  break;
        case 9: { QIBusEngineDesc _r = _t->getGlobalEngine();
            if (_a[0]) *reinterpret_cast< QIBusEngineDesc*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusVariant >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusVariant >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QIBusProxy::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QIBusProxy::GlobalEngineChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QIBusProxy::staticMetaObject = {
    { &QDBusAbstractInterface::staticMetaObject, qt_meta_stringdata_QIBusProxy.data,
      qt_meta_data_QIBusProxy,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QIBusProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QIBusProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QIBusProxy.stringdata0))
        return static_cast<void*>(const_cast< QIBusProxy*>(this));
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int QIBusProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void QIBusProxy::GlobalEngineChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
