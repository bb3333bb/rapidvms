/****************************************************************************
** Meta object code from reading C++ file 'qxcbnativeinterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qxcbnativeinterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qxcbnativeinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QXcbNativeInterface_t {
    QByteArrayData data[14];
    char stringdata0[243];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QXcbNativeInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QXcbNativeInterface_t qt_meta_stringdata_QXcbNativeInterface = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QXcbNativeInterface"
QT_MOC_LITERAL(1, 20, 23), // "systemTrayWindowChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 8), // "QScreen*"
QT_MOC_LITERAL(4, 54, 6), // "screen"
QT_MOC_LITERAL(5, 61, 19), // "systemTrayAvailable"
QT_MOC_LITERAL(6, 81, 14), // "const QScreen*"
QT_MOC_LITERAL(7, 96, 27), // "setParentRelativeBackPixmap"
QT_MOC_LITERAL(8, 124, 8), // "QWindow*"
QT_MOC_LITERAL(9, 133, 6), // "window"
QT_MOC_LITERAL(10, 140, 28), // "systrayVisualHasAlphaChannel"
QT_MOC_LITERAL(11, 169, 27), // "requestSystemTrayWindowDock"
QT_MOC_LITERAL(12, 197, 14), // "const QWindow*"
QT_MOC_LITERAL(13, 212, 30) // "systemTrayWindowGlobalGeometry"

    },
    "QXcbNativeInterface\0systemTrayWindowChanged\0"
    "\0QScreen*\0screen\0systemTrayAvailable\0"
    "const QScreen*\0setParentRelativeBackPixmap\0"
    "QWindow*\0window\0systrayVisualHasAlphaChannel\0"
    "requestSystemTrayWindowDock\0const QWindow*\0"
    "systemTrayWindowGlobalGeometry"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QXcbNativeInterface[] = {

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

 // methods: name, argc, parameters, tag, flags
       5,    1,   47,    2, 0x02 /* Public */,
       7,    1,   50,    2, 0x02 /* Public */,
      10,    0,   53,    2, 0x02 /* Public */,
      11,    1,   54,    2, 0x02 /* Public */,
      13,    1,   57,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // methods: parameters
    QMetaType::Bool, 0x80000000 | 6,    4,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Bool,
    QMetaType::Bool, 0x80000000 | 12,    9,
    QMetaType::QRect, 0x80000000 | 12,    9,

       0        // eod
};

void QXcbNativeInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QXcbNativeInterface *_t = static_cast<QXcbNativeInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->systemTrayWindowChanged((*reinterpret_cast< QScreen*(*)>(_a[1]))); break;
        case 1: { bool _r = _t->systemTrayAvailable((*reinterpret_cast< const QScreen*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: _t->setParentRelativeBackPixmap((*reinterpret_cast< QWindow*(*)>(_a[1]))); break;
        case 3: { bool _r = _t->systrayVisualHasAlphaChannel();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->requestSystemTrayWindowDock((*reinterpret_cast< const QWindow*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { QRect _r = _t->systemTrayWindowGlobalGeometry((*reinterpret_cast< const QWindow*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QXcbNativeInterface::*_t)(QScreen * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXcbNativeInterface::systemTrayWindowChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QXcbNativeInterface::staticMetaObject = {
    { &QPlatformNativeInterface::staticMetaObject, qt_meta_stringdata_QXcbNativeInterface.data,
      qt_meta_data_QXcbNativeInterface,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QXcbNativeInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QXcbNativeInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QXcbNativeInterface.stringdata0))
        return static_cast<void*>(const_cast< QXcbNativeInterface*>(this));
    return QPlatformNativeInterface::qt_metacast(_clname);
}

int QXcbNativeInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlatformNativeInterface::qt_metacall(_c, _id, _a);
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
void QXcbNativeInterface::systemTrayWindowChanged(QScreen * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
