/****************************************************************************
** Meta object code from reading C++ file 'vcxypadproperties.h'
**
** Created: Sun Dec 12 05:58:50 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "vcxypadproperties.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vcxypadproperties.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VCXYPadProperties[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x09,
      36,   18,   18,   18, 0x09,
      56,   18,   18,   18, 0x09,
      79,   74,   18,   18, 0x09,
     118,   18,   18,   18, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_VCXYPadProperties[] = {
    "VCXYPadProperties\0\0slotAddClicked()\0"
    "slotRemoveClicked()\0slotEditClicked()\0"
    "item\0slotSelectionChanged(QTreeWidgetItem*)\0"
    "accept()\0"
};

const QMetaObject VCXYPadProperties::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_VCXYPadProperties,
      qt_meta_data_VCXYPadProperties, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VCXYPadProperties::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VCXYPadProperties::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VCXYPadProperties::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VCXYPadProperties))
        return static_cast<void*>(const_cast< VCXYPadProperties*>(this));
    if (!strcmp(_clname, "Ui_VCXYPadProperties"))
        return static_cast< Ui_VCXYPadProperties*>(const_cast< VCXYPadProperties*>(this));
    return QDialog::qt_metacast(_clname);
}

int VCXYPadProperties::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: slotAddClicked(); break;
        case 1: slotRemoveClicked(); break;
        case 2: slotEditClicked(); break;
        case 3: slotSelectionChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 4: accept(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
