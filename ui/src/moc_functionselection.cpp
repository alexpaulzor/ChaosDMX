/****************************************************************************
** Meta object code from reading C++ file 'functionselection.h'
**
** Created: Sun Dec 12 05:58:20 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "functionselection.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'functionselection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FunctionSelection[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x09,
      34,   18,   18,   18, 0x09,
      50,   18,   18,   18, 0x09,
      63,   18,   18,   18, 0x09,
      83,   18,   18,   18, 0x09,
     115,  110,   18,   18, 0x09,
     161,  155,   18,   18, 0x09,
     189,  155,   18,   18, 0x09,
     210,  155,   18,   18, 0x09,
     234,  155,   18,   18, 0x09,
     257,   18,   18,   18, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_FunctionSelection[] = {
    "FunctionSelection\0\0slotNewScene()\0"
    "slotNewChaser()\0slotNewEFX()\0"
    "slotNewCollection()\0slotItemSelectionChanged()\0"
    "item\0slotItemDoubleClicked(QTreeWidgetItem*)\0"
    "state\0slotCollectionChecked(bool)\0"
    "slotEFXChecked(bool)\0slotChaserChecked(bool)\0"
    "slotSceneChecked(bool)\0accept()\0"
};

const QMetaObject FunctionSelection::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_FunctionSelection,
      qt_meta_data_FunctionSelection, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FunctionSelection::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FunctionSelection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FunctionSelection::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FunctionSelection))
        return static_cast<void*>(const_cast< FunctionSelection*>(this));
    if (!strcmp(_clname, "Ui_FunctionSelection"))
        return static_cast< Ui_FunctionSelection*>(const_cast< FunctionSelection*>(this));
    return QDialog::qt_metacast(_clname);
}

int FunctionSelection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: slotNewScene(); break;
        case 1: slotNewChaser(); break;
        case 2: slotNewEFX(); break;
        case 3: slotNewCollection(); break;
        case 4: slotItemSelectionChanged(); break;
        case 5: slotItemDoubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 6: slotCollectionChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: slotEFXChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: slotChaserChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: slotSceneChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: accept(); break;
        default: ;
        }
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
