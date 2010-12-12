/****************************************************************************
** Meta object code from reading C++ file 'fixturemanager.h'
**
** Created: Sun Dec 12 05:58:17 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "fixturemanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fixturemanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FixtureManager[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   16,   15,   15, 0x0a,
      49,   46,   15,   15, 0x0a,
      80,   46,   15,   15, 0x0a,
     118,  113,   15,   15, 0x0a,
     145,   15,   15,   15, 0x09,
     173,  168,   15,   15, 0x09,
     209,   15,   15,   15, 0x09,
     219,   15,   15,   15, 0x09,
     232,   15,   15,   15, 0x09,
     253,  249,   15,   15, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_FixtureManager[] = {
    "FixtureManager\0\0doc\0slotDocumentChanged(Doc*)\0"
    "id\0slotFixtureAdded(t_fixture_id)\0"
    "slotFixtureRemoved(t_fixture_id)\0mode\0"
    "slotModeChanged(Doc::Mode)\0"
    "slotSelectionChanged()\0item\0"
    "slotDoubleClicked(QTreeWidgetItem*)\0"
    "slotAdd()\0slotRemove()\0slotProperties()\0"
    "pos\0slotContextMenuRequested(QPoint)\0"
};

const QMetaObject FixtureManager::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FixtureManager,
      qt_meta_data_FixtureManager, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FixtureManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FixtureManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FixtureManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FixtureManager))
        return static_cast<void*>(const_cast< FixtureManager*>(this));
    return QWidget::qt_metacast(_clname);
}

int FixtureManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: slotDocumentChanged((*reinterpret_cast< Doc*(*)>(_a[1]))); break;
        case 1: slotFixtureAdded((*reinterpret_cast< t_fixture_id(*)>(_a[1]))); break;
        case 2: slotFixtureRemoved((*reinterpret_cast< t_fixture_id(*)>(_a[1]))); break;
        case 3: slotModeChanged((*reinterpret_cast< Doc::Mode(*)>(_a[1]))); break;
        case 4: slotSelectionChanged(); break;
        case 5: slotDoubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 6: slotAdd(); break;
        case 7: slotRemove(); break;
        case 8: slotProperties(); break;
        case 9: slotContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
