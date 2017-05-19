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
    QByteArrayData data[21];
    char stringdata0[371];
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
QT_MOC_LITERAL(4, 33, 8), // "saveFile"
QT_MOC_LITERAL(5, 42, 18), // "upDateCurrentShape"
QT_MOC_LITERAL(6, 61, 4), // "Exit"
QT_MOC_LITERAL(7, 66, 36), // "on_ShapeTypeEdit_currentIndex..."
QT_MOC_LITERAL(8, 103, 5), // "index"
QT_MOC_LITERAL(9, 109, 29), // "OnHorizontaAxisEllipseChanged"
QT_MOC_LITERAL(10, 139, 17), // "FullScreenClicked"
QT_MOC_LITERAL(11, 157, 16), // "MaximizedClicked"
QT_MOC_LITERAL(12, 174, 23), // "MaintenanceNotesClicked"
QT_MOC_LITERAL(13, 198, 19), // "TestimonialsClicked"
QT_MOC_LITERAL(14, 218, 14), // "ContactClicked"
QT_MOC_LITERAL(15, 233, 11), // "HelpClicked"
QT_MOC_LITERAL(16, 245, 24), // "on_button_SortID_clicked"
QT_MOC_LITERAL(17, 270, 26), // "on_button_SortArea_clicked"
QT_MOC_LITERAL(18, 297, 31), // "on_button_SortPerimeter_clicked"
QT_MOC_LITERAL(19, 329, 20), // "on_AddObject_clicked"
QT_MOC_LITERAL(20, 350, 20) // "on_DeleteObj_clicked"

    },
    "MainInterface\0PointInput\0\0Logout\0"
    "saveFile\0upDateCurrentShape\0Exit\0"
    "on_ShapeTypeEdit_currentIndexChanged\0"
    "index\0OnHorizontaAxisEllipseChanged\0"
    "FullScreenClicked\0MaximizedClicked\0"
    "MaintenanceNotesClicked\0TestimonialsClicked\0"
    "ContactClicked\0HelpClicked\0"
    "on_button_SortID_clicked\0"
    "on_button_SortArea_clicked\0"
    "on_button_SortPerimeter_clicked\0"
    "on_AddObject_clicked\0on_DeleteObj_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x06 /* Public */,
       3,    0,  105,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,  106,    2, 0x08 /* Private */,
       5,    0,  107,    2, 0x08 /* Private */,
       6,    0,  108,    2, 0x08 /* Private */,
       7,    1,  109,    2, 0x08 /* Private */,
       9,    0,  112,    2, 0x08 /* Private */,
      10,    0,  113,    2, 0x08 /* Private */,
      11,    0,  114,    2, 0x08 /* Private */,
      12,    0,  115,    2, 0x08 /* Private */,
      13,    0,  116,    2, 0x08 /* Private */,
      14,    0,  117,    2, 0x08 /* Private */,
      15,    0,  118,    2, 0x08 /* Private */,
      16,    0,  119,    2, 0x08 /* Private */,
      17,    0,  120,    2, 0x08 /* Private */,
      18,    0,  121,    2, 0x08 /* Private */,
      19,    0,  122,    2, 0x08 /* Private */,
      20,    0,  123,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
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
        case 2: _t->saveFile(); break;
        case 3: _t->upDateCurrentShape(); break;
        case 4: _t->Exit(); break;
        case 5: _t->on_ShapeTypeEdit_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->OnHorizontaAxisEllipseChanged(); break;
        case 7: _t->FullScreenClicked(); break;
        case 8: _t->MaximizedClicked(); break;
        case 9: _t->MaintenanceNotesClicked(); break;
        case 10: _t->TestimonialsClicked(); break;
        case 11: _t->ContactClicked(); break;
        case 12: _t->HelpClicked(); break;
        case 13: _t->on_button_SortID_clicked(); break;
        case 14: _t->on_button_SortArea_clicked(); break;
        case 15: _t->on_button_SortPerimeter_clicked(); break;
        case 16: _t->on_AddObject_clicked(); break;
        case 17: _t->on_DeleteObj_clicked(); break;
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
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
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
