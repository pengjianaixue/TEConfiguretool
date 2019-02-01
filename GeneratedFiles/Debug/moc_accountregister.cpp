/****************************************************************************
** Meta object code from reading C++ file 'accountregister.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../accountregister.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'accountregister.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_accountregister_t {
    QByteArrayData data[9];
    char stringdata0[157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_accountregister_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_accountregister_t qt_meta_stringdata_accountregister = {
    {
QT_MOC_LITERAL(0, 0, 15), // "accountregister"
QT_MOC_LITERAL(1, 16, 17), // "s_widgethavecolse"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 20), // "s_RegisterUserIntodb"
QT_MOC_LITERAL(4, 56, 24), // "std::vector<std::string>"
QT_MOC_LITERAL(5, 81, 13), // "RegisterParam"
QT_MOC_LITERAL(6, 95, 15), // "closethiswidget"
QT_MOC_LITERAL(7, 111, 20), // "RegisterPbReponseble"
QT_MOC_LITERAL(8, 132, 24) // "AuthorizationUserAccount"

    },
    "accountregister\0s_widgethavecolse\0\0"
    "s_RegisterUserIntodb\0std::vector<std::string>\0"
    "RegisterParam\0closethiswidget\0"
    "RegisterPbReponseble\0AuthorizationUserAccount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_accountregister[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    1,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   43,    2, 0x08 /* Private */,
       7,    0,   44,    2, 0x08 /* Private */,
       8,    0,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void accountregister::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        accountregister *_t = static_cast<accountregister *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->s_widgethavecolse(); break;
        case 1: _t->s_RegisterUserIntodb((*reinterpret_cast< std::vector<std::string>(*)>(_a[1]))); break;
        case 2: _t->closethiswidget(); break;
        case 3: _t->RegisterPbReponseble(); break;
        case 4: _t->AuthorizationUserAccount(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (accountregister::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&accountregister::s_widgethavecolse)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (accountregister::*_t)(std::vector<std::string> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&accountregister::s_RegisterUserIntodb)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject accountregister::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_accountregister.data,
      qt_meta_data_accountregister,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *accountregister::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *accountregister::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_accountregister.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int accountregister::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void accountregister::s_widgethavecolse()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void accountregister::s_RegisterUserIntodb(std::vector<std::string> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
