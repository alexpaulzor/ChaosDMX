/****************************************************************************
** Meta object code from reading C++ file 'fixtureselection.h'
**
** Created: Sun Dec 12 05:58:18 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "fixtureselection.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fixtureselection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FixtureSelection[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   18,   17,   17, 0x09,
      63,   17,   17,   17, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_FixtureSelection[] = {
    "FixtureSelection\0\0item\0"
    "slotItemDoubleClicked(QTreeWidgetItem*)\0"
    "accept()\0"
};

const QMetaObject FixtureSelection::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_FixtureSelection,
      qt_meta_data_FixtureSelection, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FixtureSelection::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FixtureSelection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FixtureSelection::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FixtureSelection))
        return static_cast<void*>(const_cast< FixtureSelection*>(this));
    if (!strcmp(_clname, "Ui_FixtureSelection"))
        return static_cast< Ui_FixtureSelection*>(const_cast< FixtureSelection*>(this));
    return QDialog::qt_metacast(_clname);
}

int FixtureSelection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: slotItemDoubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 1: accept(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
