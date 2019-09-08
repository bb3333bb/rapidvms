/****************************************************************************
** Meta object code from reading C++ file 'socket_interface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../socket_interface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'socket_interface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OrgA11yAtspiSocketInterface_t {
    QByteArrayData data[9];
    char stringdata0[137];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OrgA11yAtspiSocketInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OrgA11yAtspiSocketInterface_t qt_meta_stringdata_OrgA11yAtspiSocketInterface = {
    {
QT_MOC_LITERAL(0, 0, 27), // "OrgA11yAtspiSocketInterface"
QT_MOC_LITERAL(1, 28, 9), // "Available"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 5), // "Embed"
QT_MOC_LITERAL(4, 45, 38), // "QDBusPendingReply<QSpiObjectR..."
QT_MOC_LITERAL(5, 84, 19), // "QSpiObjectReference"
QT_MOC_LITERAL(6, 104, 4), // "plug"
QT_MOC_LITERAL(7, 109, 7), // "Unembed"
QT_MOC_LITERAL(8, 117, 19) // "QDBusPendingReply<>"

    },
    "OrgA11yAtspiSocketInterface\0Available\0"
    "\0Embed\0QDBusPendingReply<QSpiObjectReference>\0"
    "QSpiObjectReference\0plug\0Unembed\0"
    "QDBusPendingReply<>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OrgA11yAtspiSocketInterface[] = {

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
       3,    1,   30,    2, 0x0a /* Public */,
       7,    1,   33,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    0x80000000 | 4, 0x80000000 | 5,    6,
    0x80000000 | 8, 0x80000000 | 5,    6,

       0        // eod
};

void OrgA11yAtspiSocketInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OrgA11yAtspiSocketInterface *_t = static_cast<OrgA11yAtspiSocketInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Available(); break;
        case 1: { QDBusPendingReply<QSpiObjectReference> _r = _t->Embed((*reinterpret_cast< const QSpiObjectReference(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QSpiObjectReference>*>(_a[0]) = _r; }  break;
        case 2: { QDBusPendingReply<> _r = _t->Unembed((*reinterpret_cast< const QSpiObjectReference(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSpiObjectReference >(); break;
            }
            break;
        case 2:
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
            typedef void (OrgA11yAtspiSocketInterface::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OrgA11yAtspiSocketInterface::Available)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject OrgA11yAtspiSocketInterface::staticMetaObject = {
    { &QDBusAbstractInterface::staticMetaObject, qt_meta_stringdata_OrgA11yAtspiSocketInterface.data,
      qt_meta_data_OrgA11yAtspiSocketInterface,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OrgA11yAtspiSocketInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OrgA11yAtspiSocketInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OrgA11yAtspiSocketInterface.stringdata0))
        return static_cast<void*>(const_cast< OrgA11yAtspiSocketInterface*>(this));
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int OrgA11yAtspiSocketInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void OrgA11yAtspiSocketInterface::Available()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
