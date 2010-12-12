/****************************************************************************
** Meta object code from reading C++ file 'fixtureconsole.h'
**
** Created: Sun Dec 12 05:58:16 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "fixtureconsole.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fixtureconsole.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FixtureConsole[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      42,   16,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
     110,   88,   15,   15, 0x09,
     160,  147,   15,   15, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_FixtureConsole[] = {
    "FixtureConsole\0\0fxi,channel,value,enabled\0"
    "valueChanged(t_fixture_id,quint32,uchar,bool)\0"
    "channel,value,enabled\0"
    "slotValueChanged(quint32,uchar,bool)\0"
    "uni,ch,value\0slotInputValueChanged(quint32,quint32,uchar)\0"
};

const QMetaObject FixtureConsole::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FixtureConsole,
      qt_meta_data_FixtureConsole, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FixtureConsole::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FixtureConsole::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FixtureConsole::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FixtureConsole))
        return static_cast<void*>(const_cast< FixtureConsole*>(this));
    return QWidget::qt_metacast(_clname);
}

int FixtureConsole::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: valueChanged((*reinterpret_cast< t_fixture_id(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< uchar(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 1: slotValueChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< uchar(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 2: slotInputValueChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< uchar(*)>(_a[3]))); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void FixtureConsole::valueChanged(t_fixture_id _t1, quint32 _t2, uchar _t3, bool _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
