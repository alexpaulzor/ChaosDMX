/****************************************************************************
** Meta object code from reading C++ file 'function_test.h'
**
** Created: Sun Dec 12 05:56:07 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "function_test.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'function_test.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Function_Test[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x08,
      30,   14,   14,   14, 0x08,
      40,   14,   14,   14, 0x08,
      51,   14,   14,   14, 0x08,
      66,   14,   14,   14, 0x08,
      76,   14,   14,   14, 0x08,
      92,   14,   14,   14, 0x08,
     106,   14,   14,   14, 0x08,
     124,   14,   14,   14, 0x08,
     145,   14,   14,   14, 0x08,
     157,   14,   14,   14, 0x08,
     170,   14,   14,   14, 0x08,
     185,   14,   14,   14, 0x08,
     200,   14,   14,   14, 0x08,
     219,   14,   14,   14, 0x08,
     238,   14,   14,   14, 0x08,
     258,   14,   14,   14, 0x08,
     278,   14,   14,   14, 0x08,
     296,   14,   14,   14, 0x08,
     312,   14,   14,   14, 0x08,
     326,   14,   14,   14, 0x08,
     341,   14,   14,   14, 0x08,
     360,   14,   14,   14, 0x08,
     372,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Function_Test[] = {
    "Function_Test\0\0initTestCase()\0initial()\0"
    "copyFrom()\0flashUnflash()\0elapsed()\0"
    "preRunPostRun()\0stopAndWait()\0"
    "stopAndWaitFail()\0slotFixtureRemoved()\0"
    "invalidId()\0typeString()\0typeToString()\0"
    "stringToType()\0runOrderToString()\0"
    "stringToRunOrder()\0directionToString()\0"
    "stringToDirection()\0loaderWrongRoot()\0"
    "loaderWrongID()\0loaderScene()\0"
    "loaderChaser()\0loaderCollection()\0"
    "loaderEFX()\0loaderUnknownType()\0"
};

const QMetaObject Function_Test::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Function_Test,
      qt_meta_data_Function_Test, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Function_Test::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Function_Test::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Function_Test::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Function_Test))
        return static_cast<void*>(const_cast< Function_Test*>(this));
    return QObject::qt_metacast(_clname);
}

int Function_Test::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: initTestCase(); break;
        case 1: initial(); break;
        case 2: copyFrom(); break;
        case 3: flashUnflash(); break;
        case 4: elapsed(); break;
        case 5: preRunPostRun(); break;
        case 6: stopAndWait(); break;
        case 7: stopAndWaitFail(); break;
        case 8: slotFixtureRemoved(); break;
        case 9: invalidId(); break;
        case 10: typeString(); break;
        case 11: typeToString(); break;
        case 12: stringToType(); break;
        case 13: runOrderToString(); break;
        case 14: stringToRunOrder(); break;
        case 15: directionToString(); break;
        case 16: stringToDirection(); break;
        case 17: loaderWrongRoot(); break;
        case 18: loaderWrongID(); break;
        case 19: loaderScene(); break;
        case 20: loaderChaser(); break;
        case 21: loaderCollection(); break;
        case 22: loaderEFX(); break;
        case 23: loaderUnknownType(); break;
        default: ;
        }
        _id -= 24;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
