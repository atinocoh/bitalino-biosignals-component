/****************************************************************************
** Meta object code from reading C++ file 'dialogomac.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dialogomac.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialogomac.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DialogoMac[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      36,   11,   11,   11, 0x0a,
      52,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DialogoMac[] = {
    "DialogoMac\0\0macIntroducida(QString)\0"
    "accionAceptar()\0accionCancelar()\0"
};

void DialogoMac::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DialogoMac *_t = static_cast<DialogoMac *>(_o);
        switch (_id) {
        case 0: _t->macIntroducida((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->accionAceptar(); break;
        case 2: _t->accionCancelar(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DialogoMac::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DialogoMac::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DialogoMac,
      qt_meta_data_DialogoMac, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DialogoMac::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DialogoMac::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DialogoMac::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DialogoMac))
        return static_cast<void*>(const_cast< DialogoMac*>(this));
    return QDialog::qt_metacast(_clname);
}

int DialogoMac::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void DialogoMac::macIntroducida(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
