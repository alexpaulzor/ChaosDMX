/****************************************************************************
** Meta object code from reading C++ file 'vcslider.h'
**
** Created: Sun Dec 12 05:58:44 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "vcslider.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vcslider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VCSlider[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   10,    9,    9, 0x0a,
      52,   42,    9,    9, 0x0a,
      98,   89,    9,    9, 0x0a,
     141,  134,    9,    9, 0x09,
     180,  174,    9,    9, 0x0a,
     201,    9,    9,    9, 0x0a,
     247,  224,    9,    9, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_VCSlider[] = {
    "VCSlider\0\0mode\0slotModeChanged(Doc::Mode)\0"
    "bus,value\0slotBusValueChanged(quint32,quint32)\0"
    "bus,name\0slotBusNameChanged(quint32,QString)\0"
    "fxi_id\0slotFixtureRemoved(t_fixture_id)\0"
    "value\0slotSliderMoved(int)\0"
    "slotTapButtonClicked()\0universe,channel,value\0"
    "slotInputValueChanged(quint32,quint32,uchar)\0"
};

const QMetaObject VCSlider::staticMetaObject = {
    { &VCWidget::staticMetaObject, qt_meta_stringdata_VCSlider,
      qt_meta_data_VCSlider, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VCSlider::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VCSlider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VCSlider::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VCSlider))
        return static_cast<void*>(const_cast< VCSlider*>(this));
    if (!strcmp(_clname, "DMXSource"))
        return static_cast< DMXSource*>(const_cast< VCSlider*>(this));
    return VCWidget::qt_metacast(_clname);
}

int VCSlider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VCWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: slotModeChanged((*reinterpret_cast< Doc::Mode(*)>(_a[1]))); break;
        case 1: slotBusValueChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 2: slotBusNameChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: slotFixtureRemoved((*reinterpret_cast< t_fixture_id(*)>(_a[1]))); break;
        case 4: slotSliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: slotTapButtonClicked(); break;
        case 6: slotInputValueChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< uchar(*)>(_a[3]))); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
