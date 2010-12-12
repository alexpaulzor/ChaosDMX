/****************************************************************************
** Meta object code from reading C++ file 'mastertimer_test.h'
**
** Created: Sun Dec 12 05:56:13 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mastertimer_test.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mastertimer_test.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MasterTimer_Test[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x08,
      33,   17,   17,   17, 0x08,
      40,   17,   17,   17, 0x08,
      50,   17,   17,   17, 0x08,
      60,   17,   17,   17, 0x08,
      72,   17,   17,   17, 0x08,
      92,   17,   17,   17, 0x08,
     122,   17,   17,   17, 0x08,
     133,   17,   17,   17, 0x08,
     157,   17,   17,   17, 0x08,
     180,   17,   17,   17, 0x08,
     199,   17,   17,   17, 0x08,
     206,   17,   17,   17, 0x08,
     216,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MasterTimer_Test[] = {
    "MasterTimer_Test\0\0initTestCase()\0"
    "init()\0cleanup()\0initial()\0startStop()\0"
    "startStopFunction()\0registerUnregisterDMXSource()\0"
    "interval()\0functionInitiatedStop()\0"
    "runMultipleFunctions()\0stopAllFunctions()\0"
    "stop()\0restart()\0cleanupTestCase()\0"
};

const QMetaObject MasterTimer_Test::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MasterTimer_Test,
      qt_meta_data_MasterTimer_Test, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MasterTimer_Test::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MasterTimer_Test::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MasterTimer_Test::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MasterTimer_Test))
        return static_cast<void*>(const_cast< MasterTimer_Test*>(this));
    return QObject::qt_metacast(_clname);
}

int MasterTimer_Test::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 4: startStop(); break;
        case 5: startStopFunction(); break;
        case 6: registerUnregisterDMXSource(); break;
        case 7: interval(); break;
        case 8: functionInitiatedStop(); break;
        case 9: runMultipleFunctions(); break;
        case 10: stopAllFunctions(); break;
        case 11: stop(); break;
        case 12: restart(); break;
        case 13: cleanupTestCase(); break;
        default: ;
        }
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
