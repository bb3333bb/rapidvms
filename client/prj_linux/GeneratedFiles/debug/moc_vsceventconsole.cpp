/****************************************************************************
** Meta object code from reading C++ file 'vsceventconsole.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/main/vsceventconsole.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vsceventconsole.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_VSCEventConsole_t {
    QByteArrayData data[10];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VSCEventConsole_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VSCEventConsole_t qt_meta_stringdata_VSCEventConsole = {
    {
QT_MOC_LITERAL(0, 0, 15), // "VSCEventConsole"
QT_MOC_LITERAL(1, 16, 20), // "SignalSectionClicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 3), // "row"
QT_MOC_LITERAL(4, 42, 6), // "column"
QT_MOC_LITERAL(5, 49, 9), // "SlotEvent"
QT_MOC_LITERAL(6, 59, 11), // "std::string"
QT_MOC_LITERAL(7, 71, 8), // "strEvent"
QT_MOC_LITERAL(8, 80, 18), // "SlotSectionClicked"
QT_MOC_LITERAL(9, 99, 8) // "SlotHold"

    },
    "VSCEventConsole\0SignalSectionClicked\0"
    "\0row\0column\0SlotEvent\0std::string\0"
    "strEvent\0SlotSectionClicked\0SlotHold"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VSCEventConsole[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   39,    2, 0x0a /* Public */,
       8,    2,   42,    2, 0x0a /* Public */,
       9,    0,   47,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void,

       0        // eod
};

void VSCEventConsole::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VSCEventConsole *_t = static_cast<VSCEventConsole *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SignalSectionClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->SlotEvent((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 2: _t->SlotSectionClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->SlotHold(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (VSCEventConsole::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VSCEventConsole::SignalSectionClicked)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject VSCEventConsole::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_VSCEventConsole.data,
      qt_meta_data_VSCEventConsole,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VSCEventConsole::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VSCEventConsole::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VSCEventConsole.stringdata0))
        return static_cast<void*>(const_cast< VSCEventConsole*>(this));
    return QWidget::qt_metacast(_clname);
}

int VSCEventConsole::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void VSCEventConsole::SignalSectionClicked(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
