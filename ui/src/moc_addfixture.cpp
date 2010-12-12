/****************************************************************************
** Meta object code from reading C++ file 'addfixture.h'
**
** Created: Sun Dec 12 05:58:04 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "addfixture.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addfixture.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AddFixture[] = {

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
      21,   12,   11,   11, 0x09,
      57,   48,   11,   11, 0x09,
      90,   84,   11,   11, 0x09,
     114,   84,   11,   11, 0x09,
     139,   11,   11,   11, 0x09,
     167,  162,   11,   11, 0x09,
     212,  207,   11,   11, 0x09,
     236,   84,   11,   11, 0x09,
     263,   84,   11,   11, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_AddFixture[] = {
    "AddFixture\0\0modeName\0slotModeActivated(QString)\0"
    "universe\0slotUniverseActivated(int)\0"
    "value\0slotAddressChanged(int)\0"
    "slotChannelsChanged(int)\0"
    "slotSelectionChanged()\0item\0"
    "slotTreeDoubleClicked(QTreeWidgetItem*)\0"
    "text\0slotNameEdited(QString)\0"
    "slotAmountSpinChanged(int)\0"
    "slotGapSpinChanged(int)\0"
};

const QMetaObject AddFixture::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddFixture,
      qt_meta_data_AddFixture, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AddFixture::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AddFixture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AddFixture::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddFixture))
        return static_cast<void*>(const_cast< AddFixture*>(this));
    if (!strcmp(_clname, "Ui_AddFixture"))
        return static_cast< Ui_AddFixture*>(const_cast< AddFixture*>(this));
    return QDialog::qt_metacast(_clname);
}

int AddFixture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: slotModeActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: slotUniverseActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: slotAddressChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: slotChannelsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: slotSelectionChanged(); break;
        case 5: slotTreeDoubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 6: slotNameEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: slotAmountSpinChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: slotGapSpinChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
