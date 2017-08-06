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



#include "GithubFile.h"

#include <string>
#include <sstream>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>

using boost::property_tree::ptree;
using boost::property_tree::read_json;
using boost::property_tree::write_json;

namespace io {
namespace swagger {
namespace server {
namespace model {

GithubFile::GithubFile()
{
    m__class = "";
    
}

GithubFile::~GithubFile()
{
}

std::string GithubFile::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	pt.put("_class", m__class);
	write_json(ss, pt, false);
	return ss.str();
}

void GithubFile::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	m__class = pt.get("_class", "");
}

std::shared_ptr<GithubContent> GithubFile::getContent() const
{
    return m_Content;
}
void GithubFile::setContent(std::shared_ptr<GithubContent> value)
{
    m_Content = value;
}
std::string GithubFile::getClass() const
{
    return m__class;
}
void GithubFile::setClass(std::string value)
{
    m__class = value;
}

}
}
}
}
