/****************************************************************************
** Meta object code from reading C++ file 'qevdevmousemanager_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../input/evdevmouse/qevdevmousemanager_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qevdevmousemanager_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QEvdevMouseManager_t {
    QByteArrayData data[17];
    char stringdata0[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QEvdevMouseManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QEvdevMouseManager_t qt_meta_stringdata_QEvdevMouseManager = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QEvdevMouseManager"
QT_MOC_LITERAL(1, 19, 16), // "handleMouseEvent"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 1), // "x"
QT_MOC_LITERAL(4, 39, 1), // "y"
QT_MOC_LITERAL(5, 41, 3), // "abs"
QT_MOC_LITERAL(6, 45, 16), // "Qt::MouseButtons"
QT_MOC_LITERAL(7, 62, 7), // "buttons"
QT_MOC_LITERAL(8, 70, 16), // "handleWheelEvent"
QT_MOC_LITERAL(9, 87, 5), // "delta"
QT_MOC_LITERAL(10, 93, 15), // "Qt::Orientation"
QT_MOC_LITERAL(11, 109, 11), // "orientation"
QT_MOC_LITERAL(12, 121, 8), // "addMouse"
QT_MOC_LITERAL(13, 130, 10), // "deviceNode"
QT_MOC_LITERAL(14, 141, 11), // "removeMouse"
QT_MOC_LITERAL(15, 153, 26), // "handleCursorPositionChange"
QT_MOC_LITERAL(16, 180, 3) // "pos"

    },
    "QEvdevMouseManager\0handleMouseEvent\0"
    "\0x\0y\0abs\0Qt::MouseButtons\0buttons\0"
    "handleWheelEvent\0delta\0Qt::Orientation\0"
    "orientation\0addMouse\0deviceNode\0"
    "removeMouse\0handleCursorPositionChange\0"
    "pos"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QEvdevMouseManager[] = {

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
       1,    4,   44,    2, 0x0a /* Public */,
       8,    2,   53,    2, 0x0a /* Public */,
      12,    1,   58,    2, 0x08 /* Private */,
      12,    0,   61,    2, 0x28 /* Private | MethodCloned */,
      14,    1,   62,    2, 0x08 /* Private */,
      15,    1,   65,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool, 0x80000000 | 6,    3,    4,    5,    7,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 10,    9,   11,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QPoint,   16,

       0        // eod
};

void QEvdevMouseManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QEvdevMouseManager *_t = static_cast<QEvdevMouseManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handleMouseEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< Qt::MouseButtons(*)>(_a[4]))); break;
        case 1: _t->handleWheelEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Qt::Orientation(*)>(_a[2]))); break;
        case 2: _t->addMouse((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->addMouse(); break;
        case 4: _t->removeMouse((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->handleCursorPositionChange((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QEvdevMouseManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QEvdevMouseManager.data,
      qt_meta_data_QEvdevMouseManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QEvdevMouseManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QEvdevMouseManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QEvdevMouseManager.stringdata0))
        return static_cast<void*>(const_cast< QEvdevMouseManager*>(this));
    return QObject::qt_metacast(_clname);
}

int QEvdevMouseManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
