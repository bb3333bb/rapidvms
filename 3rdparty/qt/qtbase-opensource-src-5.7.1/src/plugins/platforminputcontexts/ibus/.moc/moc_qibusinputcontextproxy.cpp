/****************************************************************************
** Meta object code from reading C++ file 'qibusinputcontextproxy.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qibusinputcontextproxy.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qibusinputcontextproxy.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QIBusInputContextProxy_t {
    QByteArrayData data[59];
    char stringdata0[740];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QIBusInputContextProxy_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QIBusInputContextProxy_t qt_meta_stringdata_QIBusInputContextProxy = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QIBusInputContextProxy"
QT_MOC_LITERAL(1, 23, 10), // "CommitText"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 12), // "QDBusVariant"
QT_MOC_LITERAL(4, 48, 4), // "text"
QT_MOC_LITERAL(5, 53, 21), // "CursorDownLookupTable"
QT_MOC_LITERAL(6, 75, 19), // "CursorUpLookupTable"
QT_MOC_LITERAL(7, 95, 21), // "DeleteSurroundingText"
QT_MOC_LITERAL(8, 117, 6), // "offset"
QT_MOC_LITERAL(9, 124, 7), // "n_chars"
QT_MOC_LITERAL(10, 132, 8), // "Disabled"
QT_MOC_LITERAL(11, 141, 7), // "Enabled"
QT_MOC_LITERAL(12, 149, 15), // "ForwardKeyEvent"
QT_MOC_LITERAL(13, 165, 6), // "keyval"
QT_MOC_LITERAL(14, 172, 7), // "keycode"
QT_MOC_LITERAL(15, 180, 5), // "state"
QT_MOC_LITERAL(16, 186, 17), // "HideAuxiliaryText"
QT_MOC_LITERAL(17, 204, 15), // "HideLookupTable"
QT_MOC_LITERAL(18, 220, 15), // "HidePreeditText"
QT_MOC_LITERAL(19, 236, 19), // "PageDownLookupTable"
QT_MOC_LITERAL(20, 256, 17), // "PageUpLookupTable"
QT_MOC_LITERAL(21, 274, 18), // "RegisterProperties"
QT_MOC_LITERAL(22, 293, 5), // "props"
QT_MOC_LITERAL(23, 299, 22), // "RequireSurroundingText"
QT_MOC_LITERAL(24, 322, 17), // "ShowAuxiliaryText"
QT_MOC_LITERAL(25, 340, 15), // "ShowLookupTable"
QT_MOC_LITERAL(26, 356, 15), // "ShowPreeditText"
QT_MOC_LITERAL(27, 372, 19), // "UpdateAuxiliaryText"
QT_MOC_LITERAL(28, 392, 7), // "visible"
QT_MOC_LITERAL(29, 400, 17), // "UpdateLookupTable"
QT_MOC_LITERAL(30, 418, 5), // "table"
QT_MOC_LITERAL(31, 424, 17), // "UpdatePreeditText"
QT_MOC_LITERAL(32, 442, 10), // "cursor_pos"
QT_MOC_LITERAL(33, 453, 14), // "UpdateProperty"
QT_MOC_LITERAL(34, 468, 4), // "prop"
QT_MOC_LITERAL(35, 473, 7), // "Destroy"
QT_MOC_LITERAL(36, 481, 19), // "QDBusPendingReply<>"
QT_MOC_LITERAL(37, 501, 7), // "Disable"
QT_MOC_LITERAL(38, 509, 6), // "Enable"
QT_MOC_LITERAL(39, 516, 7), // "FocusIn"
QT_MOC_LITERAL(40, 524, 8), // "FocusOut"
QT_MOC_LITERAL(41, 533, 9), // "GetEngine"
QT_MOC_LITERAL(42, 543, 31), // "QDBusPendingReply<QDBusVariant>"
QT_MOC_LITERAL(43, 575, 9), // "IsEnabled"
QT_MOC_LITERAL(44, 585, 23), // "QDBusPendingReply<bool>"
QT_MOC_LITERAL(45, 609, 15), // "ProcessKeyEvent"
QT_MOC_LITERAL(46, 625, 16), // "PropertyActivate"
QT_MOC_LITERAL(47, 642, 4), // "name"
QT_MOC_LITERAL(48, 647, 5), // "Reset"
QT_MOC_LITERAL(49, 653, 15), // "SetCapabilities"
QT_MOC_LITERAL(50, 669, 4), // "caps"
QT_MOC_LITERAL(51, 674, 17), // "SetCursorLocation"
QT_MOC_LITERAL(52, 692, 1), // "x"
QT_MOC_LITERAL(53, 694, 1), // "y"
QT_MOC_LITERAL(54, 696, 1), // "w"
QT_MOC_LITERAL(55, 698, 1), // "h"
QT_MOC_LITERAL(56, 700, 9), // "SetEngine"
QT_MOC_LITERAL(57, 710, 18), // "SetSurroundingText"
QT_MOC_LITERAL(58, 729, 10) // "anchor_pos"

    },
    "QIBusInputContextProxy\0CommitText\0\0"
    "QDBusVariant\0text\0CursorDownLookupTable\0"
    "CursorUpLookupTable\0DeleteSurroundingText\0"
    "offset\0n_chars\0Disabled\0Enabled\0"
    "ForwardKeyEvent\0keyval\0keycode\0state\0"
    "HideAuxiliaryText\0HideLookupTable\0"
    "HidePreeditText\0PageDownLookupTable\0"
    "PageUpLookupTable\0RegisterProperties\0"
    "props\0RequireSurroundingText\0"
    "ShowAuxiliaryText\0ShowLookupTable\0"
    "ShowPreeditText\0UpdateAuxiliaryText\0"
    "visible\0UpdateLookupTable\0table\0"
    "UpdatePreeditText\0cursor_pos\0"
    "UpdateProperty\0prop\0Destroy\0"
    "QDBusPendingReply<>\0Disable\0Enable\0"
    "FocusIn\0FocusOut\0GetEngine\0"
    "QDBusPendingReply<QDBusVariant>\0"
    "IsEnabled\0QDBusPendingReply<bool>\0"
    "ProcessKeyEvent\0PropertyActivate\0name\0"
    "Reset\0SetCapabilities\0caps\0SetCursorLocation\0"
    "x\0y\0w\0h\0SetEngine\0SetSurroundingText\0"
    "anchor_pos"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QIBusInputContextProxy[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      35,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      21,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  189,    2, 0x06 /* Public */,
       5,    0,  192,    2, 0x06 /* Public */,
       6,    0,  193,    2, 0x06 /* Public */,
       7,    2,  194,    2, 0x06 /* Public */,
      10,    0,  199,    2, 0x06 /* Public */,
      11,    0,  200,    2, 0x06 /* Public */,
      12,    3,  201,    2, 0x06 /* Public */,
      16,    0,  208,    2, 0x06 /* Public */,
      17,    0,  209,    2, 0x06 /* Public */,
      18,    0,  210,    2, 0x06 /* Public */,
      19,    0,  211,    2, 0x06 /* Public */,
      20,    0,  212,    2, 0x06 /* Public */,
      21,    1,  213,    2, 0x06 /* Public */,
      23,    0,  216,    2, 0x06 /* Public */,
      24,    0,  217,    2, 0x06 /* Public */,
      25,    0,  218,    2, 0x06 /* Public */,
      26,    0,  219,    2, 0x06 /* Public */,
      27,    2,  220,    2, 0x06 /* Public */,
      29,    2,  225,    2, 0x06 /* Public */,
      31,    3,  230,    2, 0x06 /* Public */,
      33,    1,  237,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      35,    0,  240,    2, 0x0a /* Public */,
      37,    0,  241,    2, 0x0a /* Public */,
      38,    0,  242,    2, 0x0a /* Public */,
      39,    0,  243,    2, 0x0a /* Public */,
      40,    0,  244,    2, 0x0a /* Public */,
      41,    0,  245,    2, 0x0a /* Public */,
      43,    0,  246,    2, 0x0a /* Public */,
      45,    3,  247,    2, 0x0a /* Public */,
      46,    2,  254,    2, 0x0a /* Public */,
      48,    0,  259,    2, 0x0a /* Public */,
      49,    1,  260,    2, 0x0a /* Public */,
      51,    4,  263,    2, 0x0a /* Public */,
      56,    1,  272,    2, 0x0a /* Public */,
      57,    3,  275,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::UInt,    8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt,   13,   14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,   28,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,   30,   28,
    QMetaType::Void, 0x80000000 | 3, QMetaType::UInt, QMetaType::Bool,    4,   32,   28,
    QMetaType::Void, 0x80000000 | 3,   34,

 // slots: parameters
    0x80000000 | 36,
    0x80000000 | 36,
    0x80000000 | 36,
    0x80000000 | 36,
    0x80000000 | 36,
    0x80000000 | 42,
    0x80000000 | 44,
    0x80000000 | 44, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt,   13,   14,   15,
    0x80000000 | 36, QMetaType::QString, QMetaType::Int,   47,   15,
    0x80000000 | 36,
    0x80000000 | 36, QMetaType::UInt,   50,
    0x80000000 | 36, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   52,   53,   54,   55,
    0x80000000 | 36, QMetaType::QString,   47,
    0x80000000 | 36, 0x80000000 | 3, QMetaType::UInt, QMetaType::UInt,    4,   32,   58,

       0        // eod
};

void QIBusInputContextProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QIBusInputContextProxy *_t = static_cast<QIBusInputContextProxy *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CommitText((*reinterpret_cast< const QDBusVariant(*)>(_a[1]))); break;
        case 1: _t->CursorDownLookupTable(); break;
        case 2: _t->CursorUpLookupTable(); break;
        case 3: _t->DeleteSurroundingText((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 4: _t->Disabled(); break;
        case 5: _t->Enabled(); break;
        case 6: _t->ForwardKeyEvent((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 7: _t->HideAuxiliaryText(); break;
        case 8: _t->HideLookupTable(); break;
        case 9: _t->HidePreeditText(); break;
        case 10: _t->PageDownLookupTable(); break;
        case 11: _t->PageUpLookupTable(); break;
        case 12: _t->RegisterProperties((*reinterpret_cast< const QDBusVariant(*)>(_a[1]))); break;
        case 13: _t->RequireSurroundingText(); break;
        case 14: _t->ShowAuxiliaryText(); break;
        case 15: _t->ShowLookupTable(); break;
        case 16: _t->ShowPreeditText(); break;
        case 17: _t->UpdateAuxiliaryText((*reinterpret_cast< const QDBusVariant(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 18: _t->UpdateLookupTable((*reinterpret_cast< const QDBusVariant(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 19: _t->UpdatePreeditText((*reinterpret_cast< const QDBusVariant(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 20: _t->UpdateProperty((*reinterpret_cast< const QDBusVariant(*)>(_a[1]))); break;
        case 21: { QDBusPendingReply<> _r = _t->Destroy();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 22: { QDBusPendingReply<> _r = _t->Disable();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 23: { QDBusPendingReply<> _r = _t->Enable();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 24: { QDBusPendingReply<> _r = _t->FocusIn();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 25: { QDBusPendingReply<> _r = _t->FocusOut();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 26: { QDBusPendingReply<QDBusVariant> _r = _t->GetEngine();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QDBusVariant>*>(_a[0]) = _r; }  break;
        case 27: { QDBusPendingReply<bool> _r = _t->IsEnabled();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<bool>*>(_a[0]) = _r; }  break;
        case 28: { QDBusPendingReply<bool> _r = _t->ProcessKeyEvent((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<bool>*>(_a[0]) = _r; }  break;
        case 29: { QDBusPendingReply<> _r = _t->PropertyActivate((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 30: { QDBusPendingReply<> _r = _t->Reset();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 31: { QDBusPendingReply<> _r = _t->SetCapabilities((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 32: { QDBusPendingReply<> _r = _t->SetCursorLocation((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 33: { QDBusPendingReply<> _r = _t->SetEngine((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 34: { QDBusPendingReply<> _r = _t->SetSurroundingText((*reinterpret_cast< const QDBusVariant(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
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
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusVariant >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusVariant >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusVariant >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusVariant >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusVariant >(); break;
            }
            break;
        case 34:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusVariant >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QIBusInputContextProxy::*_t)(const QDBusVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QIBusInputContextProxy::CommitText)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QIBusInputContextProxy::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QIBusInputContextProxy::CursorDownLookupTable)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QIBusInputContextProxy::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QIBusInputContextProxy::CursorUpLookupTable)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QIBusInputContextProxy::*_t)(int , uint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QIBusInputContextProxy::DeleteSurroundingText)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QIBusInputContextProxy::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QIBusInputContextProxy::Disabled)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QIBusInputContextProxy::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QIBusInputContextProxy::Enabled)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QIBusInputContextProxy::*_t)(uint , uint , uint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QIBusInputContextProxy::ForwardKeyEvent)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QIBusInputContextProxy::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QIBusInputContextProxy::HideAuxiliaryText)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QIBusInputContextProxy::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QIBusInputContextProxy::HideLookupTable)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (QIBusInputContextProxy::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QIBusInputContextProxy::HidePreeditText)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (QIBusInputContextProxy::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QIBusInputContextProxy::PageDownLookupTable)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (QIBusInputContextProxy::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QIBusInputContextProxy::PageUpLookupTable)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (QIBusInputContextProxy::*_t)(const QDBusVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QIBusInputContextProxy::RegisterProperties)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (QIBusInputContextProxy::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QIBusInputContextProxy::RequireSurroundingText)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (QIBusInputContextProxy::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QIBusInputContextProxy::ShowAuxiliaryText)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (QIBusInputContextProxy::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QIBusInputContextProxy::ShowLookupTable)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (QIBusInputContextProxy::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QIBusInputContextProxy::ShowPreeditText)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (QIBusInputContextProxy::*_t)(const QDBusVariant & , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QIBusInputContextProxy::UpdateAuxiliaryText)) {
                *result = 17;
                return;
            }
        }
        {
            typedef void (QIBusInputContextProxy::*_t)(const QDBusVariant & , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QIBusInputContextProxy::UpdateLookupTable)) {
                *result = 18;
                return;
            }
        }
        {
            typedef void (QIBusInputContextProxy::*_t)(const QDBusVariant & , uint , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QIBusInputContextProxy::UpdatePreeditText)) {
                *result = 19;
                return;
            }
        }
        {
            typedef void (QIBusInputContextProxy::*_t)(const QDBusVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QIBusInputContextProxy::UpdateProperty)) {
                *result = 20;
                return;
            }
        }
    }
}

const QMetaObject QIBusInputContextProxy::staticMetaObject = {
    { &QDBusAbstractInterface::staticMetaObject, qt_meta_stringdata_QIBusInputContextProxy.data,
      qt_meta_data_QIBusInputContextProxy,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QIBusInputContextProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QIBusInputContextProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QIBusInputContextProxy.stringdata0))
        return static_cast<void*>(const_cast< QIBusInputContextProxy*>(this));
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int QIBusInputContextProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    }
    return _id;
}

// SIGNAL 0
void QIBusInputContextProxy::CommitText(const QDBusVariant & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QIBusInputContextProxy::CursorDownLookupTable()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void QIBusInputContextProxy::CursorUpLookupTable()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void QIBusInputContextProxy::DeleteSurroundingText(int _t1, uint _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QIBusInputContextProxy::Disabled()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void QIBusInputContextProxy::Enabled()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void QIBusInputContextProxy::ForwardKeyEvent(uint _t1, uint _t2, uint _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QIBusInputContextProxy::HideAuxiliaryText()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}

// SIGNAL 8
void QIBusInputContextProxy::HideLookupTable()
{
    QMetaObject::activate(this, &staticMetaObject, 8, Q_NULLPTR);
}

// SIGNAL 9
void QIBusInputContextProxy::HidePreeditText()
{
    QMetaObject::activate(this, &staticMetaObject, 9, Q_NULLPTR);
}

// SIGNAL 10
void QIBusInputContextProxy::PageDownLookupTable()
{
    QMetaObject::activate(this, &staticMetaObject, 10, Q_NULLPTR);
}

// SIGNAL 11
void QIBusInputContextProxy::PageUpLookupTable()
{
    QMetaObject::activate(this, &staticMetaObject, 11, Q_NULLPTR);
}

// SIGNAL 12
void QIBusInputContextProxy::RegisterProperties(const QDBusVariant & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void QIBusInputContextProxy::RequireSurroundingText()
{
    QMetaObject::activate(this, &staticMetaObject, 13, Q_NULLPTR);
}

// SIGNAL 14
void QIBusInputContextProxy::ShowAuxiliaryText()
{
    QMetaObject::activate(this, &staticMetaObject, 14, Q_NULLPTR);
}

// SIGNAL 15
void QIBusInputContextProxy::ShowLookupTable()
{
    QMetaObject::activate(this, &staticMetaObject, 15, Q_NULLPTR);
}

// SIGNAL 16
void QIBusInputContextProxy::ShowPreeditText()
{
    QMetaObject::activate(this, &staticMetaObject, 16, Q_NULLPTR);
}

// SIGNAL 17
void QIBusInputContextProxy::UpdateAuxiliaryText(const QDBusVariant & _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void QIBusInputContextProxy::UpdateLookupTable(const QDBusVariant & _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void QIBusInputContextProxy::UpdatePreeditText(const QDBusVariant & _t1, uint _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void QIBusInputContextProxy::UpdateProperty(const QDBusVariant & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}
QT_END_MOC_NAMESPACE
