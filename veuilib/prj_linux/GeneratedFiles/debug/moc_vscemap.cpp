/****************************************************************************
** Meta object code from reading C++ file 'vscemap.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/emap/vscemap.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vscemap.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_VSCEMap_t {
    QByteArrayData data[15];
    char stringdata0[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VSCEMap_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VSCEMap_t qt_meta_stringdata_VSCEMap = {
    {
QT_MOC_LITERAL(0, 0, 7), // "VSCEMap"
QT_MOC_LITERAL(1, 8, 14), // "LoadEmapAction"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 4), // "Help"
QT_MOC_LITERAL(4, 29, 16), // "ResizeEventTimer"
QT_MOC_LITERAL(5, 46, 9), // "delCamera"
QT_MOC_LITERAL(6, 56, 11), // "std::string"
QT_MOC_LITERAL(7, 68, 15), // "FloatingClicked"
QT_MOC_LITERAL(8, 84, 13), // "TabbedClicked"
QT_MOC_LITERAL(9, 98, 12), // "showDisplay1"
QT_MOC_LITERAL(10, 111, 12), // "showDisplay2"
QT_MOC_LITERAL(11, 124, 12), // "showDisplay3"
QT_MOC_LITERAL(12, 137, 12), // "showDisplay4"
QT_MOC_LITERAL(13, 150, 18), // "ShowDisplayClicked"
QT_MOC_LITERAL(14, 169, 3) // "nId"

    },
    "VSCEMap\0LoadEmapAction\0\0Help\0"
    "ResizeEventTimer\0delCamera\0std::string\0"
    "FloatingClicked\0TabbedClicked\0"
    "showDisplay1\0showDisplay2\0showDisplay3\0"
    "showDisplay4\0ShowDisplayClicked\0nId"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VSCEMap[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a /* Public */,
       3,    0,   70,    2, 0x0a /* Public */,
       4,    0,   71,    2, 0x0a /* Public */,
       5,    1,   72,    2, 0x0a /* Public */,
       7,    0,   75,    2, 0x0a /* Public */,
       8,    0,   76,    2, 0x0a /* Public */,
       9,    0,   77,    2, 0x0a /* Public */,
      10,    0,   78,    2, 0x0a /* Public */,
      11,    0,   79,    2, 0x0a /* Public */,
      12,    0,   80,    2, 0x0a /* Public */,
      13,    1,   81,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,

       0        // eod
};

void VSCEMap::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VSCEMap *_t = static_cast<VSCEMap *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->LoadEmapAction(); break;
        case 1: _t->Help(); break;
        case 2: _t->ResizeEventTimer(); break;
        case 3: _t->delCamera((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 4: _t->FloatingClicked(); break;
        case 5: _t->TabbedClicked(); break;
        case 6: _t->showDisplay1(); break;
        case 7: _t->showDisplay2(); break;
        case 8: _t->showDisplay3(); break;
        case 9: _t->showDisplay4(); break;
        case 10: _t->ShowDisplayClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject VSCEMap::staticMetaObject = {
    { &VEMap::staticMetaObject, qt_meta_stringdata_VSCEMap.data,
      qt_meta_data_VSCEMap,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VSCEMap::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VSCEMap::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VSCEMap.stringdata0))
        return static_cast<void*>(const_cast< VSCEMap*>(this));
    return VEMap::qt_metacast(_clname);
}

int VSCEMap::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VEMap::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
