/****************************************************************************
** Meta object code from reading C++ file 'i18n.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/modules/Ubuntu/Components/plugin/i18n.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'i18n.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UbuntuI18n_t {
    QByteArrayData data[15];
    char stringdata[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_UbuntuI18n_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_UbuntuI18n_t qt_meta_stringdata_UbuntuI18n = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 13),
QT_MOC_LITERAL(2, 25, 0),
QT_MOC_LITERAL(3, 26, 15),
QT_MOC_LITERAL(4, 42, 14),
QT_MOC_LITERAL(5, 57, 11),
QT_MOC_LITERAL(6, 69, 8),
QT_MOC_LITERAL(7, 78, 2),
QT_MOC_LITERAL(8, 81, 4),
QT_MOC_LITERAL(9, 86, 8),
QT_MOC_LITERAL(10, 95, 6),
QT_MOC_LITERAL(11, 102, 1),
QT_MOC_LITERAL(12, 104, 3),
QT_MOC_LITERAL(13, 108, 6),
QT_MOC_LITERAL(14, 115, 8)
    },
    "UbuntuI18n\0domainChanged\0\0languageChanged\0"
    "bindtextdomain\0domain_name\0dir_name\0"
    "tr\0text\0singular\0plural\0n\0dtr\0domain\0"
    "language\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UbuntuI18n[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       2,   80, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x05,
       3,    0,   50,    2, 0x05,

 // methods: name, argc, parameters, tag, flags
       4,    2,   51,    2, 0x02,
       7,    1,   56,    2, 0x02,
       7,    3,   59,    2, 0x02,
      12,    2,   66,    2, 0x02,
      12,    4,   71,    2, 0x02,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    6,
    QMetaType::QString, QMetaType::QString,    8,
    QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Int,    9,   10,   11,
    QMetaType::QString, QMetaType::QString, QMetaType::QString,   13,    8,
    QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Int,   13,    9,   10,   11,

 // properties: name, type, flags
      13, QMetaType::QString, 0x00495103,
      14, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void UbuntuI18n::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UbuntuI18n *_t = static_cast<UbuntuI18n *>(_o);
        switch (_id) {
        case 0: _t->domainChanged(); break;
        case 1: _t->languageChanged(); break;
        case 2: _t->bindtextdomain((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: { QString _r = _t->tr((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 4: { QString _r = _t->tr((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 5: { QString _r = _t->dtr((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 6: { QString _r = _t->dtr((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (UbuntuI18n::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UbuntuI18n::domainChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (UbuntuI18n::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UbuntuI18n::languageChanged)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject UbuntuI18n::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UbuntuI18n.data,
      qt_meta_data_UbuntuI18n,  qt_static_metacall, 0, 0}
};


const QMetaObject *UbuntuI18n::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UbuntuI18n::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UbuntuI18n.stringdata))
        return static_cast<void*>(const_cast< UbuntuI18n*>(this));
    return QObject::qt_metacast(_clname);
}

int UbuntuI18n::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = domain(); break;
        case 1: *reinterpret_cast< QString*>(_v) = language(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setDomain(*reinterpret_cast< QString*>(_v)); break;
        case 1: setLanguage(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void UbuntuI18n::domainChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void UbuntuI18n::languageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
