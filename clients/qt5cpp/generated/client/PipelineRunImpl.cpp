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


#include "PipelineRunImpl.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

PipelineRunImpl::PipelineRunImpl(QString* json) {
    init();
    this->fromJson(*json);
}

PipelineRunImpl::PipelineRunImpl() {
    init();
}

PipelineRunImpl::~PipelineRunImpl() {
    this->cleanup();
}

void
PipelineRunImpl::init() {
    _class = new QString("");
    _links = new PipelineRunImpllinks();
    duration_in_millis = 0;
    en_queue_time = new QString("");
    end_time = new QString("");
    estimated_duration_in_millis = 0;
    id = new QString("");
    organization = new QString("");
    pipeline = new QString("");
    result = new QString("");
    run_summary = new QString("");
    start_time = new QString("");
    state = new QString("");
    type = new QString("");
    commit_id = new QString("");
}

void
PipelineRunImpl::cleanup() {
    
    if(_class != nullptr) {
        delete _class;
    }

    if(_links != nullptr) {
        delete _links;
    }


    if(en_queue_time != nullptr) {
        delete en_queue_time;
    }

    if(end_time != nullptr) {
        delete end_time;
    }


    if(id != nullptr) {
        delete id;
    }

    if(organization != nullptr) {
        delete organization;
    }

    if(pipeline != nullptr) {
        delete pipeline;
    }

    if(result != nullptr) {
        delete result;
    }

    if(run_summary != nullptr) {
        delete run_summary;
    }

    if(start_time != nullptr) {
        delete start_time;
    }

    if(state != nullptr) {
        delete state;
    }

    if(type != nullptr) {
        delete type;
    }

    if(commit_id != nullptr) {
        delete commit_id;
    }
}

PipelineRunImpl*
PipelineRunImpl::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
PipelineRunImpl::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&_class, pJson["_class"], "QString", "QString");
    ::Swagger::setValue(&_links, pJson["_links"], "PipelineRunImpllinks", "PipelineRunImpllinks");
    ::Swagger::setValue(&duration_in_millis, pJson["durationInMillis"], "qint32", "");
    ::Swagger::setValue(&en_queue_time, pJson["enQueueTime"], "QString", "QString");
    ::Swagger::setValue(&end_time, pJson["endTime"], "QString", "QString");
    ::Swagger::setValue(&estimated_duration_in_millis, pJson["estimatedDurationInMillis"], "qint32", "");
    ::Swagger::setValue(&id, pJson["id"], "QString", "QString");
    ::Swagger::setValue(&organization, pJson["organization"], "QString", "QString");
    ::Swagger::setValue(&pipeline, pJson["pipeline"], "QString", "QString");
    ::Swagger::setValue(&result, pJson["result"], "QString", "QString");
    ::Swagger::setValue(&run_summary, pJson["runSummary"], "QString", "QString");
    ::Swagger::setValue(&start_time, pJson["startTime"], "QString", "QString");
    ::Swagger::setValue(&state, pJson["state"], "QString", "QString");
    ::Swagger::setValue(&type, pJson["type"], "QString", "QString");
    ::Swagger::setValue(&commit_id, pJson["commitId"], "QString", "QString");
}

QString
PipelineRunImpl::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
PipelineRunImpl::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("_class"), _class, obj, QString("QString"));

    toJsonValue(QString("_links"), _links, obj, QString("PipelineRunImpllinks"));

    obj->insert("durationInMillis", QJsonValue(duration_in_millis));

    toJsonValue(QString("enQueueTime"), en_queue_time, obj, QString("QString"));

    toJsonValue(QString("endTime"), end_time, obj, QString("QString"));

    obj->insert("estimatedDurationInMillis", QJsonValue(estimated_duration_in_millis));

    toJsonValue(QString("id"), id, obj, QString("QString"));

    toJsonValue(QString("organization"), organization, obj, QString("QString"));

    toJsonValue(QString("pipeline"), pipeline, obj, QString("QString"));

    toJsonValue(QString("result"), result, obj, QString("QString"));

    toJsonValue(QString("runSummary"), run_summary, obj, QString("QString"));

    toJsonValue(QString("startTime"), start_time, obj, QString("QString"));

    toJsonValue(QString("state"), state, obj, QString("QString"));

    toJsonValue(QString("type"), type, obj, QString("QString"));

    toJsonValue(QString("commitId"), commit_id, obj, QString("QString"));

    return obj;
}

QString*
PipelineRunImpl::getClass() {
    return _class;
}
void
PipelineRunImpl::setClass(QString* _class) {
    this->_class = _class;
}

PipelineRunImpllinks*
PipelineRunImpl::getLinks() {
    return _links;
}
void
PipelineRunImpl::setLinks(PipelineRunImpllinks* _links) {
    this->_links = _links;
}

qint32
PipelineRunImpl::getDurationInMillis() {
    return duration_in_millis;
}
void
PipelineRunImpl::setDurationInMillis(qint32 duration_in_millis) {
    this->duration_in_millis = duration_in_millis;
}

QString*
PipelineRunImpl::getEnQueueTime() {
    return en_queue_time;
}
void
PipelineRunImpl::setEnQueueTime(QString* en_queue_time) {
    this->en_queue_time = en_queue_time;
}

QString*
PipelineRunImpl::getEndTime() {
    return end_time;
}
void
PipelineRunImpl::setEndTime(QString* end_time) {
    this->end_time = end_time;
}

qint32
PipelineRunImpl::getEstimatedDurationInMillis() {
    return estimated_duration_in_millis;
}
void
PipelineRunImpl::setEstimatedDurationInMillis(qint32 estimated_duration_in_millis) {
    this->estimated_duration_in_millis = estimated_duration_in_millis;
}

QString*
PipelineRunImpl::getId() {
    return id;
}
void
PipelineRunImpl::setId(QString* id) {
    this->id = id;
}

QString*
PipelineRunImpl::getOrganization() {
    return organization;
}
void
PipelineRunImpl::setOrganization(QString* organization) {
    this->organization = organization;
}

QString*
PipelineRunImpl::getPipeline() {
    return pipeline;
}
void
PipelineRunImpl::setPipeline(QString* pipeline) {
    this->pipeline = pipeline;
}

QString*
PipelineRunImpl::getResult() {
    return result;
}
void
PipelineRunImpl::setResult(QString* result) {
    this->result = result;
}

QString*
PipelineRunImpl::getRunSummary() {
    return run_summary;
}
void
PipelineRunImpl::setRunSummary(QString* run_summary) {
    this->run_summary = run_summary;
}

QString*
PipelineRunImpl::getStartTime() {
    return start_time;
}
void
PipelineRunImpl::setStartTime(QString* start_time) {
    this->start_time = start_time;
}

QString*
PipelineRunImpl::getState() {
    return state;
}
void
PipelineRunImpl::setState(QString* state) {
    this->state = state;
}

QString*
PipelineRunImpl::getType() {
    return type;
}
void
PipelineRunImpl::setType(QString* type) {
    this->type = type;
}

QString*
PipelineRunImpl::getCommitId() {
    return commit_id;
}
void
PipelineRunImpl::setCommitId(QString* commit_id) {
    this->commit_id = commit_id;
}


}

