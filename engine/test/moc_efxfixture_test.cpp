/****************************************************************************
** Meta object code from reading C++ file 'efxfixture_test.h'
**
** Created: Sun Dec 12 05:56:10 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "efxfixture_test.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'efxfixture_test.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EFXFixture_Test[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
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
      70,   16,   16,   16, 0x08,
      89,   16,   16,   16, 0x08,
     103,   16,   16,   16, 0x08,
     119,   16,   16,   16, 0x08,
     140,   16,   16,   16, 0x08,
     155,   16,   16,   16, 0x08,
     162,   16,   16,   16, 0x08,
     184,   16,   16,   16, 0x08,
     206,   16,   16,   16, 0x08,
     216,   16,   16,   16, 0x08,
     224,   16,   16,   16, 0x08,
     236,   16,   16,   16, 0x08,
     251,   16,   16,   16, 0x08,
     267,   16,   16,   16, 0x08,
     282,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_EFXFixture_Test[] = {
    "EFXFixture_Test\0\0initTestCase()\0init()\0"
    "cleanup()\0initial()\0copyFrom()\0"
    "publicProperties()\0loadSuccess()\0"
    "loadWrongRoot()\0loadWrongDirection()\0"
    "loadExtraTag()\0save()\0protectedProperties()\0"
    "updateSkipThreshold()\0isValid()\0reset()\0"
    "startStop()\0setPoint8bit()\0setPoint16bit()\0"
    "nextStepLoop()\0nextStepSingleShot()\0"
};

const QMetaObject EFXFixture_Test::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_EFXFixture_Test,
      qt_meta_data_EFXFixture_Test, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EFXFixture_Test::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EFXFixture_Test::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EFXFixture_Test::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EFXFixture_Test))
        return static_cast<void*>(const_cast< EFXFixture_Test*>(this));
    return QObject::qt_metacast(_clname);
}

int EFXFixture_Test::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 4: copyFrom(); break;
        case 5: publicProperties(); break;
        case 6: loadSuccess(); break;
        case 7: loadWrongRoot(); break;
        case 8: loadWrongDirection(); break;
        case 9: loadExtraTag(); break;
        case 10: save(); break;
        case 11: protectedProperties(); break;
        case 12: updateSkipThreshold(); break;
        case 13: isValid(); break;
        case 14: reset(); break;
        case 15: startStop(); break;
        case 16: setPoint8bit(); break;
        case 17: setPoint16bit(); break;
        case 18: nextStepLoop(); break;
        case 19: nextStepSingleShot(); break;
        default: ;
        }
        _id -= 20;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
