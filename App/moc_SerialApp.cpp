/****************************************************************************
** Meta object code from reading C++ file 'SerialApp.h'
**
** Created: Fri Nov 23 00:05:45 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "SerialApp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SerialApp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SerialApp[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      34,   10,   10,   10, 0x0a,
      41,   10,   10,   10, 0x0a,
      49,   10,   10,   10, 0x0a,
      62,   56,   10,   10, 0x0a,
      87,   10,   10,   10, 0x0a,
      95,   10,   10,   10, 0x0a,
     112,   10,   10,   10, 0x0a,
     119,   10,   10,   10, 0x0a,
     144,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SerialApp[] = {
    "SerialApp\0\0showPlotButtonSignal()\0"
    "open()\0close()\0send()\0array\0"
    "dataReceived(QByteArray)\0clear()\0"
    "refreshDevices()\0save()\0"
    "closeEvent(QCloseEvent*)\0showPlotButtonSlot()\0"
};

void SerialApp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SerialApp *_t = static_cast<SerialApp *>(_o);
        switch (_id) {
        case 0: _t->showPlotButtonSignal(); break;
        case 1: _t->open(); break;
        case 2: _t->close(); break;
        case 3: _t->send(); break;
        case 4: _t->dataReceived((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 5: _t->clear(); break;
        case 6: _t->refreshDevices(); break;
        case 7: _t->save(); break;
        case 8: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 9: _t->showPlotButtonSlot(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SerialApp::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SerialApp::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SerialApp,
      qt_meta_data_SerialApp, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SerialApp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SerialApp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SerialApp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SerialApp))
        return static_cast<void*>(const_cast< SerialApp*>(this));
    return QWidget::qt_metacast(_clname);
}

int SerialApp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void SerialApp::showPlotButtonSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
