/****************************************************************************
** Meta object code from reading C++ file 'qabstractsocketengine_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../socket/qabstractsocketengine_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qabstractsocketengine_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QAbstractSocketEngine_t {
    QByteArrayData data[12];
    char stringdata0[199];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QAbstractSocketEngine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QAbstractSocketEngine_t qt_meta_stringdata_QAbstractSocketEngine = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QAbstractSocketEngine"
QT_MOC_LITERAL(1, 22, 16), // "readNotification"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 17), // "writeNotification"
QT_MOC_LITERAL(4, 58, 17), // "closeNotification"
QT_MOC_LITERAL(5, 76, 21), // "exceptionNotification"
QT_MOC_LITERAL(6, 98, 22), // "connectionNotification"
QT_MOC_LITERAL(7, 121, 27), // "proxyAuthenticationRequired"
QT_MOC_LITERAL(8, 149, 13), // "QNetworkProxy"
QT_MOC_LITERAL(9, 163, 5), // "proxy"
QT_MOC_LITERAL(10, 169, 15), // "QAuthenticator*"
QT_MOC_LITERAL(11, 185, 13) // "authenticator"

    },
    "QAbstractSocketEngine\0readNotification\0"
    "\0writeNotification\0closeNotification\0"
    "exceptionNotification\0connectionNotification\0"
    "proxyAuthenticationRequired\0QNetworkProxy\0"
    "proxy\0QAuthenticator*\0authenticator"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QAbstractSocketEngine[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x0a /* Public */,
       4,    0,   46,    2, 0x0a /* Public */,
       5,    0,   47,    2, 0x0a /* Public */,
       6,    0,   48,    2, 0x0a /* Public */,
       7,    2,   49,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 10,    9,   11,

       0        // eod
};

void QAbstractSocketEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QAbstractSocketEngine *_t = static_cast<QAbstractSocketEngine *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->readNotification(); break;
        case 1: _t->writeNotification(); break;
        case 2: _t->closeNotification(); break;
        case 3: _t->exceptionNotification(); break;
        case 4: _t->connectionNotification(); break;
        case 5: _t->proxyAuthenticationRequired((*reinterpret_cast< const QNetworkProxy(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject QAbstractSocketEngine::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QAbstractSocketEngine.data,
      qt_meta_data_QAbstractSocketEngine,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QAbstractSocketEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAbstractSocketEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QAbstractSocketEngine.stringdata0))
        return static_cast<void*>(const_cast< QAbstractSocketEngine*>(this));
    return QObject::qt_metacast(_clname);
}

int QAbstractSocketEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
