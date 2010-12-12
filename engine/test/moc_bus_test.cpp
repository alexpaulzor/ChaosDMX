/****************************************************************************
** Meta object code from reading C++ file 'bus_test.h'
**
** Created: Sun Dec 12 05:56:05 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "bus_test.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bus_test.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Bus_Test[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x08,
      25,    9,    9,    9, 0x08,
      36,    9,    9,    9, 0x08,
      44,    9,    9,    9, 0x08,
      51,    9,    9,    9, 0x08,
      60,    9,    9,    9, 0x08,
      66,    9,    9,    9, 0x08,
      82,    9,    9,    9, 0x08,
      89,    9,    9,    9, 0x08,
     103,    9,    9,    9, 0x08,
     110,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Bus_Test[] = {
    "Bus_Test\0\0initTestCase()\0defaults()\0"
    "value()\0name()\0idName()\0tap()\0"
    "loadWrongRoot()\0load()\0loadWrongID()\0"
    "save()\0cleanupTestCase()\0"
};

const QMetaObject Bus_Test::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Bus_Test,
      qt_meta_data_Bus_Test, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Bus_Test::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Bus_Test::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Bus_Test::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Bus_Test))
        return static_cast<void*>(const_cast< Bus_Test*>(this));
    return QObject::qt_metacast(_clname);
}

int Bus_Test::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: initTestCase(); break;
        case 1: defaults(); break;
        case 2: value(); break;
        case 3: name(); break;
        case 4: idName(); break;
        case 5: tap(); break;
        case 6: loadWrongRoot(); break;
        case 7: load(); break;
        case 8: loadWrongID(); break;
        case 9: save(); break;
        case 10: cleanupTestCase(); break;
        default: ;
        }
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
