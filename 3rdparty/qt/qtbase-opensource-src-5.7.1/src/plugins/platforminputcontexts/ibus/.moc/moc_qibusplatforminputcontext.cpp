/****************************************************************************
** Meta object code from reading C++ file 'qibusplatforminputcontext.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qibusplatforminputcontext.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qibusplatforminputcontext.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QIBusPlatformInputContext_t {
    QByteArrayData data[21];
    char stringdata0[285];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QIBusPlatformInputContext_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QIBusPlatformInputContext_t qt_meta_stringdata_QIBusPlatformInputContext = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QIBusPlatformInputContext"
QT_MOC_LITERAL(1, 26, 10), // "commitText"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 12), // "QDBusVariant"
QT_MOC_LITERAL(4, 51, 4), // "text"
QT_MOC_LITERAL(5, 56, 17), // "updatePreeditText"
QT_MOC_LITERAL(6, 74, 10), // "cursor_pos"
QT_MOC_LITERAL(7, 85, 7), // "visible"
QT_MOC_LITERAL(8, 93, 17), // "cursorRectChanged"
QT_MOC_LITERAL(9, 111, 21), // "deleteSurroundingText"
QT_MOC_LITERAL(10, 133, 6), // "offset"
QT_MOC_LITERAL(11, 140, 7), // "n_chars"
QT_MOC_LITERAL(12, 148, 23), // "surroundingTextRequired"
QT_MOC_LITERAL(13, 172, 19), // "filterEventFinished"
QT_MOC_LITERAL(14, 192, 24), // "QDBusPendingCallWatcher*"
QT_MOC_LITERAL(15, 217, 4), // "call"
QT_MOC_LITERAL(16, 222, 13), // "socketChanged"
QT_MOC_LITERAL(17, 236, 3), // "str"
QT_MOC_LITERAL(18, 240, 12), // "connectToBus"
QT_MOC_LITERAL(19, 253, 19), // "globalEngineChanged"
QT_MOC_LITERAL(20, 273, 11) // "engine_name"

    },
    "QIBusPlatformInputContext\0commitText\0"
    "\0QDBusVariant\0text\0updatePreeditText\0"
    "cursor_pos\0visible\0cursorRectChanged\0"
    "deleteSurroundingText\0offset\0n_chars\0"
    "surroundingTextRequired\0filterEventFinished\0"
    "QDBusPendingCallWatcher*\0call\0"
    "socketChanged\0str\0connectToBus\0"
    "globalEngineChanged\0engine_name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QIBusPlatformInputContext[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x0a /* Public */,
       5,    3,   62,    2, 0x0a /* Public */,
       8,    0,   69,    2, 0x0a /* Public */,
       9,    2,   70,    2, 0x0a /* Public */,
      12,    0,   75,    2, 0x0a /* Public */,
      13,    1,   76,    2, 0x0a /* Public */,
      16,    1,   79,    2, 0x0a /* Public */,
      18,    0,   82,    2, 0x0a /* Public */,
      19,    1,   83,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::UInt, QMetaType::Bool,    4,    6,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::UInt,   10,   11,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   20,

       0        // eod
};

void QIBusPlatformInputContext::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QIBusPlatformInputContext *_t = static_cast<QIBusPlatformInputContext *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->commitText((*reinterpret_cast< const QDBusVariant(*)>(_a[1]))); break;
        case 1: _t->updatePreeditText((*reinterpret_cast< const QDBusVariant(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 2: _t->cursorRectChanged(); break;
        case 3: _t->deleteSurroundingText((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 4: _t->surroundingTextRequired(); break;
        case 5: _t->filterEventFinished((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        case 6: _t->socketChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->connectToBus(); break;
        case 8: _t->globalEngineChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusVariant >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusVariant >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusPendingCallWatcher* >(); break;
            }
            break;
        }
    }
}

const QMetaObject QIBusPlatformInputContext::staticMetaObject = {
    { &QPlatformInputContext::staticMetaObject, qt_meta_stringdata_QIBusPlatformInputContext.data,
      qt_meta_data_QIBusPlatformInputContext,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QIBusPlatformInputContext::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QIBusPlatformInputContext::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QIBusPlatformInputContext.stringdata0))
        return static_cast<void*>(const_cast< QIBusPlatformInputContext*>(this));
    return QPlatformInputContext::qt_metacast(_clname);
}

int QIBusPlatformInputContext::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlatformInputContext::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
