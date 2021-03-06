/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.3.0-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "HudsonMasterComputerexecutors.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

HudsonMasterComputerexecutors::HudsonMasterComputerexecutors()
{
    m_CurrentExecutableIsSet = false;
    m_Idle = false;
    m_IdleIsSet = false;
    m_LikelyStuck = false;
    m_LikelyStuckIsSet = false;
    m_number = 0;
    m_numberIsSet = false;
    m_Progress = 0;
    m_ProgressIsSet = false;
    m__class = U("");
    m__classIsSet = false;
}

HudsonMasterComputerexecutors::~HudsonMasterComputerexecutors()
{
}

void HudsonMasterComputerexecutors::validate()
{
    // TODO: implement validation
}

web::json::value HudsonMasterComputerexecutors::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_CurrentExecutableIsSet)
    {
        val[U("currentExecutable")] = ModelBase::toJson(m_CurrentExecutable);
    }
    if(m_IdleIsSet)
    {
        val[U("idle")] = ModelBase::toJson(m_Idle);
    }
    if(m_LikelyStuckIsSet)
    {
        val[U("likelyStuck")] = ModelBase::toJson(m_LikelyStuck);
    }
    if(m_numberIsSet)
    {
        val[U("number")] = ModelBase::toJson(m_number);
    }
    if(m_ProgressIsSet)
    {
        val[U("progress")] = ModelBase::toJson(m_Progress);
    }
    if(m__classIsSet)
    {
        val[U("_class")] = ModelBase::toJson(m__class);
    }

    return val;
}

void HudsonMasterComputerexecutors::fromJson(web::json::value& val)
{
    if(val.has_field(U("currentExecutable")))
    {
        if(!val[U("currentExecutable")].is_null())
        {
            std::shared_ptr<FreeStyleBuild> newItem(new FreeStyleBuild());
            newItem->fromJson(val[U("currentExecutable")]);
            setCurrentExecutable( newItem );
        }
    }
    if(val.has_field(U("idle")))
    {
        setIdle(ModelBase::boolFromJson(val[U("idle")]));
    }
    if(val.has_field(U("likelyStuck")))
    {
        setLikelyStuck(ModelBase::boolFromJson(val[U("likelyStuck")]));
    }
    if(val.has_field(U("number")))
    {
        setNumber(ModelBase::int32_tFromJson(val[U("number")]));
    }
    if(val.has_field(U("progress")))
    {
        setProgress(ModelBase::int32_tFromJson(val[U("progress")]));
    }
    if(val.has_field(U("_class")))
    {
        setClass(ModelBase::stringFromJson(val[U("_class")]));
    }
}

void HudsonMasterComputerexecutors::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_CurrentExecutableIsSet)
    {
        if (m_CurrentExecutable.get())
        {
            m_CurrentExecutable->toMultipart(multipart, U("currentExecutable."));
        }
        
    }
    if(m_IdleIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("idle"), m_Idle));
    }
    if(m_LikelyStuckIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("likelyStuck"), m_LikelyStuck));
    }
    if(m_numberIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("number"), m_number));
    }
    if(m_ProgressIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("progress"), m_Progress));
    }
    if(m__classIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("_class"), m__class));
        
    }
}

void HudsonMasterComputerexecutors::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("currentExecutable")))
    {
        if(multipart->hasContent(U("currentExecutable")))
        {
            std::shared_ptr<FreeStyleBuild> newItem(new FreeStyleBuild());
            newItem->fromMultiPart(multipart, U("currentExecutable."));
            setCurrentExecutable( newItem );
        }
    }
    if(multipart->hasContent(U("idle")))
    {
        setIdle(ModelBase::boolFromHttpContent(multipart->getContent(U("idle"))));
    }
    if(multipart->hasContent(U("likelyStuck")))
    {
        setLikelyStuck(ModelBase::boolFromHttpContent(multipart->getContent(U("likelyStuck"))));
    }
    if(multipart->hasContent(U("number")))
    {
        setNumber(ModelBase::int32_tFromHttpContent(multipart->getContent(U("number"))));
    }
    if(multipart->hasContent(U("progress")))
    {
        setProgress(ModelBase::int32_tFromHttpContent(multipart->getContent(U("progress"))));
    }
    if(multipart->hasContent(U("_class")))
    {
        setClass(ModelBase::stringFromHttpContent(multipart->getContent(U("_class"))));
    }
}

std::shared_ptr<FreeStyleBuild> HudsonMasterComputerexecutors::getCurrentExecutable() const
{
    return m_CurrentExecutable;
}


void HudsonMasterComputerexecutors::setCurrentExecutable(std::shared_ptr<FreeStyleBuild> value)
{
    m_CurrentExecutable = value;
    m_CurrentExecutableIsSet = true;
}
bool HudsonMasterComputerexecutors::currentExecutableIsSet() const
{
    return m_CurrentExecutableIsSet;
}

void HudsonMasterComputerexecutors::unsetCurrentExecutable()
{
    m_CurrentExecutableIsSet = false;
}

bool HudsonMasterComputerexecutors::getIdle() const
{
    return m_Idle;
}


void HudsonMasterComputerexecutors::setIdle(bool value)
{
    m_Idle = value;
    m_IdleIsSet = true;
}
bool HudsonMasterComputerexecutors::idleIsSet() const
{
    return m_IdleIsSet;
}

void HudsonMasterComputerexecutors::unsetIdle()
{
    m_IdleIsSet = false;
}

bool HudsonMasterComputerexecutors::getLikelyStuck() const
{
    return m_LikelyStuck;
}


void HudsonMasterComputerexecutors::setLikelyStuck(bool value)
{
    m_LikelyStuck = value;
    m_LikelyStuckIsSet = true;
}
bool HudsonMasterComputerexecutors::likelyStuckIsSet() const
{
    return m_LikelyStuckIsSet;
}

void HudsonMasterComputerexecutors::unsetLikelyStuck()
{
    m_LikelyStuckIsSet = false;
}

int32_t HudsonMasterComputerexecutors::getNumber() const
{
    return m_number;
}


void HudsonMasterComputerexecutors::setNumber(int32_t value)
{
    m_number = value;
    m_numberIsSet = true;
}
bool HudsonMasterComputerexecutors::numberIsSet() const
{
    return m_numberIsSet;
}

void HudsonMasterComputerexecutors::unsetnumber()
{
    m_numberIsSet = false;
}

int32_t HudsonMasterComputerexecutors::getProgress() const
{
    return m_Progress;
}


void HudsonMasterComputerexecutors::setProgress(int32_t value)
{
    m_Progress = value;
    m_ProgressIsSet = true;
}
bool HudsonMasterComputerexecutors::progressIsSet() const
{
    return m_ProgressIsSet;
}

void HudsonMasterComputerexecutors::unsetProgress()
{
    m_ProgressIsSet = false;
}

utility::string_t HudsonMasterComputerexecutors::getClass() const
{
    return m__class;
}


void HudsonMasterComputerexecutors::setClass(utility::string_t value)
{
    m__class = value;
    m__classIsSet = true;
}
bool HudsonMasterComputerexecutors::classIsSet() const
{
    return m__classIsSet;
}

void HudsonMasterComputerexecutors::unset_class()
{
    m__classIsSet = false;
}

}
}
}
}

