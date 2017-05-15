/****************************************************************************
** Meta object code from reading C++ file 'maininterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../maininterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'maininterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainInterface_t {
    QByteArrayData data[16];
    char stringdata0[210];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainInterface_t qt_meta_stringdata_MainInterface = {
    {
QT_MOC_LITERAL(0, 0, 13), // "MainInterface"
QT_MOC_LITERAL(1, 14, 10), // "PointInput"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 20), // "changeRectdimensions"
QT_MOC_LITERAL(4, 47, 6), // "length"
QT_MOC_LITERAL(5, 54, 5), // "width"
QT_MOC_LITERAL(6, 60, 22), // "changeSquaredimensions"
QT_MOC_LITERAL(7, 83, 18), // "changeCircleRadius"
QT_MOC_LITERAL(8, 102, 8), // "radiusIn"
QT_MOC_LITERAL(9, 111, 17), // "changeEllipseAxis"
QT_MOC_LITERAL(10, 129, 4), // "xRin"
QT_MOC_LITERAL(11, 134, 4), // "yRin"
QT_MOC_LITERAL(12, 139, 8), // "saveFile"
QT_MOC_LITERAL(13, 148, 18), // "upDateCurrentShape"
QT_MOC_LITERAL(14, 167, 36), // "on_ShapeTypeEdit_currentIndex..."
QT_MOC_LITERAL(15, 204, 5) // "index"

    },
    "MainInterface\0PointInput\0\0"
    "changeRectdimensions\0length\0width\0"
    "changeSquaredimensions\0changeCircleRadius\0"
    "radiusIn\0changeEllipseAxis\0xRin\0yRin\0"
    "saveFile\0upDateCurrentShape\0"
    "on_ShapeTypeEdit_currentIndexChanged\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    2,   55,    2, 0x09 /* Protected */,
       6,    1,   60,    2, 0x09 /* Protected */,
       7,    1,   63,    2, 0x09 /* Protected */,
       9,    2,   66,    2, 0x09 /* Protected */,
      12,    0,   71,    2, 0x08 /* Private */,
      13,    0,   72,    2, 0x08 /* Private */,
      14,    1,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    4,    5,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void, QMetaType::Double,    8,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,

       0        // eod
};

void MainInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainInterface *_t = static_cast<MainInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->PointInput(); break;
        case 1: _t->changeRectdimensions((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 2: _t->changeSquaredimensions((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->changeCircleRadius((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->changeEllipseAxis((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 5: _t->saveFile(); break;
        case 6: _t->upDateCurrentShape(); break;
        case 7: _t->on_ShapeTypeEdit_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainInterface::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainInterface::PointInput)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject MainInterface::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainInterface.data,
      qt_meta_data_MainInterface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainInterface.stringdata0))
        return static_cast<void*>(const_cast< MainInterface*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void MainInterface::PointInput()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
