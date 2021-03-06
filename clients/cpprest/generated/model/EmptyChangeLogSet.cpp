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



#include "EmptyChangeLogSet.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

EmptyChangeLogSet::EmptyChangeLogSet()
{
    m__class = U("");
    m__classIsSet = false;
    m_Kind = U("");
    m_KindIsSet = false;
}

EmptyChangeLogSet::~EmptyChangeLogSet()
{
}

void EmptyChangeLogSet::validate()
{
    // TODO: implement validation
}

web::json::value EmptyChangeLogSet::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m__classIsSet)
    {
        val[U("_class")] = ModelBase::toJson(m__class);
    }
    if(m_KindIsSet)
    {
        val[U("kind")] = ModelBase::toJson(m_Kind);
    }

    return val;
}

void EmptyChangeLogSet::fromJson(web::json::value& val)
{
    if(val.has_field(U("_class")))
    {
        setClass(ModelBase::stringFromJson(val[U("_class")]));
    }
    if(val.has_field(U("kind")))
    {
        setKind(ModelBase::stringFromJson(val[U("kind")]));
    }
}

void EmptyChangeLogSet::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m__classIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("_class"), m__class));
        
    }
    if(m_KindIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("kind"), m_Kind));
        
    }
}

void EmptyChangeLogSet::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("_class")))
    {
        setClass(ModelBase::stringFromHttpContent(multipart->getContent(U("_class"))));
    }
    if(multipart->hasContent(U("kind")))
    {
        setKind(ModelBase::stringFromHttpContent(multipart->getContent(U("kind"))));
    }
}

utility::string_t EmptyChangeLogSet::getClass() const
{
    return m__class;
}


void EmptyChangeLogSet::setClass(utility::string_t value)
{
    m__class = value;
    m__classIsSet = true;
}
bool EmptyChangeLogSet::classIsSet() const
{
    return m__classIsSet;
}

void EmptyChangeLogSet::unset_class()
{
    m__classIsSet = false;
}

utility::string_t EmptyChangeLogSet::getKind() const
{
    return m_Kind;
}


void EmptyChangeLogSet::setKind(utility::string_t value)
{
    m_Kind = value;
    m_KindIsSet = true;
}
bool EmptyChangeLogSet::kindIsSet() const
{
    return m_KindIsSet;
}

void EmptyChangeLogSet::unsetKind()
{
    m_KindIsSet = false;
}

}
}
}
}

