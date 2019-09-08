/****************************************************************************
** Meta object code from reading C++ file 'cache_adaptor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../cache_adaptor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cache_adaptor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CacheAdaptor_t {
    QByteArrayData data[14];
    char stringdata0[912];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CacheAdaptor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CacheAdaptor_t qt_meta_stringdata_CacheAdaptor = {
    {
QT_MOC_LITERAL(0, 0, 12), // "CacheAdaptor"
QT_MOC_LITERAL(1, 13, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 29, 20), // "org.a11y.atspi.Cache"
QT_MOC_LITERAL(3, 50, 19), // "D-Bus Introspection"
QT_MOC_LITERAL(4, 70, 709), // "  <interface name=\"org.a11y...."
QT_MOC_LITERAL(5, 732, 13), // "AddAccessible"
QT_MOC_LITERAL(6, 746, 0), // ""
QT_MOC_LITERAL(7, 747, 23), // "QSpiAccessibleCacheItem"
QT_MOC_LITERAL(8, 771, 9), // "nodeAdded"
QT_MOC_LITERAL(9, 781, 16), // "RemoveAccessible"
QT_MOC_LITERAL(10, 798, 19), // "QSpiObjectReference"
QT_MOC_LITERAL(11, 818, 11), // "nodeRemoved"
QT_MOC_LITERAL(12, 830, 8), // "GetItems"
QT_MOC_LITERAL(13, 839, 24) // "QSpiAccessibleCacheArray"

    },
    "CacheAdaptor\0D-Bus Interface\0"
    "org.a11y.atspi.Cache\0D-Bus Introspection\0"
    "  <interface name=\"org.a11y.atspi.Cache\">\n    <method name=\"GetIte"
    "ms\">\n      <arg direction=\"out\" type=\"a((so)(so)a(so)assusau)\" n"
    "ame=\"nodes\"/>\n      <annotation value=\"QSpiAccessibleCacheArray\" "
    "name=\"org.qtproject.QtDBus.QtTypeName.Out0\"/>\n    </method>\n    <s"
    "ignal name=\"AddAccessible\">\n      <arg type=\"((so)(so)a(so)assusau"
    ")\" name=\"nodeAdded\"/>\n      <annotation value=\"QSpiAccessibleCach"
    "eItem\" name=\"org.qtproject.QtDBus.QtTypeName.Out0\"/>\n    </signal>"
    "\n    <signal name=\"RemoveAccessible\">\n      <arg type=\"(so)\" nam"
    "e=\"nodeRemoved\"/>\n      <annotation value=\"QSpiObjectReference\" n"
    "ame=\"org.qtproject.QtDBus.QtTypeName.Out0\"/>\n    </signal>\n  </int"
    "erface>\n\0"
    "AddAccessible\0\0QSpiAccessibleCacheItem\0"
    "nodeAdded\0RemoveAccessible\0"
    "QSpiObjectReference\0nodeRemoved\0"
    "GetItems\0QSpiAccessibleCacheArray"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CacheAdaptor[] = {

 // content:
       7,       // revision
       0,       // classname
       2,   14, // classinfo
       3,   18, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,

 // signals: name, argc, parameters, tag, flags
       5,    1,   33,    6, 0x06 /* Public */,
       9,    1,   36,    6, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,   39,    6, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10,   11,

 // slots: parameters
    0x80000000 | 13,

       0        // eod
};

void CacheAdaptor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CacheAdaptor *_t = static_cast<CacheAdaptor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->AddAccessible((*reinterpret_cast< const QSpiAccessibleCacheItem(*)>(_a[1]))); break;
        case 1: _t->RemoveAccessible((*reinterpret_cast< const QSpiObjectReference(*)>(_a[1]))); break;
        case 2: { QSpiAccessibleCacheArray _r = _t->GetItems();
            if (_a[0]) *reinterpret_cast< QSpiAccessibleCacheArray*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSpiAccessibleCacheItem >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSpiObjectReference >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CacheAdaptor::*_t)(const QSpiAccessibleCacheItem & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CacheAdaptor::AddAccessible)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CacheAdaptor::*_t)(const QSpiObjectReference & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CacheAdaptor::RemoveAccessible)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject CacheAdaptor::staticMetaObject = {
    { &QDBusAbstractAdaptor::staticMetaObject, qt_meta_stringdata_CacheAdaptor.data,
      qt_meta_data_CacheAdaptor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CacheAdaptor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CacheAdaptor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CacheAdaptor.stringdata0))
        return static_cast<void*>(const_cast< CacheAdaptor*>(this));
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int CacheAdaptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
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
void CacheAdaptor::AddAccessible(const QSpiAccessibleCacheItem & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CacheAdaptor::RemoveAccessible(const QSpiObjectReference & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
