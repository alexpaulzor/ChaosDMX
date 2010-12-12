/****************************************************************************
** Meta object code from reading C++ file 'scene_test.h'
**
** Created: Sun Dec 12 05:56:07 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "scene_test.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scene_test.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Scene_Test[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      27,   11,   11,   11, 0x08,
      34,   11,   11,   11, 0x08,
      44,   11,   11,   11, 0x08,
      54,   11,   11,   11, 0x08,
      63,   11,   11,   11, 0x08,
      80,   11,   11,   11, 0x08,
      94,   11,   11,   11, 0x08,
     110,   11,   11,   11, 0x08,
     126,   11,   11,   11, 0x08,
     133,   11,   11,   11, 0x08,
     144,   11,   11,   11, 0x08,
     157,   11,   11,   11, 0x08,
     163,   11,   11,   11, 0x08,
     183,   11,   11,   11, 0x08,
     204,   11,   11,   11, 0x08,
     219,   11,   11,   11, 0x08,
     237,   11,   11,   11, 0x08,
     254,   11,   11,   11, 0x08,
     275,   11,   11,   11, 0x08,
     292,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Scene_Test[] = {
    "Scene_Test\0\0initTestCase()\0init()\0"
    "cleanup()\0initial()\0values()\0"
    "fixtureRemoval()\0loadSuccess()\0"
    "loadWrongType()\0loadWrongRoot()\0save()\0"
    "copyFrom()\0createCopy()\0arm()\0"
    "armMissingFixture()\0armTooManyChannels()\0"
    "flashUnflash()\0writeHTPBusZero()\0"
    "writeHTPBusOne()\0writeLTPHTPBusZero()\0"
    "writeLTPBusOne()\0writeLTPReady()\0"
};

const QMetaObject Scene_Test::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Scene_Test,
      qt_meta_data_Scene_Test, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Scene_Test::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Scene_Test::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Scene_Test::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Scene_Test))
        return static_cast<void*>(const_cast< Scene_Test*>(this));
    return QObject::qt_metacast(_clname);
}

int Scene_Test::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 4: values(); break;
        case 5: fixtureRemoval(); break;
        case 6: loadSuccess(); break;
        case 7: loadWrongType(); break;
        case 8: loadWrongRoot(); break;
        case 9: save(); break;
        case 10: copyFrom(); break;
        case 11: createCopy(); break;
        case 12: arm(); break;
        case 13: armMissingFixture(); break;
        case 14: armTooManyChannels(); break;
        case 15: flashUnflash(); break;
        case 16: writeHTPBusZero(); break;
        case 17: writeHTPBusOne(); break;
        case 18: writeLTPHTPBusZero(); break;
        case 19: writeLTPBusOne(); break;
        case 20: writeLTPReady(); break;
        default: ;
        }
        _id -= 21;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
