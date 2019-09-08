/****************************************************************************
** Meta object code from reading C++ file 'vscvideventsearch.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/searchpb/vscvideventsearch.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vscvideventsearch.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_VSCVidEventSearch_t {
    QByteArrayData data[12];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VSCVidEventSearch_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VSCVidEventSearch_t qt_meta_stringdata_VSCVidEventSearch = {
    {
QT_MOC_LITERAL(0, 0, 17), // "VSCVidEventSearch"
QT_MOC_LITERAL(1, 18, 20), // "SignalSectionClicked"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 3), // "row"
QT_MOC_LITERAL(4, 44, 6), // "column"
QT_MOC_LITERAL(5, 51, 9), // "SlotEvent"
QT_MOC_LITERAL(6, 61, 11), // "std::string"
QT_MOC_LITERAL(7, 73, 8), // "strEvent"
QT_MOC_LITERAL(8, 82, 18), // "SlotSectionClicked"
QT_MOC_LITERAL(9, 101, 10), // "SlotSearch"
QT_MOC_LITERAL(10, 112, 24), // "SlotStartDateTimeChanged"
QT_MOC_LITERAL(11, 137, 8) // "dateTime"

    },
    "VSCVidEventSearch\0SignalSectionClicked\0"
    "\0row\0column\0SlotEvent\0std::string\0"
    "strEvent\0SlotSectionClicked\0SlotSearch\0"
    "SlotStartDateTimeChanged\0dateTime"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VSCVidEventSearch[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   44,    2, 0x0a /* Public */,
       8,    2,   47,    2, 0x0a /* Public */,
       9,    0,   52,    2, 0x0a /* Public */,
      10,    1,   53,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QDateTime,   11,

       0        // eod
};

void VSCVidEventSearch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VSCVidEventSearch *_t = static_cast<VSCVidEventSearch *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SignalSectionClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->SlotEvent((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 2: _t->SlotSectionClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->SlotSearch(); break;
        case 4: _t->SlotStartDateTimeChanged((*reinterpret_cast< const QDateTime(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (VSCVidEventSearch::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VSCVidEventSearch::SignalSectionClicked)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject VSCVidEventSearch::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_VSCVidEventSearch.data,
      qt_meta_data_VSCVidEventSearch,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VSCVidEventSearch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VSCVidEventSearch::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VSCVidEventSearch.stringdata0))
        return static_cast<void*>(const_cast< VSCVidEventSearch*>(this));
    return QWidget::qt_metacast(_clname);
}

int VSCVidEventSearch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void VSCVidEventSearch::SignalSectionClicked(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
