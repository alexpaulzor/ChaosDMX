/****************************************************************************
** Meta object code from reading C++ file 'docbrowser.h'
**
** Created: Sun Dec 12 05:58:13 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "docbrowser.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'docbrowser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QLCTextBrowser[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_QLCTextBrowser[] = {
    "QLCTextBrowser\0"
};

const QMetaObject QLCTextBrowser::staticMetaObject = {
    { &QTextBrowser::staticMetaObject, qt_meta_stringdata_QLCTextBrowser,
      qt_meta_data_QLCTextBrowser, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QLCTextBrowser::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QLCTextBrowser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QLCTextBrowser::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QLCTextBrowser))
        return static_cast<void*>(const_cast< QLCTextBrowser*>(this));
    return QTextBrowser::qt_metacast(_clname);
}

int QLCTextBrowser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextBrowser::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_DocBrowser[] = {

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
      12,   11,   11,   11, 0x09,
      40,   11,   11,   11, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_DocBrowser[] = {
    "DocBrowser\0\0slotBackwardAvailable(bool)\0"
    "slotForwardAvailable(bool)\0"
};

const QMetaObject DocBrowser::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_DocBrowser,
      qt_meta_data_DocBrowser, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DocBrowser::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DocBrowser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DocBrowser::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DocBrowser))
        return static_cast<void*>(const_cast< DocBrowser*>(this));
    return QWidget::qt_metacast(_clname);
}

int DocBrowser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: slotBackwardAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: slotForwardAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
