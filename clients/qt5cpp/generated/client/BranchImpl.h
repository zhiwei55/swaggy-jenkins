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
 * BranchImpl.h
 * 
 * 
 */

#ifndef BranchImpl_H_
#define BranchImpl_H_

#include <QJsonObject>


#include "BranchImpllinks.h"
#include "BranchImplpermissions.h"
#include "PipelineRunImpl.h"
#include "StringParameterDefinition.h"
#include <QList>
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class BranchImpl: public SWGObject {
public:
    BranchImpl();
    BranchImpl(QString* json);
    virtual ~BranchImpl();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    BranchImpl* fromJson(QString &jsonString);

    QString* getClass();
    void setClass(QString* _class);

    QString* getDisplayName();
    void setDisplayName(QString* display_name);

    qint32 getEstimatedDurationInMillis();
    void setEstimatedDurationInMillis(qint32 estimated_duration_in_millis);

    QString* getFullDisplayName();
    void setFullDisplayName(QString* full_display_name);

    QString* getFullName();
    void setFullName(QString* full_name);

    QString* getName();
    void setName(QString* name);

    QString* getOrganization();
    void setOrganization(QString* organization);

    QList<StringParameterDefinition*>* getParameters();
    void setParameters(QList<StringParameterDefinition*>* parameters);

    BranchImplpermissions* getPermissions();
    void setPermissions(BranchImplpermissions* permissions);

    qint32 getWeatherScore();
    void setWeatherScore(qint32 weather_score);

    QString* getPullRequest();
    void setPullRequest(QString* pull_request);

    BranchImpllinks* getLinks();
    void setLinks(BranchImpllinks* _links);

    PipelineRunImpl* getLatestRun();
    void setLatestRun(PipelineRunImpl* latest_run);


private:
    QString* _class;
    QString* display_name;
    qint32 estimated_duration_in_millis;
    QString* full_display_name;
    QString* full_name;
    QString* name;
    QString* organization;
    QList<StringParameterDefinition*>* parameters;
    BranchImplpermissions* permissions;
    qint32 weather_score;
    QString* pull_request;
    BranchImpllinks* _links;
    PipelineRunImpl* latest_run;
};

}

#endif /* BranchImpl_H_ */
