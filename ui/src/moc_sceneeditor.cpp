/****************************************************************************
** Meta object code from reading C++ file 'sceneeditor.h'
**
** Created: Sun Dec 12 05:58:32 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "sceneeditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sceneeditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SceneEditor[] = {

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
      18,   13,   12,   12, 0x09,
      48,   42,   12,   12, 0x09,
      75,   12,   12,   12, 0x09,
      88,   84,   12,   12, 0x09,
     108,   12,   12,   12, 0x09,
     124,   12,   12,   12, 0x09,
     141,   12,   12,   12, 0x09,
     161,   12,   12,   12, 0x09,
     182,   12,   12,   12, 0x09,
     193,   12,   12,   12, 0x09,
     205,   12,   12,   12, 0x09,
     221,   12,   12,   12, 0x09,
     237,   12,   12,   12, 0x09,
     261,   12,   12,   12, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_SceneEditor[] = {
    "SceneEditor\0\0name\0slotNameEdited(QString)\0"
    "index\0slotBusComboActivated(int)\0"
    "accept()\0tab\0slotTabChanged(int)\0"
    "slotEnableAll()\0slotDisableAll()\0"
    "slotEnableCurrent()\0slotDisableCurrent()\0"
    "slotCopy()\0slotPaste()\0slotCopyToAll()\0"
    "slotColorTool()\0slotAddFixtureClicked()\0"
    "slotRemoveFixtureClicked()\0"
};

const QMetaObject SceneEditor::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SceneEditor,
      qt_meta_data_SceneEditor, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SceneEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SceneEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SceneEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SceneEditor))
        return static_cast<void*>(const_cast< SceneEditor*>(this));
    if (!strcmp(_clname, "Ui_SceneEditor"))
        return static_cast< Ui_SceneEditor*>(const_cast< SceneEditor*>(this));
    return QDialog::qt_metacast(_clname);
}

int SceneEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: slotNameEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: slotBusComboActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: accept(); break;
        case 3: slotTabChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: slotEnableAll(); break;
        case 5: slotDisableAll(); break;
        case 6: slotEnableCurrent(); break;
        case 7: slotDisableCurrent(); break;
        case 8: slotCopy(); break;
        case 9: slotPaste(); break;
        case 10: slotCopyToAll(); break;
        case 11: slotColorTool(); break;
        case 12: slotAddFixtureClicked(); break;
        case 13: slotRemoveFixtureClicked(); break;
        default: ;
        }
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
