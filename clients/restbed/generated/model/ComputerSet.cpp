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



#include "ComputerSet.h"

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

ComputerSet::ComputerSet()
{
    m__class = "";
    m_BusyExecutors = 0;
    m_DisplayName = "";
    m_TotalExecutors = 0;
    
}

ComputerSet::~ComputerSet()
{
}

std::string ComputerSet::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	pt.put("_class", m__class);
	pt.put("BusyExecutors", m_BusyExecutors);
	pt.put("DisplayName", m_DisplayName);
	pt.put("TotalExecutors", m_TotalExecutors);
	write_json(ss, pt, false);
	return ss.str();
}

void ComputerSet::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	m__class = pt.get("_class", "");
	m_BusyExecutors = pt.get("BusyExecutors", 0);
	m_DisplayName = pt.get("DisplayName", "");
	m_TotalExecutors = pt.get("TotalExecutors", 0);
}

std::string ComputerSet::getClass() const
{
    return m__class;
}
void ComputerSet::setClass(std::string value)
{
    m__class = value;
}
int32_t ComputerSet::getBusyExecutors() const
{
    return m_BusyExecutors;
}
void ComputerSet::setBusyExecutors(int32_t value)
{
    m_BusyExecutors = value;
}
std::vector<std::shared_ptr<HudsonMasterComputer>> ComputerSet::getComputer() const
{
    return m_Computer;
}
void ComputerSet::setComputer(std::vector<std::shared_ptr<HudsonMasterComputer>> value)
{
    m_Computer = value;
}
std::string ComputerSet::getDisplayName() const
{
    return m_DisplayName;
}
void ComputerSet::setDisplayName(std::string value)
{
    m_DisplayName = value;
}
int32_t ComputerSet::getTotalExecutors() const
{
    return m_TotalExecutors;
}
void ComputerSet::setTotalExecutors(int32_t value)
{
    m_TotalExecutors = value;
}

}
}
}
}

