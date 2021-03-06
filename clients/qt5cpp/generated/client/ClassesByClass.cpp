/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "ClassesByClass.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

ClassesByClass::ClassesByClass(QString* json) {
    init();
    this->fromJson(*json);
}

ClassesByClass::ClassesByClass() {
    init();
}

ClassesByClass::~ClassesByClass() {
    this->cleanup();
}

void
ClassesByClass::init() {
    classes = new QList<QString*>();
    _class = new QString("");
}

void
ClassesByClass::cleanup() {
    
    if(classes != nullptr) {
        QList<QString*>* arr = classes;
        foreach(QString* o, *arr) {
            delete o;
        }
        delete classes;
    }

    if(_class != nullptr) {
        delete _class;
    }
}

ClassesByClass*
ClassesByClass::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
ClassesByClass::fromJsonObject(QJsonObject &pJson) {
    
    ::Swagger::setValue(&classes, pJson["classes"], "QList", "QString");
    
    ::Swagger::setValue(&_class, pJson["_class"], "QString", "QString");
}

QString
ClassesByClass::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
ClassesByClass::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    QJsonArray classesJsonArray;
    toJsonArray((QList<void*>*)classes, &classesJsonArray, "classes", "QString");
    obj->insert("classes", classesJsonArray);

    toJsonValue(QString("_class"), _class, obj, QString("QString"));

    return obj;
}

QList<QString*>*
ClassesByClass::getClasses() {
    return classes;
}
void
ClassesByClass::setClasses(QList<QString*>* classes) {
    this->classes = classes;
}

QString*
ClassesByClass::getClass() {
    return _class;
}
void
ClassesByClass::setClass(QString* _class) {
    this->_class = _class;
}


}

