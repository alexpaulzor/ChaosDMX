/****************************************************************************
** Meta object code from reading C++ file 'collection_test.h'
**
** Created: Sun Dec 12 05:56:09 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "collection_test.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'collection_test.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Collection_Test[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x08,
      32,   16,   16,   16, 0x08,
      39,   16,   16,   16, 0x08,
      49,   16,   16,   16, 0x08,
      59,   16,   16,   16, 0x08,
      71,   16,   16,   16, 0x08,
      89,   16,   16,   16, 0x08,
     103,   16,   16,   16, 0x08,
     119,   16,   16,   16, 0x08,
     135,   16,   16,   16, 0x08,
     156,   16,   16,   16, 0x08,
     163,   16,   16,   16, 0x08,
     174,   16,   16,   16, 0x08,
     187,   16,   16,   16, 0x08,
     200,   16,   16,   16, 0x08,
     221,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Collection_Test[] = {
    "Collection_Test\0\0initTestCase()\0init()\0"
    "cleanup()\0initial()\0functions()\0"
    "functionRemoval()\0loadSuccess()\0"
    "loadWrongType()\0loadWrongRoot()\0"
    "loadWrongMemberTag()\0save()\0copyFrom()\0"
    "createCopy()\0armSuccess()\0"
    "armMissingFunction()\0write()\0"
};

const QMetaObject Collection_Test::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Collection_Test,
      qt_meta_data_Collection_Test, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Collection_Test::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Collection_Test::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Collection_Test::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Collection_Test))
        return static_cast<void*>(const_cast< Collection_Test*>(this));
    return QObject::qt_metacast(_clname);
}

int Collection_Test::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: initTestCase(); break;
        case 1: init(); break;
        case 2: cleanup(); break;
        case 3: initial(); break;
        case 4: functions(); break;
        case 5: functionRemoval(); break;
        case 6: loadSuccess(); break;
        case 7: loadWrongType(); break;
        case 8: loadWrongRoot(); break;
        case 9: loadWrongMemberTag(); break;
        case 10: save(); break;
        case 11: copyFrom(); break;
        case 12: createCopy(); break;
        case 13: armSuccess(); break;
        case 14: armMissingFunction(); break;
        case 15: write(); break;
        default: ;
        }
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
