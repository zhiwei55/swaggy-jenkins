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
 * ListView.h
 * 
 * 
 */

#ifndef ListView_H_
#define ListView_H_

#include <QJsonObject>


#include "FreeStyleProject.h"
#include <QList>
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class ListView: public SWGObject {
public:
    ListView();
    ListView(QString* json);
    virtual ~ListView();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    ListView* fromJson(QString &jsonString);

    QString* getClass();
    void setClass(QString* _class);

    QString* getDescription();
    void setDescription(QString* description);

    QList<FreeStyleProject*>* getJobs();
    void setJobs(QList<FreeStyleProject*>* jobs);

    QString* getName();
    void setName(QString* name);

    QString* getUrl();
    void setUrl(QString* url);


private:
    QString* _class;
    QString* description;
    QList<FreeStyleProject*>* jobs;
    QString* name;
    QString* url;
};

}

#endif /* ListView_H_ */
