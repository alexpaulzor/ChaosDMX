/****************************************************************************
** Meta object code from reading C++ file 'efxeditor.h'
**
** Created: Sun Dec 12 05:58:14 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "efxeditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'efxeditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EFXEditor[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x09,
      25,   20,   10,   10, 0x09,
      61,   49,   10,   10, 0x09,
     106,   10,   10,   10, 0x09,
     130,   10,   10,   10, 0x09,
     157,   10,   10,   10, 0x09,
     183,   10,   10,   10, 0x09,
     215,  209,   10,   10, 0x09,
     252,  246,   10,   10, 0x09,
     279,   20,   10,   10, 0x09,
     316,  310,   10,   10, 0x09,
     342,  310,   10,   10, 0x09,
     369,  310,   10,   10, 0x09,
     397,  310,   10,   10, 0x09,
     425,  310,   10,   10, 0x09,
     454,  310,   10,   10, 0x09,
     485,  310,   10,   10, 0x09,
     516,  310,   10,   10, 0x09,
     543,  310,   10,   10, 0x09,
     570,   10,   10,   10, 0x09,
     588,   10,   10,   10, 0x09,
     612,   10,   10,   10, 0x09,
     634,   10,   10,   10, 0x09,
     655,   10,   10,   10, 0x09,
     677,   10,   10,   10, 0x09,
     710,   10,   10,   10, 0x09,
     742,   10,   10,   10, 0x09,
     779,   10,   10,   10, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_EFXEditor[] = {
    "EFXEditor\0\0accept()\0text\0"
    "slotNameEdited(QString)\0item,column\0"
    "slotFixtureItemChanged(QTreeWidgetItem*,int)\0"
    "slotAddFixtureClicked()\0"
    "slotRemoveFixtureClicked()\0"
    "slotRaiseFixtureClicked()\0"
    "slotLowerFixtureClicked()\0state\0"
    "slotParallelRadioToggled(bool)\0index\0"
    "slotBusComboActivated(int)\0"
    "slotAlgorithmSelected(QString)\0value\0"
    "slotWidthSpinChanged(int)\0"
    "slotHeightSpinChanged(int)\0"
    "slotXOffsetSpinChanged(int)\0"
    "slotYOffsetSpinChanged(int)\0"
    "slotRotationSpinChanged(int)\0"
    "slotXFrequencySpinChanged(int)\0"
    "slotYFrequencySpinChanged(int)\0"
    "slotXPhaseSpinChanged(int)\0"
    "slotYPhaseSpinChanged(int)\0slotLoopClicked()\0"
    "slotSingleShotClicked()\0slotPingPongClicked()\0"
    "slotForwardClicked()\0slotBackwardClicked()\0"
    "slotStartSceneGroupToggled(bool)\0"
    "slotStopSceneGroupToggled(bool)\0"
    "slotStartSceneListSelectionChanged()\0"
    "slotStopSceneListSelectionChanged()\0"
};

const QMetaObject EFXEditor::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_EFXEditor,
      qt_meta_data_EFXEditor, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EFXEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EFXEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EFXEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EFXEditor))
        return static_cast<void*>(const_cast< EFXEditor*>(this));
    if (!strcmp(_clname, "Ui_EFXEditor"))
        return static_cast< Ui_EFXEditor*>(const_cast< EFXEditor*>(this));
    return QDialog::qt_metacast(_clname);
}

int EFXEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: accept(); break;
        case 1: slotNameEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: slotFixtureItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: slotAddFixtureClicked(); break;
        case 4: slotRemoveFixtureClicked(); break;
        case 5: slotRaiseFixtureClicked(); break;
        case 6: slotLowerFixtureClicked(); break;
        case 7: slotParallelRadioToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: slotBusComboActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: slotAlgorithmSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: slotWidthSpinChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: slotHeightSpinChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: slotXOffsetSpinChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: slotYOffsetSpinChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: slotRotationSpinChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: slotXFrequencySpinChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: slotYFrequencySpinChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: slotXPhaseSpinChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: slotYPhaseSpinChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: slotLoopClicked(); break;
        case 20: slotSingleShotClicked(); break;
        case 21: slotPingPongClicked(); break;
        case 22: slotForwardClicked(); break;
        case 23: slotBackwardClicked(); break;
        case 24: slotStartSceneGroupToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: slotStopSceneGroupToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: slotStartSceneListSelectionChanged(); break;
        case 27: slotStopSceneListSelectionChanged(); break;
        default: ;
        }
        _id -= 28;
    }
    return _id;
}
static const uint qt_meta_data_EFXPreviewArea[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_EFXPreviewArea[] = {
    "EFXPreviewArea\0\0slotTimeout()\0"
};

const QMetaObject EFXPreviewArea::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_EFXPreviewArea,
      qt_meta_data_EFXPreviewArea, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EFXPreviewArea::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EFXPreviewArea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EFXPreviewArea::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EFXPreviewArea))
        return static_cast<void*>(const_cast< EFXPreviewArea*>(this));
    return QFrame::qt_metacast(_clname);
}

int EFXPreviewArea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: slotTimeout(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
