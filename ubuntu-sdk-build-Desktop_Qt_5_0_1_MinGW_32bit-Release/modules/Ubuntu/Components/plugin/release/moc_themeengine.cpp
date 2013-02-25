/****************************************************************************
** Meta object code from reading C++ file 'themeengine.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/modules/Ubuntu/Components/plugin/themeengine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'themeengine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ThemeEngine_t {
    QByteArrayData data[10];
    char stringdata[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ThemeEngine_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ThemeEngine_t qt_meta_stringdata_ThemeEngine = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 12),
QT_MOC_LITERAL(2, 25, 0),
QT_MOC_LITERAL(3, 26, 12),
QT_MOC_LITERAL(4, 39, 9),
QT_MOC_LITERAL(5, 49, 9),
QT_MOC_LITERAL(6, 59, 14),
QT_MOC_LITERAL(7, 74, 14),
QT_MOC_LITERAL(8, 89, 5),
QT_MOC_LITERAL(9, 95, 12)
    },
    "ThemeEngine\0errorChanged\0\0themeChanged\0"
    "loadTheme\0themeFile\0_q_updateTheme\0"
    "_q_reloadTheme\0error\0currentTheme\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ThemeEngine[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       2,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x05,
       3,    0,   40,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       4,    1,   41,    2, 0x0a,
       6,    0,   44,    2, 0x08,
       7,    0,   45,    2, 0x08,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Bool, QMetaType::QUrl,    5,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       8, QMetaType::QString, 0x00495005,
       9, QMetaType::QString, 0x00495001,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void ThemeEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ThemeEngine *_t = static_cast<ThemeEngine *>(_o);
        switch (_id) {
        case 0: _t->errorChanged(); break;
        case 1: _t->themeChanged(); break;
        case 2: { bool _r = _t->loadTheme((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: _t->d_func()->_q_updateTheme(); break;
        case 4: _t->d_func()->_q_reloadTheme(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ThemeEngine::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ThemeEngine::errorChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (ThemeEngine::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ThemeEngine::themeChanged)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject ThemeEngine::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ThemeEngine.data,
      qt_meta_data_ThemeEngine,  qt_static_metacall, 0, 0}
};


const QMetaObject *ThemeEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ThemeEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ThemeEngine.stringdata))
        return static_cast<void*>(const_cast< ThemeEngine*>(this));
    return QObject::qt_metacast(_clname);
}

int ThemeEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = error(); break;
        case 1: *reinterpret_cast< QString*>(_v) = theme(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        switch (_id) {
        case 0: resetError(); break;
        }
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
void ThemeEngine::errorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void ThemeEngine::themeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
