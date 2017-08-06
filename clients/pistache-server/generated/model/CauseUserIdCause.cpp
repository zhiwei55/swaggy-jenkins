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


#include "CauseUserIdCause.h"

namespace io {
namespace swagger {
namespace server {
namespace model {

CauseUserIdCause::CauseUserIdCause()
{
    m__class = "";
    m__classIsSet = false;
    m_ShortDescription = "";
    m_ShortDescriptionIsSet = false;
    m_UserId = "";
    m_UserIdIsSet = false;
    m_UserName = "";
    m_UserNameIsSet = false;
    
}

CauseUserIdCause::~CauseUserIdCause()
{
}

void CauseUserIdCause::validate()
{
    // TODO: implement validation
}

nlohmann::json CauseUserIdCause::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m__classIsSet)
    {
        val["_class"] = ModelBase::toJson(m__class);
    }
    if(m_ShortDescriptionIsSet)
    {
        val["shortDescription"] = ModelBase::toJson(m_ShortDescription);
    }
    if(m_UserIdIsSet)
    {
        val["userId"] = ModelBase::toJson(m_UserId);
    }
    if(m_UserNameIsSet)
    {
        val["userName"] = ModelBase::toJson(m_UserName);
    }
    

    return val;
}

void CauseUserIdCause::fromJson(nlohmann::json& val)
{
    if(val.find("_class") != val.end())
    {
        setClass(val.at("_class"));
        
    }
    if(val.find("shortDescription") != val.end())
    {
        setShortDescription(val.at("shortDescription"));
        
    }
    if(val.find("userId") != val.end())
    {
        setUserId(val.at("userId"));
        
    }
    if(val.find("userName") != val.end())
    {
        setUserName(val.at("userName"));
        
    }
    
}


std::string CauseUserIdCause::getClass() const
{
    return m__class;
}
void CauseUserIdCause::setClass(std::string value)
{
    m__class = value;
    m__classIsSet = true;
}
bool CauseUserIdCause::classIsSet() const
{
    return m__classIsSet;
}
void CauseUserIdCause::unset_class()
{
    m__classIsSet = false;
}
std::string CauseUserIdCause::getShortDescription() const
{
    return m_ShortDescription;
}
void CauseUserIdCause::setShortDescription(std::string value)
{
    m_ShortDescription = value;
    m_ShortDescriptionIsSet = true;
}
bool CauseUserIdCause::shortDescriptionIsSet() const
{
    return m_ShortDescriptionIsSet;
}
void CauseUserIdCause::unsetShortDescription()
{
    m_ShortDescriptionIsSet = false;
}
std::string CauseUserIdCause::getUserId() const
{
    return m_UserId;
}
void CauseUserIdCause::setUserId(std::string value)
{
    m_UserId = value;
    m_UserIdIsSet = true;
}
bool CauseUserIdCause::userIdIsSet() const
{
    return m_UserIdIsSet;
}
void CauseUserIdCause::unsetUserId()
{
    m_UserIdIsSet = false;
}
std::string CauseUserIdCause::getUserName() const
{
    return m_UserName;
}
void CauseUserIdCause::setUserName(std::string value)
{
    m_UserName = value;
    m_UserNameIsSet = true;
}
bool CauseUserIdCause::userNameIsSet() const
{
    return m_UserNameIsSet;
}
void CauseUserIdCause::unsetUserName()
{
    m_UserNameIsSet = false;
}

}
}
}
}
