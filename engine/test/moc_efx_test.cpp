/****************************************************************************
** Meta object code from reading C++ file 'efx_test.h'
**
** Created: Sun Dec 12 05:56:10 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "efx_test.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'efx_test.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EFX_Test[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      40,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x08,
      25,    9,    9,    9, 0x08,
      32,    9,    9,    9, 0x08,
      42,    9,    9,    9, 0x08,
      52,    9,    9,    9, 0x08,
      69,    9,    9,    9, 0x08,
      77,    9,    9,    9, 0x08,
      86,    9,    9,    9, 0x08,
      97,    9,    9,    9, 0x08,
     107,    9,    9,    9, 0x08,
     117,    9,    9,    9, 0x08,
     130,    9,    9,    9, 0x08,
     143,    9,    9,    9, 0x08,
     152,    9,    9,    9, 0x08,
     161,    9,    9,    9, 0x08,
     172,    9,    9,    9, 0x08,
     190,    9,    9,    9, 0x08,
     208,    9,    9,    9, 0x08,
     224,    9,    9,    9, 0x08,
     239,    9,    9,    9, 0x08,
     253,    9,    9,    9, 0x08,
     270,    9,    9,    9, 0x08,
     289,    9,    9,    9, 0x08,
     306,    9,    9,    9, 0x08,
     326,    9,    9,    9, 0x08,
     337,    9,    9,    9, 0x08,
     350,    9,    9,    9, 0x08,
     362,    9,    9,    9, 0x08,
     374,    9,    9,    9, 0x08,
     395,    9,    9,    9, 0x08,
     410,    9,    9,    9, 0x08,
     424,    9,    9,    9, 0x08,
     440,    9,    9,    9, 0x08,
     456,    9,    9,    9, 0x08,
     479,    9,    9,    9, 0x08,
     486,    9,    9,    9, 0x08,
     499,    9,    9,    9, 0x08,
     522,    9,    9,    9, 0x08,
     544,    9,    9,    9, 0x08,
     564,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_EFX_Test[] = {
    "EFX_Test\0\0initTestCase()\0init()\0"
    "cleanup()\0initial()\0algorithmNames()\0"
    "width()\0height()\0rotation()\0xOffset()\0"
    "yOffset()\0xFrequency()\0yFrequency()\0"
    "xPhase()\0yPhase()\0fixtures()\0"
    "propagationMode()\0startStopScenes()\0"
    "previewCircle()\0previewEight()\0"
    "previewLine()\0previewDiamond()\0"
    "previewLissajous()\0rotateAndScale()\0"
    "widthHeightOffset()\0copyFrom()\0"
    "createCopy()\0loadXAxis()\0loadYAxis()\0"
    "loadYAxisWrongRoot()\0loadAxisNoXY()\0"
    "loadSuccess()\0loadWrongType()\0"
    "loadWrongRoot()\0loadDuplicateFixture()\0"
    "save()\0armSuccess()\0armMissingStartScene()\0"
    "armMissingStopScene()\0armMissingFixture()\0"
    "writeStartStopScenes()\0"
};

const QMetaObject EFX_Test::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_EFX_Test,
      qt_meta_data_EFX_Test, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EFX_Test::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EFX_Test::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EFX_Test::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EFX_Test))
        return static_cast<void*>(const_cast< EFX_Test*>(this));
    return QObject::qt_metacast(_clname);
}

int EFX_Test::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 4: algorithmNames(); break;
        case 5: width(); break;
        case 6: height(); break;
        case 7: rotation(); break;
        case 8: xOffset(); break;
        case 9: yOffset(); break;
        case 10: xFrequency(); break;
        case 11: yFrequency(); break;
        case 12: xPhase(); break;
        case 13: yPhase(); break;
        case 14: fixtures(); break;
        case 15: propagationMode(); break;
        case 16: startStopScenes(); break;
        case 17: previewCircle(); break;
        case 18: previewEight(); break;
        case 19: previewLine(); break;
        case 20: previewDiamond(); break;
        case 21: previewLissajous(); break;
        case 22: rotateAndScale(); break;
        case 23: widthHeightOffset(); break;
        case 24: copyFrom(); break;
        case 25: createCopy(); break;
        case 26: loadXAxis(); break;
        case 27: loadYAxis(); break;
        case 28: loadYAxisWrongRoot(); break;
        case 29: loadAxisNoXY(); break;
        case 30: loadSuccess(); break;
        case 31: loadWrongType(); break;
        case 32: loadWrongRoot(); break;
        case 33: loadDuplicateFixture(); break;
        case 34: save(); break;
        case 35: armSuccess(); break;
        case 36: armMissingStartScene(); break;
        case 37: armMissingStopScene(); break;
        case 38: armMissingFixture(); break;
        case 39: writeStartStopScenes(); break;
        default: ;
        }
        _id -= 40;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
