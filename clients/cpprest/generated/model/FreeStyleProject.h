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
 * FreeStyleProject.h
 *
 * 
 */

#ifndef FreeStyleProject_H_
#define FreeStyleProject_H_


#include "ModelBase.h"

#include "NullSCM.h"
#include "FreeStyleBuild.h"
#include <cpprest/details/basic_types.h>
#include <vector>
#include "FreeStyleProjectactions.h"
#include "FreeStyleProjecthealthReport.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  FreeStyleProject
    : public ModelBase
{
public:
    FreeStyleProject();
    virtual ~FreeStyleProject();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// FreeStyleProject members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getClass() const;
    bool classIsSet() const;
    void unset_class();
    void setClass(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();
    void setName(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getUrl() const;
    bool urlIsSet() const;
    void unsetUrl();
    void setUrl(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getColor() const;
    bool colorIsSet() const;
    void unsetColor();
    void setColor(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<FreeStyleProjectactions>>& getActions();
    bool actionsIsSet() const;
    void unsetActions();
    void setActions(std::vector<std::shared_ptr<FreeStyleProjectactions>> value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDescription() const;
    bool descriptionIsSet() const;
    void unsetDescription();
    void setDescription(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDisplayName() const;
    bool displayNameIsSet() const;
    void unsetDisplayName();
    void setDisplayName(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDisplayNameOrNull() const;
    bool displayNameOrNullIsSet() const;
    void unsetDisplayNameOrNull();
    void setDisplayNameOrNull(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getFullDisplayName() const;
    bool fullDisplayNameIsSet() const;
    void unsetFullDisplayName();
    void setFullDisplayName(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getFullName() const;
    bool fullNameIsSet() const;
    void unsetFullName();
    void setFullName(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    bool getBuildable() const;
    bool buildableIsSet() const;
    void unsetBuildable();
    void setBuildable(bool value);
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<FreeStyleBuild>>& getBuilds();
    bool buildsIsSet() const;
    void unsetBuilds();
    void setBuilds(std::vector<std::shared_ptr<FreeStyleBuild>> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<FreeStyleBuild> getFirstBuild() const;
    bool firstBuildIsSet() const;
    void unsetFirstBuild();
    void setFirstBuild(std::shared_ptr<FreeStyleBuild> value);
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<FreeStyleProjecthealthReport>>& getHealthReport();
    bool healthReportIsSet() const;
    void unsetHealthReport();
    void setHealthReport(std::vector<std::shared_ptr<FreeStyleProjecthealthReport>> value);
    /// <summary>
    /// 
    /// </summary>
    bool getInQueue() const;
    bool inQueueIsSet() const;
    void unsetInQueue();
    void setInQueue(bool value);
    /// <summary>
    /// 
    /// </summary>
    bool getKeepDependencies() const;
    bool keepDependenciesIsSet() const;
    void unsetKeepDependencies();
    void setKeepDependencies(bool value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<FreeStyleBuild> getLastBuild() const;
    bool lastBuildIsSet() const;
    void unsetLastBuild();
    void setLastBuild(std::shared_ptr<FreeStyleBuild> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<FreeStyleBuild> getLastCompletedBuild() const;
    bool lastCompletedBuildIsSet() const;
    void unsetLastCompletedBuild();
    void setLastCompletedBuild(std::shared_ptr<FreeStyleBuild> value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getLastFailedBuild() const;
    bool lastFailedBuildIsSet() const;
    void unsetLastFailedBuild();
    void setLastFailedBuild(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<FreeStyleBuild> getLastStableBuild() const;
    bool lastStableBuildIsSet() const;
    void unsetLastStableBuild();
    void setLastStableBuild(std::shared_ptr<FreeStyleBuild> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<FreeStyleBuild> getLastSuccessfulBuild() const;
    bool lastSuccessfulBuildIsSet() const;
    void unsetLastSuccessfulBuild();
    void setLastSuccessfulBuild(std::shared_ptr<FreeStyleBuild> value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getLastUnstableBuild() const;
    bool lastUnstableBuildIsSet() const;
    void unsetLastUnstableBuild();
    void setLastUnstableBuild(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getLastUnsuccessfulBuild() const;
    bool lastUnsuccessfulBuildIsSet() const;
    void unsetLastUnsuccessfulBuild();
    void setLastUnsuccessfulBuild(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getNextBuildNumber() const;
    bool nextBuildNumberIsSet() const;
    void unsetNextBuildNumber();
    void setNextBuildNumber(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getQueueItem() const;
    bool queueItemIsSet() const;
    void unsetQueueItem();
    void setQueueItem(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    bool getConcurrentBuild() const;
    bool concurrentBuildIsSet() const;
    void unsetConcurrentBuild();
    void setConcurrentBuild(bool value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<NullSCM> getScm() const;
    bool scmIsSet() const;
    void unsetScm();
    void setScm(std::shared_ptr<NullSCM> value);

protected:
    utility::string_t m__class;
    bool m__classIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    utility::string_t m_Url;
    bool m_UrlIsSet;
    utility::string_t m_Color;
    bool m_ColorIsSet;
    std::vector<std::shared_ptr<FreeStyleProjectactions>> m_Actions;
    bool m_ActionsIsSet;
    utility::string_t m_Description;
    bool m_DescriptionIsSet;
    utility::string_t m_DisplayName;
    bool m_DisplayNameIsSet;
    utility::string_t m_DisplayNameOrNull;
    bool m_DisplayNameOrNullIsSet;
    utility::string_t m_FullDisplayName;
    bool m_FullDisplayNameIsSet;
    utility::string_t m_FullName;
    bool m_FullNameIsSet;
    bool m_Buildable;
    bool m_BuildableIsSet;
    std::vector<std::shared_ptr<FreeStyleBuild>> m_Builds;
    bool m_BuildsIsSet;
    std::shared_ptr<FreeStyleBuild> m_FirstBuild;
    bool m_FirstBuildIsSet;
    std::vector<std::shared_ptr<FreeStyleProjecthealthReport>> m_HealthReport;
    bool m_HealthReportIsSet;
    bool m_InQueue;
    bool m_InQueueIsSet;
    bool m_KeepDependencies;
    bool m_KeepDependenciesIsSet;
    std::shared_ptr<FreeStyleBuild> m_LastBuild;
    bool m_LastBuildIsSet;
    std::shared_ptr<FreeStyleBuild> m_LastCompletedBuild;
    bool m_LastCompletedBuildIsSet;
    utility::string_t m_LastFailedBuild;
    bool m_LastFailedBuildIsSet;
    std::shared_ptr<FreeStyleBuild> m_LastStableBuild;
    bool m_LastStableBuildIsSet;
    std::shared_ptr<FreeStyleBuild> m_LastSuccessfulBuild;
    bool m_LastSuccessfulBuildIsSet;
    utility::string_t m_LastUnstableBuild;
    bool m_LastUnstableBuildIsSet;
    utility::string_t m_LastUnsuccessfulBuild;
    bool m_LastUnsuccessfulBuildIsSet;
    int32_t m_NextBuildNumber;
    bool m_NextBuildNumberIsSet;
    utility::string_t m_QueueItem;
    bool m_QueueItemIsSet;
    bool m_ConcurrentBuild;
    bool m_ConcurrentBuildIsSet;
    std::shared_ptr<NullSCM> m_Scm;
    bool m_ScmIsSet;
};

}
}
}
}

#endif /* FreeStyleProject_H_ */