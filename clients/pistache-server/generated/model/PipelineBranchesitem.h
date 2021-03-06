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
 * PipelineBranchesitem.h
 *
 * 
 */

#ifndef PipelineBranchesitem_H_
#define PipelineBranchesitem_H_


#include "ModelBase.h"

#include <string>
#include "PipelineBranchesitemlatestRun.h"
#include "PipelineBranchesitempullRequest.h"

namespace io {
namespace swagger {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  PipelineBranchesitem
    : public ModelBase
{
public:
    PipelineBranchesitem();
    virtual ~PipelineBranchesitem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// PipelineBranchesitem members

    /// <summary>
    /// 
    /// </summary>
    std::string getDisplayName() const;
    void setDisplayName(std::string value);
    bool displayNameIsSet() const;
    void unsetDisplayName();
    /// <summary>
    /// 
    /// </summary>
    int32_t getEstimatedDurationInMillis() const;
    void setEstimatedDurationInMillis(int32_t value);
    bool estimatedDurationInMillisIsSet() const;
    void unsetEstimatedDurationInMillis();
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
    int32_t getWeatherScore() const;
    void setWeatherScore(int32_t value);
    bool weatherScoreIsSet() const;
    void unsetWeatherScore();
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<PipelineBranchesitemlatestRun> getLatestRun() const;
    void setLatestRun(std::shared_ptr<PipelineBranchesitemlatestRun> value);
    bool latestRunIsSet() const;
    void unsetLatestRun();
    /// <summary>
    /// 
    /// </summary>
    std::string getOrganization() const;
    void setOrganization(std::string value);
    bool organizationIsSet() const;
    void unsetOrganization();
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<PipelineBranchesitempullRequest> getPullRequest() const;
    void setPullRequest(std::shared_ptr<PipelineBranchesitempullRequest> value);
    bool pullRequestIsSet() const;
    void unsetPullRequest();
    /// <summary>
    /// 
    /// </summary>
    int32_t getTotalNumberOfPullRequests() const;
    void setTotalNumberOfPullRequests(int32_t value);
    bool totalNumberOfPullRequestsIsSet() const;
    void unsetTotalNumberOfPullRequests();
    /// <summary>
    /// 
    /// </summary>
    std::string getClass() const;
    void setClass(std::string value);
    bool classIsSet() const;
    void unset_class();

protected:
    std::string m_DisplayName;
    bool m_DisplayNameIsSet;
    int32_t m_EstimatedDurationInMillis;
    bool m_EstimatedDurationInMillisIsSet;
    std::string m_Name;
    bool m_NameIsSet;
    int32_t m_WeatherScore;
    bool m_WeatherScoreIsSet;
    std::shared_ptr<PipelineBranchesitemlatestRun> m_LatestRun;
    bool m_LatestRunIsSet;
    std::string m_Organization;
    bool m_OrganizationIsSet;
    std::shared_ptr<PipelineBranchesitempullRequest> m_PullRequest;
    bool m_PullRequestIsSet;
    int32_t m_TotalNumberOfPullRequests;
    bool m_TotalNumberOfPullRequestsIsSet;
    std::string m__class;
    bool m__classIsSet;
};

}
}
}
}

#endif /* PipelineBranchesitem_H_ */
