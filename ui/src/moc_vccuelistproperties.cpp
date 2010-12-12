/****************************************************************************
** Meta object code from reading C++ file 'vccuelistproperties.h'
**
** Created: Sun Dec 12 05:58:38 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "vccuelistproperties.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vccuelistproperties.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VCCueListProperties[] = {

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
      21,   20,   20,   20, 0x0a,
      30,   20,   20,   20, 0x0a,
      47,   20,   20,   20, 0x09,
      67,   20,   20,   20, 0x09,
      87,   20,   20,   20, 0x09,
     111,   20,   20,   20, 0x09,
     135,   20,   20,   20, 0x09,
     170,  164,   20,   20, 0x09,
     214,  207,   20,   20, 0x09,
     257,   20,   20,   20, 0x09,
     285,   20,   20,   20, 0x09,
     313,   20,   20,   20, 0x09,
     346,  164,   20,   20, 0x09,
     387,  207,   20,   20, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_VCCueListProperties[] = {
    "VCCueListProperties\0\0accept()\0"
    "slotTabChanged()\0slotAttachClicked()\0"
    "slotDetachClicked()\0slotNextAttachClicked()\0"
    "slotNextDetachClicked()\0"
    "slotNextChooseInputClicked()\0state\0"
    "slotNextAutoDetectInputToggled(bool)\0"
    "uni,ch\0slotNextInputValueChanged(quint32,quint32)\0"
    "slotPreviousAttachClicked()\0"
    "slotPreviousDetachClicked()\0"
    "slotPreviousChooseInputClicked()\0"
    "slotPreviousAutoDetectInputToggled(bool)\0"
    "slotPreviousInputValueChanged(quint32,quint32)\0"
};

const QMetaObject VCCueListProperties::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_VCCueListProperties,
      qt_meta_data_VCCueListProperties, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VCCueListProperties::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VCCueListProperties::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VCCueListProperties::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VCCueListProperties))
        return static_cast<void*>(const_cast< VCCueListProperties*>(this));
    if (!strcmp(_clname, "Ui_VCCueListProperties"))
        return static_cast< Ui_VCCueListProperties*>(const_cast< VCCueListProperties*>(this));
    return QDialog::qt_metacast(_clname);
}

int VCCueListProperties::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: accept(); break;
        case 1: slotTabChanged(); break;
        case 2: slotAttachClicked(); break;
        case 3: slotDetachClicked(); break;
        case 4: slotNextAttachClicked(); break;
        case 5: slotNextDetachClicked(); break;
        case 6: slotNextChooseInputClicked(); break;
        case 7: slotNextAutoDetectInputToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: slotNextInputValueChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 9: slotPreviousAttachClicked(); break;
        case 10: slotPreviousDetachClicked(); break;
        case 11: slotPreviousChooseInputClicked(); break;
        case 12: slotPreviousAutoDetectInputToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: slotPreviousInputValueChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
