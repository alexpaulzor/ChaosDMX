/****************************************************************************
** Meta object code from reading C++ file 'inputpatcheditor.h'
**
** Created: Sun Dec 12 05:58:27 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "inputpatcheditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inputpatcheditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_InputPatchEditor[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x09,
      27,   17,   17,   17, 0x09,
      41,   36,   17,   17, 0x09,
      85,   36,   17,   17, 0x09,
     122,   17,   17,   17, 0x09,
     150,   17,   17,   17, 0x09,
     180,  173,   17,   17, 0x09,
     217,  206,   17,   17, 0x09,
     257,   36,   17,   17, 0x09,
     298,   17,   17,   17, 0x09,
     322,   17,   17,   17, 0x09,
     349,   17,   17,   17, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_InputPatchEditor[] = {
    "InputPatchEditor\0\0reject()\0accept()\0"
    "item\0slotMapCurrentItemChanged(QTreeWidgetItem*)\0"
    "slotMapItemChanged(QTreeWidgetItem*)\0"
    "slotConfigureInputClicked()\0"
    "slotReconnectClicked()\0enable\0"
    "slotFeedbackToggled(bool)\0pluginName\0"
    "slotPluginConfigurationChanged(QString)\0"
    "slotProfileItemChanged(QTreeWidgetItem*)\0"
    "slotAddProfileClicked()\0"
    "slotRemoveProfileClicked()\0"
    "slotEditProfileClicked()\0"
};

const QMetaObject InputPatchEditor::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_InputPatchEditor,
      qt_meta_data_InputPatchEditor, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &InputPatchEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *InputPatchEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *InputPatchEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InputPatchEditor))
        return static_cast<void*>(const_cast< InputPatchEditor*>(this));
    if (!strcmp(_clname, "Ui_InputPatchEditor"))
        return static_cast< Ui_InputPatchEditor*>(const_cast< InputPatchEditor*>(this));
    return QDialog::qt_metacast(_clname);
}

int InputPatchEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: reject(); break;
        case 1: accept(); break;
        case 2: slotMapCurrentItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 3: slotMapItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 4: slotConfigureInputClicked(); break;
        case 5: slotReconnectClicked(); break;
        case 6: slotFeedbackToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: slotPluginConfigurationChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: slotProfileItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 9: slotAddProfileClicked(); break;
        case 10: slotRemoveProfileClicked(); break;
        case 11: slotEditProfileClicked(); break;
        default: ;
        }
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
