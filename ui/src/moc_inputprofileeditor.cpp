/****************************************************************************
** Meta object code from reading C++ file 'inputprofileeditor.h'
**
** Created: Sun Dec 12 05:58:25 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "inputprofileeditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inputprofileeditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_InputProfileEditor[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x0a,
      29,   19,   19,   19, 0x0a,
      38,   19,   19,   19, 0x09,
      55,   19,   19,   19, 0x09,
      75,   19,   19,   19, 0x09,
     101,   93,   19,   19, 0x09,
     148,  125,   19,   19, 0x09,
     193,   19,   19,   19, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_InputProfileEditor[] = {
    "InputProfileEditor\0\0reject()\0accept()\0"
    "slotAddClicked()\0slotRemoveClicked()\0"
    "slotEditClicked()\0checked\0"
    "slotWizardClicked(bool)\0universe,channel,value\0"
    "slotInputValueChanged(quint32,quint32,uchar)\0"
    "slotTimerTimeout()\0"
};

const QMetaObject InputProfileEditor::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_InputProfileEditor,
      qt_meta_data_InputProfileEditor, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &InputProfileEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *InputProfileEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *InputProfileEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InputProfileEditor))
        return static_cast<void*>(const_cast< InputProfileEditor*>(this));
    if (!strcmp(_clname, "Ui_InputProfileEditor"))
        return static_cast< Ui_InputProfileEditor*>(const_cast< InputProfileEditor*>(this));
    return QDialog::qt_metacast(_clname);
}

int InputProfileEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: reject(); break;
        case 1: accept(); break;
        case 2: slotAddClicked(); break;
        case 3: slotRemoveClicked(); break;
        case 4: slotEditClicked(); break;
        case 5: slotWizardClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: slotInputValueChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< uchar(*)>(_a[3]))); break;
        case 7: slotTimerTimeout(); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
