package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.PipelineBranchesitemlatestRun;
import io.swagger.model.PipelineBranchesitempullRequest;
import javax.validation.constraints.*;
import io.swagger.annotations.*;


@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaResteasyServerCodegen", date = "2017-08-03T23:34:55.006Z")
public class PipelineBranchesitem   {
  
  private String displayName = null;
  private Integer estimatedDurationInMillis = null;
  private String name = null;
  private Integer weatherScore = null;
  private PipelineBranchesitemlatestRun latestRun = null;
  private String organization = null;
  private PipelineBranchesitempullRequest pullRequest = null;
  private Integer totalNumberOfPullRequests = null;
  private String propertyClass = null;

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("displayName")
  public String getDisplayName() {
    return displayName;
  }
  public void setDisplayName(String displayName) {
    this.displayName = displayName;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("estimatedDurationInMillis")
  public Integer getEstimatedDurationInMillis() {
    return estimatedDurationInMillis;
  }
  public void setEstimatedDurationInMillis(Integer estimatedDurationInMillis) {
    this.estimatedDurationInMillis = estimatedDurationInMillis;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("name")
  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("weatherScore")
  public Integer getWeatherScore() {
    return weatherScore;
  }
  public void setWeatherScore(Integer weatherScore) {
    this.weatherScore = weatherScore;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("latestRun")
  public PipelineBranchesitemlatestRun getLatestRun() {
    return latestRun;
  }
  public void setLatestRun(PipelineBranchesitemlatestRun latestRun) {
    this.latestRun = latestRun;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("organization")
  public String getOrganization() {
    return organization;
  }
  public void setOrganization(String organization) {
    this.organization = organization;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("pullRequest")
  public PipelineBranchesitempullRequest getPullRequest() {
    return pullRequest;
  }
  public void setPullRequest(PipelineBranchesitempullRequest pullRequest) {
    this.pullRequest = pullRequest;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("totalNumberOfPullRequests")
  public Integer getTotalNumberOfPullRequests() {
    return totalNumberOfPullRequests;
  }
  public void setTotalNumberOfPullRequests(Integer totalNumberOfPullRequests) {
    this.totalNumberOfPullRequests = totalNumberOfPullRequests;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("_class")
  public String getPropertyClass() {
    return propertyClass;
  }
  public void setPropertyClass(String propertyClass) {
    this.propertyClass = propertyClass;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    PipelineBranchesitem pipelineBranchesitem = (PipelineBranchesitem) o;
    return Objects.equals(displayName, pipelineBranchesitem.displayName) &&
        Objects.equals(estimatedDurationInMillis, pipelineBranchesitem.estimatedDurationInMillis) &&
        Objects.equals(name, pipelineBranchesitem.name) &&
        Objects.equals(weatherScore, pipelineBranchesitem.weatherScore) &&
        Objects.equals(latestRun, pipelineBranchesitem.latestRun) &&
        Objects.equals(organization, pipelineBranchesitem.organization) &&
        Objects.equals(pullRequest, pipelineBranchesitem.pullRequest) &&
        Objects.equals(totalNumberOfPullRequests, pipelineBranchesitem.totalNumberOfPullRequests) &&
        Objects.equals(propertyClass, pipelineBranchesitem.propertyClass);
  }

  @Override
  public int hashCode() {
    return Objects.hash(displayName, estimatedDurationInMillis, name, weatherScore, latestRun, organization, pullRequest, totalNumberOfPullRequests, propertyClass);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class PipelineBranchesitem {\n");
    
    sb.append("    displayName: ").append(toIndentedString(displayName)).append("\n");
    sb.append("    estimatedDurationInMillis: ").append(toIndentedString(estimatedDurationInMillis)).append("\n");
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    weatherScore: ").append(toIndentedString(weatherScore)).append("\n");
    sb.append("    latestRun: ").append(toIndentedString(latestRun)).append("\n");
    sb.append("    organization: ").append(toIndentedString(organization)).append("\n");
    sb.append("    pullRequest: ").append(toIndentedString(pullRequest)).append("\n");
    sb.append("    totalNumberOfPullRequests: ").append(toIndentedString(totalNumberOfPullRequests)).append("\n");
    sb.append("    propertyClass: ").append(toIndentedString(propertyClass)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

