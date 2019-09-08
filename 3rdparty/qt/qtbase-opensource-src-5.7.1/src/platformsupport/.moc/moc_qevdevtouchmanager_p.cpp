/****************************************************************************
** Meta object code from reading C++ file 'qevdevtouchmanager_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../input/evdevtouch/qevdevtouchmanager_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qevdevtouchmanager_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QEvdevTouchManager_t {
    QByteArrayData data[6];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QEvdevTouchManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QEvdevTouchManager_t qt_meta_stringdata_QEvdevTouchManager = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QEvdevTouchManager"
QT_MOC_LITERAL(1, 19, 9), // "addDevice"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 10), // "deviceNode"
QT_MOC_LITERAL(4, 41, 12), // "removeDevice"
QT_MOC_LITERAL(5, 54, 22) // "updateInputDeviceCount"

    },
    "QEvdevTouchManager\0addDevice\0\0deviceNode\0"
    "removeDevice\0updateInputDeviceCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QEvdevTouchManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x08 /* Private */,
       4,    1,   32,    2, 0x08 /* Private */,
       5,    0,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,

       0        // eod
};

void QEvdevTouchManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QEvdevTouchManager *_t = static_cast<QEvdevTouchManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addDevice((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->removeDevice((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->updateInputDeviceCount(); break;
        default: ;
        }
    }
}

const QMetaObject QEvdevTouchManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QEvdevTouchManager.data,
      qt_meta_data_QEvdevTouchManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QEvdevTouchManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QEvdevTouchManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QEvdevTouchManager.stringdata0))
        return static_cast<void*>(const_cast< QEvdevTouchManager*>(this));
    return QObject::qt_metacast(_clname);
}

int QEvdevTouchManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
