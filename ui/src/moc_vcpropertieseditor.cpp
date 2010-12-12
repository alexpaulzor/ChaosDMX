/****************************************************************************
** Meta object code from reading C++ file 'vcpropertieseditor.h'
**
** Created: Sun Dec 12 05:58:42 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "vcpropertieseditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vcpropertieseditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VCPropertiesEditor[] = {

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
      20,   19,   19,   19, 0x09,
      46,   19,   19,   19, 0x09,
      72,   19,   19,   19, 0x09,
      96,   90,   19,   19, 0x09,
     118,   90,   19,   19, 0x09,
     140,   19,   19,   19, 0x09,
     172,  164,   19,   19, 0x09,
     226,  209,   19,   19, 0x09,
     269,   19,   19,   19, 0x09,
     298,   19,   19,   19, 0x09,
     322,  164,   19,   19, 0x09,
     359,  209,   19,   19, 0x09,
     402,   19,   19,   19, 0x09,
     431,  164,   19,   19, 0x09,
     469,  164,   19,   19, 0x09,
     504,  164,   19,   19, 0x09,
     548,  209,   19,   19, 0x09,
     598,   19,   19,   19, 0x09,
     634,  164,   19,   19, 0x09,
     675,  209,   19,   19, 0x09,
     722,   19,   19,   19, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_VCPropertiesEditor[] = {
    "VCPropertiesEditor\0\0slotGrabKeyboardClicked()\0"
    "slotKeyRepeatOffClicked()\0slotGridClicked()\0"
    "value\0slotGridXChanged(int)\0"
    "slotGridYChanged(int)\0slotFadeLimitsChanged()\0"
    "checked\0slotAutoDetectFadeInputToggled(bool)\0"
    "universe,channel\0"
    "slotFadeInputValueChanged(quint32,quint32)\0"
    "slotChooseFadeInputClicked()\0"
    "slotHoldLimitsChanged()\0"
    "slotAutoDetectHoldInputToggled(bool)\0"
    "slotHoldInputValueChanged(quint32,quint32)\0"
    "slotChooseHoldInputClicked()\0"
    "slotGrandMasterIntensityToggled(bool)\0"
    "slotGrandMasterReduceToggled(bool)\0"
    "slotAutoDetectGrandMasterInputToggled(bool)\0"
    "slotGrandMasterInputValueChanged(quint32,quint32)\0"
    "slotChooseGrandMasterInputClicked()\0"
    "slotAutoDetectBlackoutInputToggled(bool)\0"
    "slotBlackoutInputValueChanged(quint32,quint32)\0"
    "slotChooseBlackoutInputClicked()\0"
};

const QMetaObject VCPropertiesEditor::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_VCPropertiesEditor,
      qt_meta_data_VCPropertiesEditor, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VCPropertiesEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VCPropertiesEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VCPropertiesEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VCPropertiesEditor))
        return static_cast<void*>(const_cast< VCPropertiesEditor*>(this));
    if (!strcmp(_clname, "Ui_VCPropertiesEditor"))
        return static_cast< Ui_VCPropertiesEditor*>(const_cast< VCPropertiesEditor*>(this));
    return QDialog::qt_metacast(_clname);
}

int VCPropertiesEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: slotGrabKeyboardClicked(); break;
        case 1: slotKeyRepeatOffClicked(); break;
        case 2: slotGridClicked(); break;
        case 3: slotGridXChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: slotGridYChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: slotFadeLimitsChanged(); break;
        case 6: slotAutoDetectFadeInputToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: slotFadeInputValueChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 8: slotChooseFadeInputClicked(); break;
        case 9: slotHoldLimitsChanged(); break;
        case 10: slotAutoDetectHoldInputToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: slotHoldInputValueChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 12: slotChooseHoldInputClicked(); break;
        case 13: slotGrandMasterIntensityToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: slotGrandMasterReduceToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: slotAutoDetectGrandMasterInputToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: slotGrandMasterInputValueChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 17: slotChooseGrandMasterInputClicked(); break;
        case 18: slotAutoDetectBlackoutInputToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: slotBlackoutInputValueChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 20: slotChooseBlackoutInputClicked(); break;
        default: ;
        }
        _id -= 21;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
