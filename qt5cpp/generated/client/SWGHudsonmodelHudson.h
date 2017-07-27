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
 * SWGHudsonmodelHudson.h
 * 
 * 
 */

#ifndef SWGHudsonmodelHudson_H_
#define SWGHudsonmodelHudson_H_

#include <QJsonObject>


#include "SWGHudsonmodelAllView.h"
#include "SWGHudsonmodelFreeStyleProject.h"
#include "SWGHudsonmodelHudsonassignedLabels.h"
#include "SWGJenkinsmodelUnlabeledLoadStatistics.h"
#include <QList>
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGHudsonmodelHudson: public SWGObject {
public:
    SWGHudsonmodelHudson();
    SWGHudsonmodelHudson(QString* json);
    virtual ~SWGHudsonmodelHudson();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGHudsonmodelHudson* fromJson(QString &jsonString);

    QString* getClass();
    void setClass(QString* _class);

    QList<SWGHudsonmodelHudsonassignedLabels*>* getAssignedLabels();
    void setAssignedLabels(QList<SWGHudsonmodelHudsonassignedLabels*>* assigned_labels);

    QString* getMode();
    void setMode(QString* mode);

    QString* getNodeDescription();
    void setNodeDescription(QString* node_description);

    QString* getNodeName();
    void setNodeName(QString* node_name);

    qint32 getNumExecutors();
    void setNumExecutors(qint32 num_executors);

    QString* getDescription();
    void setDescription(QString* description);

    QList<SWGHudsonmodelFreeStyleProject*>* getJobs();
    void setJobs(QList<SWGHudsonmodelFreeStyleProject*>* jobs);

    SWGHudsonmodelAllView* getPrimaryView();
    void setPrimaryView(SWGHudsonmodelAllView* primary_view);

    bool getQuietingDown();
    void setQuietingDown(bool quieting_down);

    qint32 getSlaveAgentPort();
    void setSlaveAgentPort(qint32 slave_agent_port);

    SWGJenkinsmodelUnlabeledLoadStatistics* getUnlabeledLoad();
    void setUnlabeledLoad(SWGJenkinsmodelUnlabeledLoadStatistics* unlabeled_load);

    bool getUseCrumbs();
    void setUseCrumbs(bool use_crumbs);

    bool getUseSecurity();
    void setUseSecurity(bool use_security);

    QList<SWGHudsonmodelAllView*>* getViews();
    void setViews(QList<SWGHudsonmodelAllView*>* views);


private:
    QString* _class;
    QList<SWGHudsonmodelHudsonassignedLabels*>* assigned_labels;
    QString* mode;
    QString* node_description;
    QString* node_name;
    qint32 num_executors;
    QString* description;
    QList<SWGHudsonmodelFreeStyleProject*>* jobs;
    SWGHudsonmodelAllView* primary_view;
    bool quieting_down;
    qint32 slave_agent_port;
    SWGJenkinsmodelUnlabeledLoadStatistics* unlabeled_load;
    bool use_crumbs;
    bool use_security;
    QList<SWGHudsonmodelAllView*>* views;
};

}

#endif /* SWGHudsonmodelHudson_H_ */