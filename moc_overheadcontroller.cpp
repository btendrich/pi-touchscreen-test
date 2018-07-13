/****************************************************************************
** Meta object code from reading C++ file 'overheadcontroller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "overheadcontroller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'overheadcontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OverheadController_t {
    QByteArrayData data[13];
    char stringdata0[224];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OverheadController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OverheadController_t qt_meta_stringdata_OverheadController = {
    {
QT_MOC_LITERAL(0, 0, 18), // "OverheadController"
QT_MOC_LITERAL(1, 19, 11), // "updateImage"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 7), // "QImage*"
QT_MOC_LITERAL(4, 40, 5), // "image"
QT_MOC_LITERAL(5, 46, 16), // "updateImageLabel"
QT_MOC_LITERAL(6, 63, 5), // "label"
QT_MOC_LITERAL(7, 69, 33), // "latestCaptureRequestReplyFini..."
QT_MOC_LITERAL(8, 103, 14), // "QNetworkReply*"
QT_MOC_LITERAL(9, 118, 5), // "reply"
QT_MOC_LITERAL(10, 124, 32), // "latestCaptureRequestTimerTimeout"
QT_MOC_LITERAL(11, 157, 31), // "updateImageRequestReplyFinished"
QT_MOC_LITERAL(12, 189, 34) // "utilityRequestManagerReplyFin..."

    },
    "OverheadController\0updateImage\0\0QImage*\0"
    "image\0updateImageLabel\0label\0"
    "latestCaptureRequestReplyFinished\0"
    "QNetworkReply*\0reply\0"
    "latestCaptureRequestTimerTimeout\0"
    "updateImageRequestReplyFinished\0"
    "utilityRequestManagerReplyFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OverheadController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       5,    1,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   50,    2, 0x0a /* Public */,
      10,    0,   53,    2, 0x0a /* Public */,
      11,    1,   54,    2, 0x0a /* Public */,
      12,    1,   57,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void OverheadController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OverheadController *_t = static_cast<OverheadController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateImage((*reinterpret_cast< QImage*(*)>(_a[1]))); break;
        case 1: _t->updateImageLabel((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->latestCaptureRequestReplyFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 3: _t->latestCaptureRequestTimerTimeout(); break;
        case 4: _t->updateImageRequestReplyFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 5: _t->utilityRequestManagerReplyFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (OverheadController::*_t)(QImage * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OverheadController::updateImage)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (OverheadController::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OverheadController::updateImageLabel)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject OverheadController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OverheadController.data,
      qt_meta_data_OverheadController,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OverheadController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OverheadController::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OverheadController.stringdata0))
        return static_cast<void*>(const_cast< OverheadController*>(this));
    return QObject::qt_metacast(_clname);
}

int OverheadController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void OverheadController::updateImage(QImage * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OverheadController::updateImageLabel(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
