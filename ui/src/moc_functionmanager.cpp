/****************************************************************************
** Meta object code from reading C++ file 'functionmanager.h'
**
** Created: Sun Dec 12 05:58:19 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "functionmanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'functionmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FunctionManager[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   17,   16,   16, 0x09,
      53,   49,   16,   16, 0x09,
      79,   16,   16,   16, 0x09,
     110,  106,   16,   16, 0x09,
     154,  147,   16,   16, 0x09,
     189,  181,   16,   16, 0x09,
     225,   16,   16,   16, 0x09,
     240,   16,   16,   16, 0x09,
     256,   16,   16,   16, 0x09,
     276,   16,   16,   16, 0x09,
     289,   16,   16,   16, 0x09,
     306,   16,  302,   16, 0x09,
     317,   16,   16,   16, 0x09,
     329,   16,   16,   16, 0x09,
     342,   16,   16,   16, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_FunctionManager[] = {
    "FunctionManager\0\0mode\0slotModeChanged(Doc::Mode)\0"
    "doc\0slotDocumentChanged(Doc*)\0"
    "slotTreeSelectionChanged()\0pos\0"
    "slotTreeContextMenuRequested(QPoint)\0"
    "action\0slotBusTriggered(QAction*)\0"
    "id,name\0slotBusNameChanged(quint32,QString)\0"
    "slotAddScene()\0slotAddChaser()\0"
    "slotAddCollection()\0slotAddEFX()\0"
    "slotWizard()\0int\0slotEdit()\0slotClone()\0"
    "slotDelete()\0slotSelectAll()\0"
};

const QMetaObject FunctionManager::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FunctionManager,
      qt_meta_data_FunctionManager, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FunctionManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FunctionManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FunctionManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FunctionManager))
        return static_cast<void*>(const_cast< FunctionManager*>(this));
    return QWidget::qt_metacast(_clname);
}

int FunctionManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: slotModeChanged((*reinterpret_cast< Doc::Mode(*)>(_a[1]))); break;
        case 1: slotDocumentChanged((*reinterpret_cast< Doc*(*)>(_a[1]))); break;
        case 2: slotTreeSelectionChanged(); break;
        case 3: slotTreeContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 4: slotBusTriggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 5: slotBusNameChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: slotAddScene(); break;
        case 7: slotAddChaser(); break;
        case 8: slotAddCollection(); break;
        case 9: slotAddEFX(); break;
        case 10: slotWizard(); break;
        case 11: { int _r = slotEdit();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 12: slotClone(); break;
        case 13: slotDelete(); break;
        case 14: slotSelectAll(); break;
        default: ;
        }
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
