/****************************************************************************
** Meta object code from reading C++ file 'testform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../oop_DoublyLinkedList/testform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'testform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_testForm_t {
    QByteArrayData data[5];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_testForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_testForm_t qt_meta_stringdata_testForm = {
    {
QT_MOC_LITERAL(0, 0, 8), // "testForm"
QT_MOC_LITERAL(1, 9, 10), // "messageBox"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 11), // "blockWindow"
QT_MOC_LITERAL(4, 33, 15) // "on_send_clicked"

    },
    "testForm\0messageBox\0\0blockWindow\0"
    "on_send_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_testForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       3,    1,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   35,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void testForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        testForm *_t = static_cast<testForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->messageBox((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->blockWindow((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_send_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (testForm::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&testForm::messageBox)) {
                *result = 0;
            }
        }
        {
            typedef void (testForm::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&testForm::blockWindow)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject testForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_testForm.data,
      qt_meta_data_testForm,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *testForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *testForm::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_testForm.stringdata0))
        return static_cast<void*>(const_cast< testForm*>(this));
    return QWidget::qt_metacast(_clname);
}

int testForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void testForm::messageBox(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void testForm::blockWindow(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
