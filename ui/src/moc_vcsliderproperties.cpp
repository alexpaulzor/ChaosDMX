/****************************************************************************
** Meta object code from reading C++ file 'vcsliderproperties.h'
**
** Created: Sun Dec 12 05:58:45 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "vcsliderproperties.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vcsliderproperties.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VCSliderProperties[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x09,
      41,   19,   19,   19, 0x09,
      64,   19,   19,   19, 0x09,
      99,   91,   19,   19, 0x09,
     149,  132,   19,   19, 0x09,
     188,   19,   19,   19, 0x09,
     218,  213,   19,   19, 0x09,
     251,  245,   19,   19, 0x09,
     283,  245,   19,   19, 0x09,
     316,  245,   19,   19, 0x09,
     345,  245,   19,   19, 0x09,
     375,   19,   19,   19, 0x09,
     410,  213,   19,   19, 0x09,
     449,   19,   19,   19, 0x09,
     471,   19,   19,   19, 0x09,
     494,   19,   19,   19, 0x09,
     519,   19,   19,   19, 0x09,
     545,   19,   19,   19, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_VCSliderProperties[] = {
    "VCSliderProperties\0\0slotModeBusClicked()\0"
    "slotModeLevelClicked()\0"
    "slotModeSubmasterClicked()\0checked\0"
    "slotAutoDetectInputToggled(bool)\0"
    "universe,channel\0"
    "slotInputValueChanged(quint32,quint32)\0"
    "slotChooseInputClicked()\0item\0"
    "slotBusComboActivated(int)\0value\0"
    "slotBusLowLimitSpinChanged(int)\0"
    "slotBusHighLimitSpinChanged(int)\0"
    "slotLevelLowSpinChanged(int)\0"
    "slotLevelHighSpinChanged(int)\0"
    "slotLevelCapabilityButtonClicked()\0"
    "slotLevelListClicked(QTreeWidgetItem*)\0"
    "slotLevelAllClicked()\0slotLevelNoneClicked()\0"
    "slotLevelInvertClicked()\0"
    "slotLevelByGroupClicked()\0accept()\0"
};

const QMetaObject VCSliderProperties::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_VCSliderProperties,
      qt_meta_data_VCSliderProperties, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VCSliderProperties::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VCSliderProperties::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VCSliderProperties::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VCSliderProperties))
        return static_cast<void*>(const_cast< VCSliderProperties*>(this));
    if (!strcmp(_clname, "Ui_VCSliderProperties"))
        return static_cast< Ui_VCSliderProperties*>(const_cast< VCSliderProperties*>(this));
    return QDialog::qt_metacast(_clname);
}

int VCSliderProperties::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: slotModeBusClicked(); break;
        case 1: slotModeLevelClicked(); break;
        case 2: slotModeSubmasterClicked(); break;
        case 3: slotAutoDetectInputToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: slotInputValueChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 5: slotChooseInputClicked(); break;
        case 6: slotBusComboActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: slotBusLowLimitSpinChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: slotBusHighLimitSpinChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: slotLevelLowSpinChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: slotLevelHighSpinChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: slotLevelCapabilityButtonClicked(); break;
        case 12: slotLevelListClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 13: slotLevelAllClicked(); break;
        case 14: slotLevelNoneClicked(); break;
        case 15: slotLevelInvertClicked(); break;
        case 16: slotLevelByGroupClicked(); break;
        case 17: accept(); break;
        default: ;
        }
        _id -= 18;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
