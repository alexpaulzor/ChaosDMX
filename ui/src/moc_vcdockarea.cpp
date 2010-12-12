/****************************************************************************
** Meta object code from reading C++ file 'vcdockarea.h'
**
** Created: Sun Dec 12 05:58:39 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "vcdockarea.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vcdockarea.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VCDockArea[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   12,   11,   11, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_VCDockArea[] = {
    "VCDockArea\0\0isVisible\0visibilityChanged(bool)\0"
};

const QMetaObject VCDockArea::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_VCDockArea,
      qt_meta_data_VCDockArea, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VCDockArea::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VCDockArea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VCDockArea::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VCDockArea))
        return static_cast<void*>(const_cast< VCDockArea*>(this));
    return QFrame::qt_metacast(_clname);
}

int VCDockArea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: visibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void VCDockArea::visibilityChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
