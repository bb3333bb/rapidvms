/****************************************************************************
** Meta object code from reading C++ file 'vscvidlist.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/main/vscvidlist.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vscvidlist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_VSCVidList_t {
    QByteArrayData data[9];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VSCVidList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VSCVidList_t qt_meta_stringdata_VSCVidList = {
    {
QT_MOC_LITERAL(0, 0, 10), // "VSCVidList"
QT_MOC_LITERAL(1, 11, 18), // "SlotShowCameraTree"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 17), // "SlotShowGroupTree"
QT_MOC_LITERAL(4, 49, 16), // "SlotShowViewTree"
QT_MOC_LITERAL(5, 66, 16), // "SlotShowEmapTree"
QT_MOC_LITERAL(6, 83, 13), // "FilterChanged"
QT_MOC_LITERAL(7, 97, 4), // "text"
QT_MOC_LITERAL(8, 102, 12) // "FilterCancel"

    },
    "VSCVidList\0SlotShowCameraTree\0\0"
    "SlotShowGroupTree\0SlotShowViewTree\0"
    "SlotShowEmapTree\0FilterChanged\0text\0"
    "FilterCancel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VSCVidList[] = {

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
       6,    1,   48,    2, 0x0a /* Public */,
       8,    0,   51,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,

       0        // eod
};

void VSCVidList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VSCVidList *_t = static_cast<VSCVidList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SlotShowCameraTree(); break;
        case 1: _t->SlotShowGroupTree(); break;
        case 2: _t->SlotShowViewTree(); break;
        case 3: _t->SlotShowEmapTree(); break;
        case 4: _t->FilterChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->FilterCancel(); break;
        default: ;
        }
    }
}

const QMetaObject VSCVidList::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_VSCVidList.data,
      qt_meta_data_VSCVidList,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VSCVidList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VSCVidList::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VSCVidList.stringdata0))
        return static_cast<void*>(const_cast< VSCVidList*>(this));
    return QWidget::qt_metacast(_clname);
}

int VSCVidList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
