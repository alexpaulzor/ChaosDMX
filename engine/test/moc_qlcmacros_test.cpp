/****************************************************************************
** Meta object code from reading C++ file 'qlcmacros_test.h'
**
** Created: Sun Dec 12 05:56:03 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qlcmacros_test.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qlcmacros_test.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QLCMacros_Test[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x08,
      22,   15,   15,   15, 0x08,
      28,   15,   15,   15, 0x08,
      36,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QLCMacros_Test[] = {
    "QLCMacros_Test\0\0min()\0max()\0clamp()\0"
    "scale()\0"
};

const QMetaObject QLCMacros_Test::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QLCMacros_Test,
      qt_meta_data_QLCMacros_Test, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QLCMacros_Test::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QLCMacros_Test::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QLCMacros_Test::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QLCMacros_Test))
        return static_cast<void*>(const_cast< QLCMacros_Test*>(this));
    return QObject::qt_metacast(_clname);
}

int QLCMacros_Test::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: min(); break;
        case 1: max(); break;
        case 2: clamp(); break;
        case 3: scale(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
