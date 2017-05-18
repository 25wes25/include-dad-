/****************************************************************************
** Meta object code from reading C++ file 'maininterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../maininterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'maininterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainInterface_t {
    QByteArrayData data[27];
    char stringdata0[428];
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
QT_MOC_LITERAL(3, 26, 6), // "Logout"
QT_MOC_LITERAL(4, 33, 20), // "changeRectdimensions"
QT_MOC_LITERAL(5, 54, 6), // "length"
QT_MOC_LITERAL(6, 61, 5), // "width"
QT_MOC_LITERAL(7, 67, 22), // "changeSquaredimensions"
QT_MOC_LITERAL(8, 90, 18), // "changeCircleRadius"
QT_MOC_LITERAL(9, 109, 8), // "radiusIn"
QT_MOC_LITERAL(10, 118, 17), // "changeEllipseAxis"
QT_MOC_LITERAL(11, 136, 4), // "xRin"
QT_MOC_LITERAL(12, 141, 4), // "yRin"
QT_MOC_LITERAL(13, 146, 8), // "saveFile"
QT_MOC_LITERAL(14, 155, 18), // "upDateCurrentShape"
QT_MOC_LITERAL(15, 174, 4), // "Exit"
QT_MOC_LITERAL(16, 179, 36), // "on_ShapeTypeEdit_currentIndex..."
QT_MOC_LITERAL(17, 216, 5), // "index"
QT_MOC_LITERAL(18, 222, 29), // "OnHorizontaAxisEllipseChanged"
QT_MOC_LITERAL(19, 252, 23), // "MaintenanceNotesClicked"
QT_MOC_LITERAL(20, 276, 19), // "TestimonialsClicked"
QT_MOC_LITERAL(21, 296, 14), // "ContactClicked"
QT_MOC_LITERAL(22, 311, 11), // "HelpClicked"
QT_MOC_LITERAL(23, 323, 24), // "on_button_SortID_clicked"
QT_MOC_LITERAL(24, 348, 26), // "on_button_SortArea_clicked"
QT_MOC_LITERAL(25, 375, 31), // "on_button_SortPerimeter_clicked"
QT_MOC_LITERAL(26, 407, 20) // "on_AddObject_clicked"

    },
    "MainInterface\0PointInput\0\0Logout\0"
    "changeRectdimensions\0length\0width\0"
    "changeSquaredimensions\0changeCircleRadius\0"
    "radiusIn\0changeEllipseAxis\0xRin\0yRin\0"
    "saveFile\0upDateCurrentShape\0Exit\0"
    "on_ShapeTypeEdit_currentIndexChanged\0"
    "index\0OnHorizontaAxisEllipseChanged\0"
    "MaintenanceNotesClicked\0TestimonialsClicked\0"
    "ContactClicked\0HelpClicked\0"
    "on_button_SortID_clicked\0"
    "on_button_SortArea_clicked\0"
    "on_button_SortPerimeter_clicked\0"
    "on_AddObject_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  109,    2, 0x06 /* Public */,
       3,    0,  110,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    2,  111,    2, 0x09 /* Protected */,
       7,    1,  116,    2, 0x09 /* Protected */,
       8,    1,  119,    2, 0x09 /* Protected */,
      10,    2,  122,    2, 0x09 /* Protected */,
      13,    0,  127,    2, 0x08 /* Private */,
      14,    0,  128,    2, 0x08 /* Private */,
      15,    0,  129,    2, 0x08 /* Private */,
      16,    1,  130,    2, 0x08 /* Private */,
      18,    0,  133,    2, 0x08 /* Private */,
      19,    0,  134,    2, 0x08 /* Private */,
      20,    0,  135,    2, 0x08 /* Private */,
      21,    0,  136,    2, 0x08 /* Private */,
      22,    0,  137,    2, 0x08 /* Private */,
      23,    0,  138,    2, 0x08 /* Private */,
      24,    0,  139,    2, 0x08 /* Private */,
      25,    0,  140,    2, 0x08 /* Private */,
      26,    0,  141,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    5,    6,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   17,
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

void MainInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainInterface *_t = static_cast<MainInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->PointInput(); break;
        case 1: _t->Logout(); break;
        case 2: _t->changeRectdimensions((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 3: _t->changeSquaredimensions((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->changeCircleRadius((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->changeEllipseAxis((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 6: _t->saveFile(); break;
        case 7: _t->upDateCurrentShape(); break;
        case 8: _t->Exit(); break;
        case 9: _t->on_ShapeTypeEdit_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->OnHorizontaAxisEllipseChanged(); break;
        case 11: _t->MaintenanceNotesClicked(); break;
        case 12: _t->TestimonialsClicked(); break;
        case 13: _t->ContactClicked(); break;
        case 14: _t->HelpClicked(); break;
        case 15: _t->on_button_SortID_clicked(); break;
        case 16: _t->on_button_SortArea_clicked(); break;
        case 17: _t->on_button_SortPerimeter_clicked(); break;
        case 18: _t->on_AddObject_clicked(); break;
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
        {
            typedef void (MainInterface::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainInterface::Logout)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject MainInterface::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainInterface.data,
      qt_meta_data_MainInterface,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
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
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void MainInterface::PointInput()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void MainInterface::Logout()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
