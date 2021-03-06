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


#include "GithubOrganizationlinks.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

GithubOrganizationlinks::GithubOrganizationlinks(QString* json) {
    init();
    this->fromJson(*json);
}

GithubOrganizationlinks::GithubOrganizationlinks() {
    init();
}

GithubOrganizationlinks::~GithubOrganizationlinks() {
    this->cleanup();
}

void
GithubOrganizationlinks::init() {
    repositories = new Link();
    self = new Link();
    _class = new QString("");
}

void
GithubOrganizationlinks::cleanup() {
    
    if(repositories != nullptr) {
        delete repositories;
    }

    if(self != nullptr) {
        delete self;
    }

    if(_class != nullptr) {
        delete _class;
    }
}

GithubOrganizationlinks*
GithubOrganizationlinks::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
GithubOrganizationlinks::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&repositories, pJson["repositories"], "Link", "Link");
    ::Swagger::setValue(&self, pJson["self"], "Link", "Link");
    ::Swagger::setValue(&_class, pJson["_class"], "QString", "QString");
}

QString
GithubOrganizationlinks::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
GithubOrganizationlinks::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("repositories"), repositories, obj, QString("Link"));

    toJsonValue(QString("self"), self, obj, QString("Link"));

    toJsonValue(QString("_class"), _class, obj, QString("QString"));

    return obj;
}

Link*
GithubOrganizationlinks::getRepositories() {
    return repositories;
}
void
GithubOrganizationlinks::setRepositories(Link* repositories) {
    this->repositories = repositories;
}

Link*
GithubOrganizationlinks::getSelf() {
    return self;
}
void
GithubOrganizationlinks::setSelf(Link* self) {
    this->self = self;
}

QString*
GithubOrganizationlinks::getClass() {
    return _class;
}
void
GithubOrganizationlinks::setClass(QString* _class) {
    this->_class = _class;
}


}

