/****************************************************************************
** Meta object code from reading C++ file 'qquickmimedata.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/modules/Ubuntu/Components/plugin/qquickmimedata.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickmimedata.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QQuickMimeData_t {
    QByteArrayData data[16];
    char stringdata[151];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QQuickMimeData_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QQuickMimeData_t qt_meta_stringdata_QQuickMimeData = {
    {
QT_MOC_LITERAL(0, 0, 14),
QT_MOC_LITERAL(1, 15, 14),
QT_MOC_LITERAL(2, 30, 0),
QT_MOC_LITERAL(3, 31, 11),
QT_MOC_LITERAL(4, 43, 11),
QT_MOC_LITERAL(5, 55, 11),
QT_MOC_LITERAL(6, 67, 12),
QT_MOC_LITERAL(7, 80, 11),
QT_MOC_LITERAL(8, 92, 11),
QT_MOC_LITERAL(9, 104, 7),
QT_MOC_LITERAL(10, 112, 4),
QT_MOC_LITERAL(11, 117, 4),
QT_MOC_LITERAL(12, 122, 4),
QT_MOC_LITERAL(13, 127, 11),
QT_MOC_LITERAL(14, 139, 5),
QT_MOC_LITERAL(15, 145, 4)
    },
    "QQuickMimeData\0formatsChanged\0\0"
    "textChanged\0htmlChanged\0urlsChanged\0"
    "colorChanged\0typeChanged\0dataChanged\0"
    "formats\0text\0html\0urls\0QList<QUrl>\0"
    "color\0data\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickMimeData[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       6,   56, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x05,
       3,    0,   50,    2, 0x05,
       4,    0,   51,    2, 0x05,
       5,    0,   52,    2, 0x05,
       6,    0,   53,    2, 0x05,
       7,    0,   54,    2, 0x05,
       8,    0,   55,    2, 0x05,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       9, QMetaType::QStringList, 0x00495001,
      10, QMetaType::QString, 0x00495103,
      11, QMetaType::QString, 0x00495103,
      12, 0x80000000 | 13, 0x0049510b,
      14, QMetaType::QColor, 0x00495103,
      15, QMetaType::QVariant, 0x00495003,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       6,

       0        // eod
};

void QQuickMimeData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickMimeData *_t = static_cast<QQuickMimeData *>(_o);
        switch (_id) {
        case 0: _t->formatsChanged(); break;
        case 1: _t->textChanged(); break;
        case 2: _t->htmlChanged(); break;
        case 3: _t->urlsChanged(); break;
        case 4: _t->colorChanged(); break;
        case 5: _t->typeChanged(); break;
        case 6: _t->dataChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QQuickMimeData::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QQuickMimeData::formatsChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QQuickMimeData::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QQuickMimeData::textChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QQuickMimeData::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QQuickMimeData::htmlChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (QQuickMimeData::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QQuickMimeData::urlsChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (QQuickMimeData::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QQuickMimeData::colorChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (QQuickMimeData::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QQuickMimeData::typeChanged)) {
                *result = 5;
            }
        }
        {
            typedef void (QQuickMimeData::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QQuickMimeData::dataChanged)) {
                *result = 6;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QUrl> >(); break;
        }
    }

}

const QMetaObject QQuickMimeData::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickMimeData.data,
      qt_meta_data_QQuickMimeData,  qt_static_metacall, 0, 0}
};


const QMetaObject *QQuickMimeData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickMimeData::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickMimeData.stringdata))
        return static_cast<void*>(const_cast< QQuickMimeData*>(this));
    return QObject::qt_metacast(_clname);
}

int QQuickMimeData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 0: *reinterpret_cast< QStringList*>(_v) = formats(); break;
        case 1: *reinterpret_cast< QString*>(_v) = text(); break;
        case 2: *reinterpret_cast< QString*>(_v) = html(); break;
        case 3: *reinterpret_cast< QList<QUrl>*>(_v) = urls(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = color(); break;
        case 5: *reinterpret_cast< QVariant*>(_v) = mimeData(); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: setText(*reinterpret_cast< QString*>(_v)); break;
        case 2: setHtml(*reinterpret_cast< QString*>(_v)); break;
        case 3: setUrls(*reinterpret_cast< QList<QUrl>*>(_v)); break;
        case 4: setColor(*reinterpret_cast< QColor*>(_v)); break;
        case 5: setMimeData(*reinterpret_cast< QVariant*>(_v)); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQuickMimeData::formatsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QQuickMimeData::textChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QQuickMimeData::htmlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void QQuickMimeData::urlsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void QQuickMimeData::colorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void QQuickMimeData::typeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void QQuickMimeData::dataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}
QT_END_MOC_NAMESPACE
