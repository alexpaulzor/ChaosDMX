/****************************************************************************
** Meta object code from reading C++ file 'chaserrunner_test.h'
**
** Created: Sun Dec 12 05:56:05 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "chaserrunner_test.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chaserrunner_test.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ChaserRunner_Test[] = {

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
      19,   18,   18,   18, 0x08,
      34,   18,   18,   18, 0x08,
      41,   18,   18,   18, 0x08,
      51,   18,   18,   18, 0x08,
      61,   18,   18,   18, 0x08,
      76,   18,   18,   18, 0x08,
      87,   18,   18,   18, 0x08,
     117,   18,   18,   18, 0x08,
     148,   18,   18,   18, 0x08,
     172,   18,   18,   18, 0x08,
     197,   18,   18,   18, 0x08,
     225,   18,   18,   18, 0x08,
     254,   18,   18,   18, 0x08,
     275,   18,   18,   18, 0x08,
     290,   18,   18,   18, 0x08,
     312,   18,   18,   18, 0x08,
     328,   18,   18,   18, 0x08,
     367,   18,   18,   18, 0x08,
     407,   18,   18,   18, 0x08,
     440,   18,   18,   18, 0x08,
     466,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ChaserRunner_Test[] = {
    "ChaserRunner_Test\0\0initTestCase()\0"
    "init()\0cleanup()\0initial()\0nextPrevious()\0"
    "autoStep()\0roundCheckSingleShotForward()\0"
    "roundCheckSingleShotBackward()\0"
    "roundCheckLoopForward()\0"
    "roundCheckLoopBackward()\0"
    "roundCheckPingPongForward()\0"
    "roundCheckPingPongBackward()\0"
    "createFadeChannels()\0writeNoSteps()\0"
    "writeMissingFixture()\0writeHoldZero()\0"
    "writeForwardLoopHoldFiveNextPrevious()\0"
    "writeBackwardLoopHoldFiveNextPrevious()\0"
    "writeForwardSingleShotHoldFive()\0"
    "writeNoAutoStepHoldFive()\0"
    "writeNoAutoSetCurrentStep()\0"
};

const QMetaObject ChaserRunner_Test::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ChaserRunner_Test,
      qt_meta_data_ChaserRunner_Test, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ChaserRunner_Test::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ChaserRunner_Test::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ChaserRunner_Test::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ChaserRunner_Test))
        return static_cast<void*>(const_cast< ChaserRunner_Test*>(this));
    return QObject::qt_metacast(_clname);
}

int ChaserRunner_Test::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 4: nextPrevious(); break;
        case 5: autoStep(); break;
        case 6: roundCheckSingleShotForward(); break;
        case 7: roundCheckSingleShotBackward(); break;
        case 8: roundCheckLoopForward(); break;
        case 9: roundCheckLoopBackward(); break;
        case 10: roundCheckPingPongForward(); break;
        case 11: roundCheckPingPongBackward(); break;
        case 12: createFadeChannels(); break;
        case 13: writeNoSteps(); break;
        case 14: writeMissingFixture(); break;
        case 15: writeHoldZero(); break;
        case 16: writeForwardLoopHoldFiveNextPrevious(); break;
        case 17: writeBackwardLoopHoldFiveNextPrevious(); break;
        case 18: writeForwardSingleShotHoldFive(); break;
        case 19: writeNoAutoStepHoldFive(); break;
        case 20: writeNoAutoSetCurrentStep(); break;
        default: ;
        }
        _id -= 21;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
