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

/*
 * PipelineBranches.h
 *
 * 
 */

#ifndef PipelineBranches_H_
#define PipelineBranches_H_



#include "PipelineBranchesitem.h"
#include <vector>
#include <memory>

namespace io {
namespace swagger {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  PipelineBranches
{
public:
    PipelineBranches();
    virtual ~PipelineBranches();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// PipelineBranches members
    

protected:
};

}
}
}
}

#endif /* PipelineBranches_H_ */
