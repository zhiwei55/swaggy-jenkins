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

/*
 * QueueLeftItem.h
 * 
 * 
 */

#ifndef QueueLeftItem_H_
#define QueueLeftItem_H_

#include <QJsonObject>


#include "CauseAction.h"
#include "FreeStyleBuild.h"
#include "FreeStyleProject.h"
#include <QList>
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class QueueLeftItem: public SWGObject {
public:
    QueueLeftItem();
    QueueLeftItem(QString* json);
    virtual ~QueueLeftItem();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    QueueLeftItem* fromJson(QString &jsonString);

    QString* getClass();
    void setClass(QString* _class);

    QList<CauseAction*>* getActions();
    void setActions(QList<CauseAction*>* actions);

    bool getBlocked();
    void setBlocked(bool blocked);

    bool getBuildable();
    void setBuildable(bool buildable);

    qint32 getId();
    void setId(qint32 id);

    qint32 getInQueueSince();
    void setInQueueSince(qint32 in_queue_since);

    QString* getParams();
    void setParams(QString* params);

    bool getStuck();
    void setStuck(bool stuck);

    FreeStyleProject* getTask();
    void setTask(FreeStyleProject* task);

    QString* getUrl();
    void setUrl(QString* url);

    QString* getWhy();
    void setWhy(QString* why);

    bool getCancelled();
    void setCancelled(bool cancelled);

    FreeStyleBuild* getExecutable();
    void setExecutable(FreeStyleBuild* executable);


private:
    QString* _class;
    QList<CauseAction*>* actions;
    bool blocked;
    bool buildable;
    qint32 id;
    qint32 in_queue_since;
    QString* params;
    bool stuck;
    FreeStyleProject* task;
    QString* url;
    QString* why;
    bool cancelled;
    FreeStyleBuild* executable;
};

}

#endif /* QueueLeftItem_H_ */
