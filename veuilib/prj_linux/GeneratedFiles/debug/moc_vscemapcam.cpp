/****************************************************************************
** Meta object code from reading C++ file 'vscemapcam.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/emap/vscemapcam.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vscemapcam.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_VSCEmapCam_t {
    QByteArrayData data[11];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VSCEmapCam_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VSCEmapCam_t qt_meta_stringdata_VSCEmapCam = {
    {
QT_MOC_LITERAL(0, 0, 10), // "VSCEmapCam"
QT_MOC_LITERAL(1, 11, 11), // "signalFocus"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 10), // "EmapCamDel"
QT_MOC_LITERAL(4, 35, 11), // "std::string"
QT_MOC_LITERAL(5, 47, 6), // "strCam"
QT_MOC_LITERAL(6, 54, 9), // "PlayVideo"
QT_MOC_LITERAL(7, 64, 13), // "PlaybackVideo"
QT_MOC_LITERAL(8, 78, 10), // "EmapDelete"
QT_MOC_LITERAL(9, 89, 8), // "DragEmap"
QT_MOC_LITERAL(10, 98, 9) // "showAlarm"

    },
    "VSCEmapCam\0signalFocus\0\0EmapCamDel\0"
    "std::string\0strCam\0PlayVideo\0PlaybackVideo\0"
    "EmapDelete\0DragEmap\0showAlarm"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VSCEmapCam[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    1,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   53,    2, 0x0a /* Public */,
       7,    0,   54,    2, 0x0a /* Public */,
       8,    0,   55,    2, 0x0a /* Public */,
       9,    0,   56,    2, 0x0a /* Public */,
      10,    0,   57,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void VSCEmapCam::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VSCEmapCam *_t = static_cast<VSCEmapCam *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalFocus(); break;
        case 1: _t->EmapCamDel((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 2: _t->PlayVideo(); break;
        case 3: _t->PlaybackVideo(); break;
        case 4: _t->EmapDelete(); break;
        case 5: _t->DragEmap(); break;
        case 6: _t->showAlarm(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (VSCEmapCam::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VSCEmapCam::signalFocus)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (VSCEmapCam::*_t)(std::string );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VSCEmapCam::EmapCamDel)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject VSCEmapCam::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_VSCEmapCam.data,
      qt_meta_data_VSCEmapCam,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VSCEmapCam::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VSCEmapCam::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VSCEmapCam.stringdata0))
        return static_cast<void*>(const_cast< VSCEmapCam*>(this));
    return QWidget::qt_metacast(_clname);
}

int VSCEmapCam::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void VSCEmapCam::signalFocus()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void VSCEmapCam::EmapCamDel(std::string _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
