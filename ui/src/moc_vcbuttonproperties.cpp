/****************************************************************************
** Meta object code from reading C++ file 'vcbuttonproperties.h'
**
** Created: Sun Dec 12 05:58:36 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "vcbuttonproperties.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vcbuttonproperties.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VCButtonProperties[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x09,
      45,   41,   19,   19, 0x09,
      76,   19,   19,   19, 0x29,
      94,   19,   19,   19, 0x09,
     110,   19,   19,   19, 0x09,
     134,  126,   19,   19, 0x09,
     184,  167,   19,   19, 0x09,
     223,   19,   19,   19, 0x09,
     248,   19,   19,   19, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_VCButtonProperties[] = {
    "VCButtonProperties\0\0slotAttachFunction()\0"
    "fid\0slotSetFunction(t_function_id)\0"
    "slotSetFunction()\0slotAttachKey()\0"
    "slotDetachKey()\0checked\0"
    "slotAutoDetectInputToggled(bool)\0"
    "universe,channel\0"
    "slotInputValueChanged(quint32,quint32)\0"
    "slotChooseInputClicked()\0accept()\0"
};

const QMetaObject VCButtonProperties::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_VCButtonProperties,
      qt_meta_data_VCButtonProperties, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VCButtonProperties::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VCButtonProperties::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VCButtonProperties::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VCButtonProperties))
        return static_cast<void*>(const_cast< VCButtonProperties*>(this));
    if (!strcmp(_clname, "Ui_VCButtonProperties"))
        return static_cast< Ui_VCButtonProperties*>(const_cast< VCButtonProperties*>(this));
    return QDialog::qt_metacast(_clname);
}

int VCButtonProperties::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: slotAttachFunction(); break;
        case 1: slotSetFunction((*reinterpret_cast< t_function_id(*)>(_a[1]))); break;
        case 2: slotSetFunction(); break;
        case 3: slotAttachKey(); break;
        case 4: slotDetachKey(); break;
        case 5: slotAutoDetectInputToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: slotInputValueChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 7: slotChooseInputClicked(); break;
        case 8: accept(); break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
