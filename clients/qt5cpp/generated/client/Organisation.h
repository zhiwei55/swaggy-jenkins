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
 * Organisation.h
 * 
 * 
 */

#ifndef Organisation_H_
#define Organisation_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class Organisation: public SWGObject {
public:
    Organisation();
    Organisation(QString* json);
    virtual ~Organisation();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    Organisation* fromJson(QString &jsonString);

    QString* getClass();
    void setClass(QString* _class);

    QString* getName();
    void setName(QString* name);


private:
    QString* _class;
    QString* name;
};

}

#endif /* Organisation_H_ */
