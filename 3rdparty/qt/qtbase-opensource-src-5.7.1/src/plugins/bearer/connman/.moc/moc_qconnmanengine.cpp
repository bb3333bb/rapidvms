/****************************************************************************
** Meta object code from reading C++ file 'qconnmanengine.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qconnmanengine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qconnmanengine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QConnmanEngine_t {
    QByteArrayData data[20];
    char stringdata0[271];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QConnmanEngine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QConnmanEngine_t qt_meta_stringdata_QConnmanEngine = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QConnmanEngine"
QT_MOC_LITERAL(1, 15, 15), // "doRequestUpdate"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 14), // "updateServices"
QT_MOC_LITERAL(4, 47, 14), // "ConnmanMapList"
QT_MOC_LITERAL(5, 62, 7), // "changed"
QT_MOC_LITERAL(6, 70, 22), // "QList<QDBusObjectPath>"
QT_MOC_LITERAL(7, 93, 7), // "removed"
QT_MOC_LITERAL(8, 101, 13), // "servicesReady"
QT_MOC_LITERAL(9, 115, 12), // "finishedScan"
QT_MOC_LITERAL(10, 128, 5), // "error"
QT_MOC_LITERAL(11, 134, 12), // "changedModem"
QT_MOC_LITERAL(12, 147, 19), // "serviceStateChanged"
QT_MOC_LITERAL(13, 167, 5), // "state"
QT_MOC_LITERAL(14, 173, 19), // "configurationChange"
QT_MOC_LITERAL(15, 193, 25), // "QConnmanServiceInterface*"
QT_MOC_LITERAL(16, 219, 7), // "service"
QT_MOC_LITERAL(17, 227, 18), // "reEvaluateCellular"
QT_MOC_LITERAL(18, 246, 10), // "initialize"
QT_MOC_LITERAL(19, 257, 13) // "requestUpdate"

    },
    "QConnmanEngine\0doRequestUpdate\0\0"
    "updateServices\0ConnmanMapList\0changed\0"
    "QList<QDBusObjectPath>\0removed\0"
    "servicesReady\0finishedScan\0error\0"
    "changedModem\0serviceStateChanged\0state\0"
    "configurationChange\0QConnmanServiceInterface*\0"
    "service\0reEvaluateCellular\0initialize\0"
    "requestUpdate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QConnmanEngine[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    2,   65,    2, 0x08 /* Private */,
       8,    1,   70,    2, 0x08 /* Private */,
       9,    1,   73,    2, 0x08 /* Private */,
      11,    0,   76,    2, 0x08 /* Private */,
      12,    1,   77,    2, 0x08 /* Private */,
      14,    1,   80,    2, 0x08 /* Private */,
      17,    0,   83,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      18,    0,   84,    2, 0x02 /* Public */,
      19,    0,   85,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 6,    5,    7,
    QMetaType::Void, QMetaType::QStringList,    2,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QConnmanEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QConnmanEngine *_t = static_cast<QConnmanEngine *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->doRequestUpdate(); break;
        case 1: _t->updateServices((*reinterpret_cast< const ConnmanMapList(*)>(_a[1])),(*reinterpret_cast< const QList<QDBusObjectPath>(*)>(_a[2]))); break;
        case 2: _t->servicesReady((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 3: _t->finishedScan((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->changedModem(); break;
        case 5: _t->serviceStateChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->configurationChange((*reinterpret_cast< QConnmanServiceInterface*(*)>(_a[1]))); break;
        case 7: _t->reEvaluateCellular(); break;
        case 8: _t->initialize(); break;
        case 9: _t->requestUpdate(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QDBusObjectPath> >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QConnmanServiceInterface* >(); break;
            }
            break;
        }
    }
}

const QMetaObject QConnmanEngine::staticMetaObject = {
    { &QBearerEngineImpl::staticMetaObject, qt_meta_stringdata_QConnmanEngine.data,
      qt_meta_data_QConnmanEngine,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QConnmanEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QConnmanEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QConnmanEngine.stringdata0))
        return static_cast<void*>(const_cast< QConnmanEngine*>(this));
    return QBearerEngineImpl::qt_metacast(_clname);
}

int QConnmanEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QBearerEngineImpl::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
