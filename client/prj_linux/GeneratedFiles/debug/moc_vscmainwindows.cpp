/****************************************************************************
** Meta object code from reading C++ file 'vscmainwindows.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/main/vscmainwindows.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vscmainwindows.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_VSCMainWindows_t {
    QByteArrayData data[15];
    char stringdata0[163];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VSCMainWindows_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VSCMainWindows_t qt_meta_stringdata_VSCMainWindows = {
    {
QT_MOC_LITERAL(0, 0, 14), // "VSCMainWindows"
QT_MOC_LITERAL(1, 15, 12), // "MainCloseTab"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 5), // "index"
QT_MOC_LITERAL(4, 35, 11), // "ShowVidLive"
QT_MOC_LITERAL(5, 47, 11), // "ShowVidConf"
QT_MOC_LITERAL(6, 59, 9), // "ShowVidPb"
QT_MOC_LITERAL(7, 69, 13), // "ShowDashBoard"
QT_MOC_LITERAL(8, 83, 16), // "ShowEventConsole"
QT_MOC_LITERAL(9, 100, 5), // "about"
QT_MOC_LITERAL(10, 106, 10), // "UserStatus"
QT_MOC_LITERAL(11, 117, 13), // "SetFullScreen"
QT_MOC_LITERAL(12, 131, 9), // "ShowAbout"
QT_MOC_LITERAL(13, 141, 9), // "ShowLogin"
QT_MOC_LITERAL(14, 151, 11) // "ExitOpenCVR"

    },
    "VSCMainWindows\0MainCloseTab\0\0index\0"
    "ShowVidLive\0ShowVidConf\0ShowVidPb\0"
    "ShowDashBoard\0ShowEventConsole\0about\0"
    "UserStatus\0SetFullScreen\0ShowAbout\0"
    "ShowLogin\0ExitOpenCVR"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VSCMainWindows[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x0a /* Public */,
       4,    0,   77,    2, 0x0a /* Public */,
       5,    0,   78,    2, 0x0a /* Public */,
       6,    0,   79,    2, 0x0a /* Public */,
       7,    0,   80,    2, 0x0a /* Public */,
       8,    0,   81,    2, 0x0a /* Public */,
       9,    0,   82,    2, 0x0a /* Public */,
      10,    0,   83,    2, 0x0a /* Public */,
      11,    0,   84,    2, 0x0a /* Public */,
      12,    0,   85,    2, 0x0a /* Public */,
      13,    0,   86,    2, 0x0a /* Public */,
      14,    0,   87,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void VSCMainWindows::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VSCMainWindows *_t = static_cast<VSCMainWindows *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->MainCloseTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->ShowVidLive(); break;
        case 2: _t->ShowVidConf(); break;
        case 3: _t->ShowVidPb(); break;
        case 4: _t->ShowDashBoard(); break;
        case 5: _t->ShowEventConsole(); break;
        case 6: _t->about(); break;
        case 7: _t->UserStatus(); break;
        case 8: _t->SetFullScreen(); break;
        case 9: _t->ShowAbout(); break;
        case 10: _t->ShowLogin(); break;
        case 11: _t->ExitOpenCVR(); break;
        default: ;
        }
    }
}

const QMetaObject VSCMainWindows::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_VSCMainWindows.data,
      qt_meta_data_VSCMainWindows,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VSCMainWindows::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VSCMainWindows::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VSCMainWindows.stringdata0))
        return static_cast<void*>(const_cast< VSCMainWindows*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int VSCMainWindows::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
