/*
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


package com.cliffano.swaggyjenkins.model;

import java.util.Objects;
import com.cliffano.swaggyjenkins.model.InputStepImpl;
import com.cliffano.swaggyjenkins.model.PipelineStepImpllinks;
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.io.IOException;

/**
 * PipelineStepImpl
 */
@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaClientCodegen", date = "2017-08-03T23:31:14.210Z")
public class PipelineStepImpl {
  @SerializedName("_class")
  private String propertyClass = null;

  @SerializedName("_links")
  private PipelineStepImpllinks links = null;

  @SerializedName("displayName")
  private String displayName = null;

  @SerializedName("durationInMillis")
  private Integer durationInMillis = null;

  @SerializedName("id")
  private String id = null;

  @SerializedName("input")
  private InputStepImpl input = null;

  @SerializedName("result")
  private String result = null;

  @SerializedName("startTime")
  private String startTime = null;

  @SerializedName("state")
  private String state = null;

  public PipelineStepImpl propertyClass(String propertyClass) {
    this.propertyClass = propertyClass;
    return this;
  }

   /**
   * Get propertyClass
   * @return propertyClass
  **/
  @ApiModelProperty(value = "")
  public String getPropertyClass() {
    return propertyClass;
  }

  public void setPropertyClass(String propertyClass) {
    this.propertyClass = propertyClass;
  }

  public PipelineStepImpl links(PipelineStepImpllinks links) {
    this.links = links;
    return this;
  }

   /**
   * Get links
   * @return links
  **/
  @ApiModelProperty(value = "")
  public PipelineStepImpllinks getLinks() {
    return links;
  }

  public void setLinks(PipelineStepImpllinks links) {
    this.links = links;
  }

  public PipelineStepImpl displayName(String displayName) {
    this.displayName = displayName;
    return this;
  }

   /**
   * Get displayName
   * @return displayName
  **/
  @ApiModelProperty(value = "")
  public String getDisplayName() {
    return displayName;
  }

  public void setDisplayName(String displayName) {
    this.displayName = displayName;
  }

  public PipelineStepImpl durationInMillis(Integer durationInMillis) {
    this.durationInMillis = durationInMillis;
    return this;
  }

   /**
   * Get durationInMillis
   * @return durationInMillis
  **/
  @ApiModelProperty(value = "")
  public Integer getDurationInMillis() {
    return durationInMillis;
  }

  public void setDurationInMillis(Integer durationInMillis) {
    this.durationInMillis = durationInMillis;
  }

  public PipelineStepImpl id(String id) {
    this.id = id;
    return this;
  }

   /**
   * Get id
   * @return id
  **/
  @ApiModelProperty(value = "")
  public String getId() {
    return id;
  }

  public void setId(String id) {
    this.id = id;
  }

  public PipelineStepImpl input(InputStepImpl input) {
    this.input = input;
    return this;
  }

   /**
   * Get input
   * @return input
  **/
  @ApiModelProperty(value = "")
  public InputStepImpl getInput() {
    return input;
  }

  public void setInput(InputStepImpl input) {
    this.input = input;
  }

  public PipelineStepImpl result(String result) {
    this.result = result;
    return this;
  }

   /**
   * Get result
   * @return result
  **/
  @ApiModelProperty(value = "")
  public String getResult() {
    return result;
  }

  public void setResult(String result) {
    this.result = result;
  }

  public PipelineStepImpl startTime(String startTime) {
    this.startTime = startTime;
    return this;
  }

   /**
   * Get startTime
   * @return startTime
  **/
  @ApiModelProperty(value = "")
  public String getStartTime() {
    return startTime;
  }

  public void setStartTime(String startTime) {
    this.startTime = startTime;
  }

  public PipelineStepImpl state(String state) {
    this.state = state;
    return this;
  }

   /**
   * Get state
   * @return state
  **/
  @ApiModelProperty(value = "")
  public String getState() {
    return state;
  }

  public void setState(String state) {
    this.state = state;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    PipelineStepImpl pipelineStepImpl = (PipelineStepImpl) o;
    return Objects.equals(this.propertyClass, pipelineStepImpl.propertyClass) &&
        Objects.equals(this.links, pipelineStepImpl.links) &&
        Objects.equals(this.displayName, pipelineStepImpl.displayName) &&
        Objects.equals(this.durationInMillis, pipelineStepImpl.durationInMillis) &&
        Objects.equals(this.id, pipelineStepImpl.id) &&
        Objects.equals(this.input, pipelineStepImpl.input) &&
        Objects.equals(this.result, pipelineStepImpl.result) &&
        Objects.equals(this.startTime, pipelineStepImpl.startTime) &&
        Objects.equals(this.state, pipelineStepImpl.state);
  }

  @Override
  public int hashCode() {
    return Objects.hash(propertyClass, links, displayName, durationInMillis, id, input, result, startTime, state);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class PipelineStepImpl {\n");
    
    sb.append("    propertyClass: ").append(toIndentedString(propertyClass)).append("\n");
    sb.append("    links: ").append(toIndentedString(links)).append("\n");
    sb.append("    displayName: ").append(toIndentedString(displayName)).append("\n");
    sb.append("    durationInMillis: ").append(toIndentedString(durationInMillis)).append("\n");
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    input: ").append(toIndentedString(input)).append("\n");
    sb.append("    result: ").append(toIndentedString(result)).append("\n");
    sb.append("    startTime: ").append(toIndentedString(startTime)).append("\n");
    sb.append("    state: ").append(toIndentedString(state)).append("\n");
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
