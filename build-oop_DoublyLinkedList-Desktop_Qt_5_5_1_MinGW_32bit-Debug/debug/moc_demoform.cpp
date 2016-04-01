/****************************************************************************
** Meta object code from reading C++ file 'demoform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../oop_DoublyLinkedList/demoform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'demoform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_demoForm_t {
    QByteArrayData data[20];
    char stringdata0[350];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_demoForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_demoForm_t qt_meta_stringdata_demoForm = {
    {
QT_MOC_LITERAL(0, 0, 8), // "demoForm"
QT_MOC_LITERAL(1, 9, 10), // "messageBox"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 18), // "on_addDemo_clicked"
QT_MOC_LITERAL(4, 40, 22), // "on_refreshList_clicked"
QT_MOC_LITERAL(5, 63, 7), // "outList"
QT_MOC_LITERAL(6, 71, 23), // "on_lineEdit_textChanged"
QT_MOC_LITERAL(7, 95, 4), // "arg1"
QT_MOC_LITERAL(8, 100, 22), // "on_addPosition_clicked"
QT_MOC_LITERAL(9, 123, 17), // "on_toHead_clicked"
QT_MOC_LITERAL(10, 141, 17), // "on_toTail_clicked"
QT_MOC_LITERAL(11, 159, 25), // "on_beforePosition_clicked"
QT_MOC_LITERAL(12, 185, 24), // "on_afterPosition_clicked"
QT_MOC_LITERAL(13, 210, 31), // "on_listWidget_currentRowChanged"
QT_MOC_LITERAL(14, 242, 10), // "currentRow"
QT_MOC_LITERAL(15, 253, 25), // "on_lineEdit_2_textChanged"
QT_MOC_LITERAL(16, 279, 17), // "on_remove_clicked"
QT_MOC_LITERAL(17, 297, 15), // "on_edit_clicked"
QT_MOC_LITERAL(18, 313, 20), // "on_removeAll_clicked"
QT_MOC_LITERAL(19, 334, 15) // "on_move_clicked"

    },
    "demoForm\0messageBox\0\0on_addDemo_clicked\0"
    "on_refreshList_clicked\0outList\0"
    "on_lineEdit_textChanged\0arg1\0"
    "on_addPosition_clicked\0on_toHead_clicked\0"
    "on_toTail_clicked\0on_beforePosition_clicked\0"
    "on_afterPosition_clicked\0"
    "on_listWidget_currentRowChanged\0"
    "currentRow\0on_lineEdit_2_textChanged\0"
    "on_remove_clicked\0on_edit_clicked\0"
    "on_removeAll_clicked\0on_move_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_demoForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   97,    2, 0x08 /* Private */,
       4,    0,   98,    2, 0x08 /* Private */,
       5,    1,   99,    2, 0x08 /* Private */,
       6,    1,  102,    2, 0x08 /* Private */,
       8,    0,  105,    2, 0x08 /* Private */,
       9,    0,  106,    2, 0x08 /* Private */,
      10,    0,  107,    2, 0x08 /* Private */,
      11,    0,  108,    2, 0x08 /* Private */,
      12,    0,  109,    2, 0x08 /* Private */,
      13,    1,  110,    2, 0x08 /* Private */,
      15,    1,  113,    2, 0x08 /* Private */,
      16,    0,  116,    2, 0x08 /* Private */,
      17,    0,  117,    2, 0x08 /* Private */,
      18,    0,  118,    2, 0x08 /* Private */,
      19,    0,  119,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void demoForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        demoForm *_t = static_cast<demoForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->messageBox((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->on_addDemo_clicked(); break;
        case 2: _t->on_refreshList_clicked(); break;
        case 3: _t->outList((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->on_lineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_addPosition_clicked(); break;
        case 6: _t->on_toHead_clicked(); break;
        case 7: _t->on_toTail_clicked(); break;
        case 8: _t->on_beforePosition_clicked(); break;
        case 9: _t->on_afterPosition_clicked(); break;
        case 10: _t->on_listWidget_currentRowChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_lineEdit_2_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->on_remove_clicked(); break;
        case 13: _t->on_edit_clicked(); break;
        case 14: _t->on_removeAll_clicked(); break;
        case 15: _t->on_move_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (demoForm::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&demoForm::messageBox)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject demoForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_demoForm.data,
      qt_meta_data_demoForm,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *demoForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *demoForm::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_demoForm.stringdata0))
        return static_cast<void*>(const_cast< demoForm*>(this));
    return QWidget::qt_metacast(_clname);
}

int demoForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void demoForm::messageBox(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
