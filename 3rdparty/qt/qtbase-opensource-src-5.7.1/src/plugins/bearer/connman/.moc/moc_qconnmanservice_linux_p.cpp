/****************************************************************************
** Meta object code from reading C++ file 'qconnmanservice_linux_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qconnmanservice_linux_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qconnmanservice_linux_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QConnmanManagerInterface_t {
    QByteArrayData data[24];
    char stringdata0[350];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QConnmanManagerInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QConnmanManagerInterface_t qt_meta_stringdata_QConnmanManagerInterface = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QConnmanManagerInterface"
QT_MOC_LITERAL(1, 25, 15), // "propertyChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 12), // "QDBusVariant"
QT_MOC_LITERAL(4, 55, 5), // "value"
QT_MOC_LITERAL(5, 61, 12), // "stateChanged"
QT_MOC_LITERAL(6, 74, 22), // "propertyChangedContext"
QT_MOC_LITERAL(7, 97, 15), // "servicesChanged"
QT_MOC_LITERAL(8, 113, 14), // "ConnmanMapList"
QT_MOC_LITERAL(9, 128, 22), // "QList<QDBusObjectPath>"
QT_MOC_LITERAL(10, 151, 13), // "servicesReady"
QT_MOC_LITERAL(11, 165, 12), // "scanFinished"
QT_MOC_LITERAL(12, 178, 5), // "error"
QT_MOC_LITERAL(13, 184, 17), // "onServicesChanged"
QT_MOC_LITERAL(14, 202, 15), // "changedProperty"
QT_MOC_LITERAL(15, 218, 15), // "propertiesReply"
QT_MOC_LITERAL(16, 234, 24), // "QDBusPendingCallWatcher*"
QT_MOC_LITERAL(17, 259, 4), // "call"
QT_MOC_LITERAL(18, 264, 13), // "servicesReply"
QT_MOC_LITERAL(19, 278, 15), // "technologyAdded"
QT_MOC_LITERAL(20, 294, 15), // "QDBusObjectPath"
QT_MOC_LITERAL(21, 310, 10), // "technology"
QT_MOC_LITERAL(22, 321, 10), // "properties"
QT_MOC_LITERAL(23, 332, 17) // "technologyRemoved"

    },
    "QConnmanManagerInterface\0propertyChanged\0"
    "\0QDBusVariant\0value\0stateChanged\0"
    "propertyChangedContext\0servicesChanged\0"
    "ConnmanMapList\0QList<QDBusObjectPath>\0"
    "servicesReady\0scanFinished\0error\0"
    "onServicesChanged\0changedProperty\0"
    "propertiesReply\0QDBusPendingCallWatcher*\0"
    "call\0servicesReply\0technologyAdded\0"
    "QDBusObjectPath\0technology\0properties\0"
    "technologyRemoved"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QConnmanManagerInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   74,    2, 0x06 /* Public */,
       5,    1,   79,    2, 0x06 /* Public */,
       6,    3,   82,    2, 0x06 /* Public */,
       7,    2,   89,    2, 0x06 /* Public */,
      10,    1,   94,    2, 0x06 /* Public */,
      11,    1,   97,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    2,  100,    2, 0x08 /* Private */,
      14,    2,  105,    2, 0x08 /* Private */,
      15,    1,  110,    2, 0x08 /* Private */,
      18,    1,  113,    2, 0x08 /* Private */,
      19,    2,  116,    2, 0x08 /* Private */,
      23,    1,  121,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 3,    2,    4,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 3,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 9,    2,    2,
    QMetaType::Void, QMetaType::QStringList,    2,
    QMetaType::Void, QMetaType::Bool,   12,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 9,    2,    2,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 3,    2,    4,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 20, QMetaType::QVariantMap,   21,   22,
    QMetaType::Void, 0x80000000 | 20,   21,

       0        // eod
};

void QConnmanManagerInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QConnmanManagerInterface *_t = static_cast<QConnmanManagerInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->propertyChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QDBusVariant(*)>(_a[2]))); break;
        case 1: _t->stateChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->propertyChangedContext((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QDBusVariant(*)>(_a[3]))); break;
        case 3: _t->servicesChanged((*reinterpret_cast< const ConnmanMapList(*)>(_a[1])),(*reinterpret_cast< const QList<QDBusObjectPath>(*)>(_a[2]))); break;
        case 4: _t->servicesReady((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 5: _t->scanFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->onServicesChanged((*reinterpret_cast< const ConnmanMapList(*)>(_a[1])),(*reinterpret_cast< const QList<QDBusObjectPath>(*)>(_a[2]))); break;
        case 7: _t->changedProperty((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QDBusVariant(*)>(_a[2]))); break;
        case 8: _t->propertiesReply((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        case 9: _t->servicesReply((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        case 10: _t->technologyAdded((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2]))); break;
        case 11: _t->technologyRemoved((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1]))); break;
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
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusVariant >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QDBusObjectPath> >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QDBusObjectPath> >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusVariant >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusPendingCallWatcher* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusPendingCallWatcher* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusObjectPath >(); break;
            }
            break;
        case 11:
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
            typedef void (QConnmanManagerInterface::*_t)(const QString & , const QDBusVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QConnmanManagerInterface::propertyChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QConnmanManagerInterface::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QConnmanManagerInterface::stateChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QConnmanManagerInterface::*_t)(const QString & , const QString & , const QDBusVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QConnmanManagerInterface::propertyChangedContext)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QConnmanManagerInterface::*_t)(const ConnmanMapList & , const QList<QDBusObjectPath> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QConnmanManagerInterface::servicesChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QConnmanManagerInterface::*_t)(const QStringList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QConnmanManagerInterface::servicesReady)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QConnmanManagerInterface::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QConnmanManagerInterface::scanFinished)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject QConnmanManagerInterface::staticMetaObject = {
    { &QDBusAbstractInterface::staticMetaObject, qt_meta_stringdata_QConnmanManagerInterface.data,
      qt_meta_data_QConnmanManagerInterface,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QConnmanManagerInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QConnmanManagerInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QConnmanManagerInterface.stringdata0))
        return static_cast<void*>(const_cast< QConnmanManagerInterface*>(this));
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int QConnmanManagerInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void QConnmanManagerInterface::propertyChanged(const QString & _t1, const QDBusVariant & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QConnmanManagerInterface::stateChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QConnmanManagerInterface::propertyChangedContext(const QString & _t1, const QString & _t2, const QDBusVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QConnmanManagerInterface::servicesChanged(const ConnmanMapList & _t1, const QList<QDBusObjectPath> & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QConnmanManagerInterface::servicesReady(const QStringList & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QConnmanManagerInterface::scanFinished(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
struct qt_meta_stringdata_QConnmanServiceInterface_t {
    QByteArrayData data[13];
    char stringdata0[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QConnmanServiceInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QConnmanServiceInterface_t qt_meta_stringdata_QConnmanServiceInterface = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QConnmanServiceInterface"
QT_MOC_LITERAL(1, 25, 15), // "propertyChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 12), // "QDBusVariant"
QT_MOC_LITERAL(4, 55, 5), // "value"
QT_MOC_LITERAL(5, 61, 22), // "propertyChangedContext"
QT_MOC_LITERAL(6, 84, 15), // "propertiesReady"
QT_MOC_LITERAL(7, 100, 12), // "stateChanged"
QT_MOC_LITERAL(8, 113, 5), // "state"
QT_MOC_LITERAL(9, 119, 15), // "propertiesReply"
QT_MOC_LITERAL(10, 135, 24), // "QDBusPendingCallWatcher*"
QT_MOC_LITERAL(11, 160, 4), // "call"
QT_MOC_LITERAL(12, 165, 15) // "changedProperty"

    },
    "QConnmanServiceInterface\0propertyChanged\0"
    "\0QDBusVariant\0value\0propertyChangedContext\0"
    "propertiesReady\0stateChanged\0state\0"
    "propertiesReply\0QDBusPendingCallWatcher*\0"
    "call\0changedProperty"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QConnmanServiceInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,
       5,    3,   49,    2, 0x06 /* Public */,
       6,    0,   56,    2, 0x06 /* Public */,
       7,    1,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   60,    2, 0x08 /* Private */,
      12,    2,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 3,    2,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 3,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 3,    2,    4,

       0        // eod
};

void QConnmanServiceInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QConnmanServiceInterface *_t = static_cast<QConnmanServiceInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->propertyChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QDBusVariant(*)>(_a[2]))); break;
        case 1: _t->propertyChangedContext((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QDBusVariant(*)>(_a[3]))); break;
        case 2: _t->propertiesReady(); break;
        case 3: _t->stateChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->propertiesReply((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        case 5: _t->changedProperty((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QDBusVariant(*)>(_a[2]))); break;
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
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusVariant >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusPendingCallWatcher* >(); break;
            }
            break;
        case 5:
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
            typedef void (QConnmanServiceInterface::*_t)(const QString & , const QDBusVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QConnmanServiceInterface::propertyChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QConnmanServiceInterface::*_t)(const QString & , const QString & , const QDBusVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QConnmanServiceInterface::propertyChangedContext)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QConnmanServiceInterface::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QConnmanServiceInterface::propertiesReady)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QConnmanServiceInterface::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QConnmanServiceInterface::stateChanged)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject QConnmanServiceInterface::staticMetaObject = {
    { &QDBusAbstractInterface::staticMetaObject, qt_meta_stringdata_QConnmanServiceInterface.data,
      qt_meta_data_QConnmanServiceInterface,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QConnmanServiceInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QConnmanServiceInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QConnmanServiceInterface.stringdata0))
        return static_cast<void*>(const_cast< QConnmanServiceInterface*>(this));
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int QConnmanServiceInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QConnmanServiceInterface::propertyChanged(const QString & _t1, const QDBusVariant & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QConnmanServiceInterface::propertyChangedContext(const QString & _t1, const QString & _t2, const QDBusVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QConnmanServiceInterface::propertiesReady()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void QConnmanServiceInterface::stateChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
struct qt_meta_stringdata_QConnmanTechnologyInterface_t {
    QByteArrayData data[11];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QConnmanTechnologyInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QConnmanTechnologyInterface_t qt_meta_stringdata_QConnmanTechnologyInterface = {
    {
QT_MOC_LITERAL(0, 0, 27), // "QConnmanTechnologyInterface"
QT_MOC_LITERAL(1, 28, 15), // "propertyChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 12), // "QDBusVariant"
QT_MOC_LITERAL(4, 58, 5), // "value"
QT_MOC_LITERAL(5, 64, 22), // "propertyChangedContext"
QT_MOC_LITERAL(6, 87, 12), // "scanFinished"
QT_MOC_LITERAL(7, 100, 5), // "error"
QT_MOC_LITERAL(8, 106, 9), // "scanReply"
QT_MOC_LITERAL(9, 116, 24), // "QDBusPendingCallWatcher*"
QT_MOC_LITERAL(10, 141, 4) // "call"

    },
    "QConnmanTechnologyInterface\0propertyChanged\0"
    "\0QDBusVariant\0value\0propertyChangedContext\0"
    "scanFinished\0error\0scanReply\0"
    "QDBusPendingCallWatcher*\0call"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QConnmanTechnologyInterface[] = {

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
       1,    2,   34,    2, 0x06 /* Public */,
       5,    3,   39,    2, 0x06 /* Public */,
       6,    1,   46,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 3,    2,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 3,    2,    2,    2,
    QMetaType::Void, QMetaType::Bool,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

void QConnmanTechnologyInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QConnmanTechnologyInterface *_t = static_cast<QConnmanTechnologyInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->propertyChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QDBusVariant(*)>(_a[2]))); break;
        case 1: _t->propertyChangedContext((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QDBusVariant(*)>(_a[3]))); break;
        case 2: _t->scanFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->scanReply((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
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
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusVariant >(); break;
            }
            break;
        case 3:
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
            typedef void (QConnmanTechnologyInterface::*_t)(const QString & , const QDBusVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QConnmanTechnologyInterface::propertyChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QConnmanTechnologyInterface::*_t)(const QString & , const QString & , const QDBusVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QConnmanTechnologyInterface::propertyChangedContext)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QConnmanTechnologyInterface::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QConnmanTechnologyInterface::scanFinished)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject QConnmanTechnologyInterface::staticMetaObject = {
    { &QDBusAbstractInterface::staticMetaObject, qt_meta_stringdata_QConnmanTechnologyInterface.data,
      qt_meta_data_QConnmanTechnologyInterface,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QConnmanTechnologyInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QConnmanTechnologyInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QConnmanTechnologyInterface.stringdata0))
        return static_cast<void*>(const_cast< QConnmanTechnologyInterface*>(this));
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int QConnmanTechnologyInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QConnmanTechnologyInterface::propertyChanged(const QString & _t1, const QDBusVariant & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QConnmanTechnologyInterface::propertyChangedContext(const QString & _t1, const QString & _t2, const QDBusVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QConnmanTechnologyInterface::scanFinished(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
