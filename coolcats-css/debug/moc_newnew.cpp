/****************************************************************************
** Meta object code from reading C++ file 'newnew.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../newnew.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'newnew.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_newnew_t {
    QByteArrayData data[10];
    char stringdata0[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_newnew_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_newnew_t qt_meta_stringdata_newnew = {
    {
QT_MOC_LITERAL(0, 0, 6), // "newnew"
QT_MOC_LITERAL(1, 7, 10), // "onUserSent"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 10), // "singleUser"
QT_MOC_LITERAL(4, 30, 22), // "on_loginButton_clicked"
QT_MOC_LITERAL(5, 53, 23), // "on_createButton_clicked"
QT_MOC_LITERAL(6, 77, 21), // "on_userswitch_toggled"
QT_MOC_LITERAL(7, 99, 7), // "checked"
QT_MOC_LITERAL(8, 107, 32), // "on_userCombo_currentIndexChanged"
QT_MOC_LITERAL(9, 140, 4) // "arg1"

    },
    "newnew\0onUserSent\0\0singleUser\0"
    "on_loginButton_clicked\0on_createButton_clicked\0"
    "on_userswitch_toggled\0checked\0"
    "on_userCombo_currentIndexChanged\0arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_newnew[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x08 /* Private */,
       4,    0,   42,    2, 0x08 /* Private */,
       5,    0,   43,    2, 0x08 /* Private */,
       6,    1,   44,    2, 0x08 /* Private */,
       8,    1,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::QString,    9,

       0        // eod
};

void newnew::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        newnew *_t = static_cast<newnew *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onUserSent((*reinterpret_cast< const singleUser(*)>(_a[1]))); break;
        case 1: _t->on_loginButton_clicked(); break;
        case 2: _t->on_createButton_clicked(); break;
        case 3: _t->on_userswitch_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_userCombo_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject newnew::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_newnew.data,
      qt_meta_data_newnew,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *newnew::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *newnew::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_newnew.stringdata0))
        return static_cast<void*>(const_cast< newnew*>(this));
    return QDialog::qt_metacast(_clname);
}

int newnew::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
