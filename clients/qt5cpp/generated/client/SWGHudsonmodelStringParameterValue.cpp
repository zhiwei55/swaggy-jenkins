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


#include "SWGHudsonmodelStringParameterValue.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

SWGHudsonmodelStringParameterValue::SWGHudsonmodelStringParameterValue(QString* json) {
    init();
    this->fromJson(*json);
}

SWGHudsonmodelStringParameterValue::SWGHudsonmodelStringParameterValue() {
    init();
}

SWGHudsonmodelStringParameterValue::~SWGHudsonmodelStringParameterValue() {
    this->cleanup();
}

void
SWGHudsonmodelStringParameterValue::init() {
    _class = new QString("");
    name = new QString("");
    value = new QString("");
}

void
SWGHudsonmodelStringParameterValue::cleanup() {
    
    if(_class != nullptr) {
        delete _class;
    }

    if(name != nullptr) {
        delete name;
    }

    if(value != nullptr) {
        delete value;
    }
}

SWGHudsonmodelStringParameterValue*
SWGHudsonmodelStringParameterValue::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGHudsonmodelStringParameterValue::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&_class, pJson["_class"], "QString", "QString");
    ::Swagger::setValue(&name, pJson["name"], "QString", "QString");
    ::Swagger::setValue(&value, pJson["value"], "QString", "QString");
}

QString
SWGHudsonmodelStringParameterValue::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGHudsonmodelStringParameterValue::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("_class"), _class, obj, QString("QString"));

    toJsonValue(QString("name"), name, obj, QString("QString"));

    toJsonValue(QString("value"), value, obj, QString("QString"));

    return obj;
}

QString*
SWGHudsonmodelStringParameterValue::getClass() {
    return _class;
}
void
SWGHudsonmodelStringParameterValue::setClass(QString* _class) {
    this->_class = _class;
}

QString*
SWGHudsonmodelStringParameterValue::getName() {
    return name;
}
void
SWGHudsonmodelStringParameterValue::setName(QString* name) {
    this->name = name;
}

QString*
SWGHudsonmodelStringParameterValue::getValue() {
    return value;
}
void
SWGHudsonmodelStringParameterValue::setValue(QString* value) {
    this->value = value;
}


}
