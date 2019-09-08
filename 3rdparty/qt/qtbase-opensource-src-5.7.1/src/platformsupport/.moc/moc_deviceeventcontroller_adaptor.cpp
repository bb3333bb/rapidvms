/****************************************************************************
** Meta object code from reading C++ file 'deviceeventcontroller_adaptor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../deviceeventcontroller_adaptor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'deviceeventcontroller_adaptor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DeviceEventControllerAdaptor_t {
    QByteArrayData data[10];
    char stringdata0[718];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DeviceEventControllerAdaptor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DeviceEventControllerAdaptor_t qt_meta_stringdata_DeviceEventControllerAdaptor = {
    {
QT_MOC_LITERAL(0, 0, 28), // "DeviceEventControllerAdaptor"
QT_MOC_LITERAL(1, 29, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 45, 36), // "org.a11y.atspi.DeviceEventCon..."
QT_MOC_LITERAL(3, 82, 19), // "D-Bus Introspection"
QT_MOC_LITERAL(4, 102, 551), // "  <interface name=\"org.a11y...."
QT_MOC_LITERAL(5, 613, 20), // "NotifyListenersAsync"
QT_MOC_LITERAL(6, 634, 0), // ""
QT_MOC_LITERAL(7, 635, 15), // "QSpiDeviceEvent"
QT_MOC_LITERAL(8, 651, 5), // "event"
QT_MOC_LITERAL(9, 657, 19) // "NotifyListenersSync"

    },
    "DeviceEventControllerAdaptor\0"
    "D-Bus Interface\0org.a11y.atspi.DeviceEventController\0"
    "D-Bus Introspection\0"
    "  <interface name=\"org.a11y.atspi.DeviceEventController\">\n    <meth"
    "od name=\"NotifyListenersSync\">\n      <arg direction=\"in\" type=\"("
    "uinnisb)\" name=\"event\"/>\n      <arg direction=\"out\" type=\"b\"/>"
    "\n      <annotation value=\"QSpiDeviceEvent\" name=\"org.qtproject.QtD"
    "Bus.QtTypeName.In0\"/>\n    </method>\n    <method name=\"NotifyListen"
    "ersAsync\">\n      <arg direction=\"in\" type=\"(uinnisb)\" name=\"eve"
    "nt\"/>\n      <annotation value=\"QSpiDeviceEvent\" name=\"org.qtproje"
    "ct.QtDBus.QtTypeName.In0\"/>\n    </method>\n  </interface>\n\0"
    "NotifyListenersAsync\0\0QSpiDeviceEvent\0"
    "event\0NotifyListenersSync"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DeviceEventControllerAdaptor[] = {

 // content:
       7,       // revision
       0,       // classname
       2,   14, // classinfo
       2,   18, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,

 // slots: name, argc, parameters, tag, flags
       5,    1,   28,    6, 0x0a /* Public */,
       9,    1,   31,    6, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Bool, 0x80000000 | 7,    8,

       0        // eod
};

void DeviceEventControllerAdaptor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DeviceEventControllerAdaptor *_t = static_cast<DeviceEventControllerAdaptor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->NotifyListenersAsync((*reinterpret_cast< const QSpiDeviceEvent(*)>(_a[1]))); break;
        case 1: { bool _r = _t->NotifyListenersSync((*reinterpret_cast< const QSpiDeviceEvent(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSpiDeviceEvent >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSpiDeviceEvent >(); break;
            }
            break;
        }
    }
}

const QMetaObject DeviceEventControllerAdaptor::staticMetaObject = {
    { &QDBusAbstractAdaptor::staticMetaObject, qt_meta_stringdata_DeviceEventControllerAdaptor.data,
      qt_meta_data_DeviceEventControllerAdaptor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DeviceEventControllerAdaptor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeviceEventControllerAdaptor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DeviceEventControllerAdaptor.stringdata0))
        return static_cast<void*>(const_cast< DeviceEventControllerAdaptor*>(this));
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int DeviceEventControllerAdaptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
