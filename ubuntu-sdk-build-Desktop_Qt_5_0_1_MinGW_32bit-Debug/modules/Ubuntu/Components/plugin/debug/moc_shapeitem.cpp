/****************************************************************************
** Meta object code from reading C++ file 'shapeitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/modules/Ubuntu/Components/plugin/shapeitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'shapeitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ShapeItem_t {
    QByteArrayData data[28];
    char stringdata[384];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ShapeItem_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ShapeItem_t qt_meta_stringdata_ShapeItem = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 16),
QT_MOC_LITERAL(2, 27, 0),
QT_MOC_LITERAL(3, 28, 20),
QT_MOC_LITERAL(4, 49, 13),
QT_MOC_LITERAL(5, 63, 13),
QT_MOC_LITERAL(6, 77, 12),
QT_MOC_LITERAL(7, 90, 16),
QT_MOC_LITERAL(8, 107, 26),
QT_MOC_LITERAL(9, 134, 24),
QT_MOC_LITERAL(10, 159, 19),
QT_MOC_LITERAL(11, 179, 15),
QT_MOC_LITERAL(12, 195, 9),
QT_MOC_LITERAL(13, 205, 13),
QT_MOC_LITERAL(14, 219, 6),
QT_MOC_LITERAL(15, 226, 5),
QT_MOC_LITERAL(16, 232, 9),
QT_MOC_LITERAL(17, 242, 19),
QT_MOC_LITERAL(18, 262, 10),
QT_MOC_LITERAL(19, 273, 17),
QT_MOC_LITERAL(20, 291, 10),
QT_MOC_LITERAL(21, 302, 12),
QT_MOC_LITERAL(22, 315, 9),
QT_MOC_LITERAL(23, 325, 12),
QT_MOC_LITERAL(24, 338, 10),
QT_MOC_LITERAL(25, 349, 8),
QT_MOC_LITERAL(26, 358, 12),
QT_MOC_LITERAL(27, 371, 11)
    },
    "ShapeItem\0baseColorChanged\0\0"
    "gradientColorChanged\0radiusChanged\0"
    "borderChanged\0imageChanged\0stretchedChanged\0"
    "horizontalAlignmentChanged\0"
    "verticalAlignmentChanged\0borderSourceChanged\0"
    "gridUnitChanged\0baseColor\0gradientColor\0"
    "radius\0image\0stretched\0horizontalAlignment\0"
    "HAlignment\0verticalAlignment\0VAlignment\0"
    "borderSource\0AlignLeft\0AlignHCenter\0"
    "AlignRight\0AlignTop\0AlignVCenter\0"
    "AlignBottom\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ShapeItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       8,   74, // properties
       2,  106, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x05,
       3,    0,   65,    2, 0x05,
       4,    0,   66,    2, 0x05,
       5,    0,   67,    2, 0x05,
       6,    0,   68,    2, 0x05,
       7,    0,   69,    2, 0x05,
       8,    0,   70,    2, 0x05,
       9,    0,   71,    2, 0x05,
      10,    0,   72,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
      11,    0,   73,    2, 0x0a,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
      12, QMetaType::QColor, 0x00495103,
      13, QMetaType::QColor, 0x00495103,
      14, QMetaType::QString, 0x00495103,
      15, QMetaType::QVariant, 0x00495103,
      16, QMetaType::Bool, 0x00495103,
      17, 0x80000000 | 18, 0x0049510b,
      19, 0x80000000 | 20, 0x0049510b,
      21, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       4,
       5,
       6,
       7,
       8,

 // enums: name, flags, count, data
      18, 0x0,    3,  114,
      20, 0x0,    3,  120,

 // enum data: key, value
      22, uint(ShapeItem::AlignLeft),
      23, uint(ShapeItem::AlignHCenter),
      24, uint(ShapeItem::AlignRight),
      25, uint(ShapeItem::AlignTop),
      26, uint(ShapeItem::AlignVCenter),
      27, uint(ShapeItem::AlignBottom),

       0        // eod
};

void ShapeItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ShapeItem *_t = static_cast<ShapeItem *>(_o);
        switch (_id) {
        case 0: _t->baseColorChanged(); break;
        case 1: _t->gradientColorChanged(); break;
        case 2: _t->radiusChanged(); break;
        case 3: _t->borderChanged(); break;
        case 4: _t->imageChanged(); break;
        case 5: _t->stretchedChanged(); break;
        case 6: _t->horizontalAlignmentChanged(); break;
        case 7: _t->verticalAlignmentChanged(); break;
        case 8: _t->borderSourceChanged(); break;
        case 9: _t->gridUnitChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ShapeItem::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ShapeItem::baseColorChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (ShapeItem::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ShapeItem::gradientColorChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (ShapeItem::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ShapeItem::radiusChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (ShapeItem::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ShapeItem::borderChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (ShapeItem::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ShapeItem::imageChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (ShapeItem::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ShapeItem::stretchedChanged)) {
                *result = 5;
            }
        }
        {
            typedef void (ShapeItem::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ShapeItem::horizontalAlignmentChanged)) {
                *result = 6;
            }
        }
        {
            typedef void (ShapeItem::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ShapeItem::verticalAlignmentChanged)) {
                *result = 7;
            }
        }
        {
            typedef void (ShapeItem::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ShapeItem::borderSourceChanged)) {
                *result = 8;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ShapeItem::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_ShapeItem.data,
      qt_meta_data_ShapeItem,  qt_static_metacall, 0, 0}
};


const QMetaObject *ShapeItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ShapeItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ShapeItem.stringdata))
        return static_cast<void*>(const_cast< ShapeItem*>(this));
    return QQuickItem::qt_metacast(_clname);
}

int ShapeItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = baseColor(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = gradientColor(); break;
        case 2: *reinterpret_cast< QString*>(_v) = radius(); break;
        case 3: *reinterpret_cast< QVariant*>(_v) = image(); break;
        case 4: *reinterpret_cast< bool*>(_v) = stretched(); break;
        case 5: *reinterpret_cast< HAlignment*>(_v) = horizontalAlignment(); break;
        case 6: *reinterpret_cast< VAlignment*>(_v) = verticalAlignment(); break;
        case 7: *reinterpret_cast< QString*>(_v) = borderSource(); break;
        }
        _id -= 8;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setBaseColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: setGradientColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: setRadius(*reinterpret_cast< QString*>(_v)); break;
        case 3: setImage(*reinterpret_cast< QVariant*>(_v)); break;
        case 4: setStretched(*reinterpret_cast< bool*>(_v)); break;
        case 5: setHorizontalAlignment(*reinterpret_cast< HAlignment*>(_v)); break;
        case 6: setVerticalAlignment(*reinterpret_cast< VAlignment*>(_v)); break;
        case 7: setBorderSource(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 8;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ShapeItem::baseColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void ShapeItem::gradientColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void ShapeItem::radiusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void ShapeItem::borderChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void ShapeItem::imageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void ShapeItem::stretchedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void ShapeItem::horizontalAlignmentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void ShapeItem::verticalAlignmentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void ShapeItem::borderSourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}
struct qt_meta_stringdata_ShapeNode_t {
    QByteArrayData data[1];
    char stringdata[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ShapeNode_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ShapeNode_t qt_meta_stringdata_ShapeNode = {
    {
QT_MOC_LITERAL(0, 0, 9)
    },
    "ShapeNode\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ShapeNode[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ShapeNode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject ShapeNode::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ShapeNode.data,
      qt_meta_data_ShapeNode,  qt_static_metacall, 0, 0}
};


const QMetaObject *ShapeNode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ShapeNode::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ShapeNode.stringdata))
        return static_cast<void*>(const_cast< ShapeNode*>(this));
    if (!strcmp(_clname, "QSGGeometryNode"))
        return static_cast< QSGGeometryNode*>(const_cast< ShapeNode*>(this));
    return QObject::qt_metacast(_clname);
}

int ShapeNode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
