/****************************************************************************
** Meta object code from reading C++ file 'outputmanager.h'
**
** Created: Sun Dec 12 05:58:30 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "outputmanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'outputmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OutputManager[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   15,   14,   14, 0x09,
      51,   47,   14,   14, 0x09,
      77,   14,   14,   14, 0x09,
     110,   14,   14,   14, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_OutputManager[] = {
    "OutputManager\0\0mode\0slotModeChanged(Doc::Mode)\0"
    "doc\0slotDocumentChanged(Doc*)\0"
    "slotPluginConfigurationChanged()\0"
    "slotEditClicked()\0"
};

const QMetaObject OutputManager::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_OutputManager,
      qt_meta_data_OutputManager, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OutputManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OutputManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OutputManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OutputManager))
        return static_cast<void*>(const_cast< OutputManager*>(this));
    return QWidget::qt_metacast(_clname);
}

int OutputManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: slotModeChanged((*reinterpret_cast< Doc::Mode(*)>(_a[1]))); break;
        case 1: slotDocumentChanged((*reinterpret_cast< Doc*(*)>(_a[1]))); break;
        case 2: slotPluginConfigurationChanged(); break;
        case 3: slotEditClicked(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
