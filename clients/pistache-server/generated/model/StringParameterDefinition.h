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
 * StringParameterDefinition.h
 *
 * 
 */

#ifndef StringParameterDefinition_H_
#define StringParameterDefinition_H_


#include "ModelBase.h"

#include <string>
#include "StringParameterValue.h"

namespace io {
namespace swagger {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  StringParameterDefinition
    : public ModelBase
{
public:
    StringParameterDefinition();
    virtual ~StringParameterDefinition();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// StringParameterDefinition members

    /// <summary>
    /// 
    /// </summary>
    std::string getClass() const;
    void setClass(std::string value);
    bool classIsSet() const;
    void unset_class();
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<StringParameterValue> getDefaultParameterValue() const;
    void setDefaultParameterValue(std::shared_ptr<StringParameterValue> value);
    bool defaultParameterValueIsSet() const;
    void unsetDefaultParameterValue();
    /// <summary>
    /// 
    /// </summary>
    std::string getDescription() const;
    void setDescription(std::string value);
    bool descriptionIsSet() const;
    void unsetDescription();
    /// <summary>
    /// 
    /// </summary>
    std::string getName() const;
    void setName(std::string value);
    bool nameIsSet() const;
    void unsetName();
    /// <summary>
    /// 
    /// </summary>
    std::string getType() const;
    void setType(std::string value);
    bool typeIsSet() const;
    void unsetType();

protected:
    std::string m__class;
    bool m__classIsSet;
    std::shared_ptr<StringParameterValue> m_DefaultParameterValue;
    bool m_DefaultParameterValueIsSet;
    std::string m_Description;
    bool m_DescriptionIsSet;
    std::string m_Name;
    bool m_NameIsSet;
    std::string m_Type;
    bool m_TypeIsSet;
};

}
}
}
}

#endif /* StringParameterDefinition_H_ */