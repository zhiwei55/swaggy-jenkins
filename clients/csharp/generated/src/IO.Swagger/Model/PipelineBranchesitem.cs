/* 
 * Swaggy Jenkins
 *
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 */

using System;
using System.Linq;
using System.IO;
using System.Text;
using System.Text.RegularExpressions;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Runtime.Serialization;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;
using System.ComponentModel.DataAnnotations;
using SwaggerDateConverter = IO.Swagger.Client.SwaggerDateConverter;

namespace IO.Swagger.Model
{
    /// <summary>
    /// PipelineBranchesitem
    /// </summary>
    [DataContract]
    public partial class PipelineBranchesitem :  IEquatable<PipelineBranchesitem>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="PipelineBranchesitem" /> class.
        /// </summary>
        /// <param name="DisplayName">DisplayName.</param>
        /// <param name="EstimatedDurationInMillis">EstimatedDurationInMillis.</param>
        /// <param name="Name">Name.</param>
        /// <param name="WeatherScore">WeatherScore.</param>
        /// <param name="LatestRun">LatestRun.</param>
        /// <param name="Organization">Organization.</param>
        /// <param name="PullRequest">PullRequest.</param>
        /// <param name="TotalNumberOfPullRequests">TotalNumberOfPullRequests.</param>
        /// <param name="_Class">_Class.</param>
        public PipelineBranchesitem(string DisplayName = default(string), int? EstimatedDurationInMillis = default(int?), string Name = default(string), int? WeatherScore = default(int?), PipelineBranchesitemlatestRun LatestRun = default(PipelineBranchesitemlatestRun), string Organization = default(string), PipelineBranchesitempullRequest PullRequest = default(PipelineBranchesitempullRequest), int? TotalNumberOfPullRequests = default(int?), string _Class = default(string))
        {
            this.DisplayName = DisplayName;
            this.EstimatedDurationInMillis = EstimatedDurationInMillis;
            this.Name = Name;
            this.WeatherScore = WeatherScore;
            this.LatestRun = LatestRun;
            this.Organization = Organization;
            this.PullRequest = PullRequest;
            this.TotalNumberOfPullRequests = TotalNumberOfPullRequests;
            this._Class = _Class;
        }
        
        /// <summary>
        /// Gets or Sets DisplayName
        /// </summary>
        [DataMember(Name="displayName", EmitDefaultValue=false)]
        public string DisplayName { get; set; }

        /// <summary>
        /// Gets or Sets EstimatedDurationInMillis
        /// </summary>
        [DataMember(Name="estimatedDurationInMillis", EmitDefaultValue=false)]
        public int? EstimatedDurationInMillis { get; set; }

        /// <summary>
        /// Gets or Sets Name
        /// </summary>
        [DataMember(Name="name", EmitDefaultValue=false)]
        public string Name { get; set; }

        /// <summary>
        /// Gets or Sets WeatherScore
        /// </summary>
        [DataMember(Name="weatherScore", EmitDefaultValue=false)]
        public int? WeatherScore { get; set; }

        /// <summary>
        /// Gets or Sets LatestRun
        /// </summary>
        [DataMember(Name="latestRun", EmitDefaultValue=false)]
        public PipelineBranchesitemlatestRun LatestRun { get; set; }

        /// <summary>
        /// Gets or Sets Organization
        /// </summary>
        [DataMember(Name="organization", EmitDefaultValue=false)]
        public string Organization { get; set; }

        /// <summary>
        /// Gets or Sets PullRequest
        /// </summary>
        [DataMember(Name="pullRequest", EmitDefaultValue=false)]
        public PipelineBranchesitempullRequest PullRequest { get; set; }

        /// <summary>
        /// Gets or Sets TotalNumberOfPullRequests
        /// </summary>
        [DataMember(Name="totalNumberOfPullRequests", EmitDefaultValue=false)]
        public int? TotalNumberOfPullRequests { get; set; }

        /// <summary>
        /// Gets or Sets _Class
        /// </summary>
        [DataMember(Name="_class", EmitDefaultValue=false)]
        public string _Class { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PipelineBranchesitem {\n");
            sb.Append("  DisplayName: ").Append(DisplayName).Append("\n");
            sb.Append("  EstimatedDurationInMillis: ").Append(EstimatedDurationInMillis).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  WeatherScore: ").Append(WeatherScore).Append("\n");
            sb.Append("  LatestRun: ").Append(LatestRun).Append("\n");
            sb.Append("  Organization: ").Append(Organization).Append("\n");
            sb.Append("  PullRequest: ").Append(PullRequest).Append("\n");
            sb.Append("  TotalNumberOfPullRequests: ").Append(TotalNumberOfPullRequests).Append("\n");
            sb.Append("  _Class: ").Append(_Class).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
  
        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public string ToJson()
        {
            return JsonConvert.SerializeObject(this, Formatting.Indented);
        }

        /// <summary>
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="input">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object input)
        {
            return this.Equals(input as PipelineBranchesitem);
        }

        /// <summary>
        /// Returns true if PipelineBranchesitem instances are equal
        /// </summary>
        /// <param name="input">Instance of PipelineBranchesitem to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(PipelineBranchesitem input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.DisplayName == input.DisplayName ||
                    (this.DisplayName != null &&
                    this.DisplayName.Equals(input.DisplayName))
                ) && 
                (
                    this.EstimatedDurationInMillis == input.EstimatedDurationInMillis ||
                    (this.EstimatedDurationInMillis != null &&
                    this.EstimatedDurationInMillis.Equals(input.EstimatedDurationInMillis))
                ) && 
                (
                    this.Name == input.Name ||
                    (this.Name != null &&
                    this.Name.Equals(input.Name))
                ) && 
                (
                    this.WeatherScore == input.WeatherScore ||
                    (this.WeatherScore != null &&
                    this.WeatherScore.Equals(input.WeatherScore))
                ) && 
                (
                    this.LatestRun == input.LatestRun ||
                    (this.LatestRun != null &&
                    this.LatestRun.Equals(input.LatestRun))
                ) && 
                (
                    this.Organization == input.Organization ||
                    (this.Organization != null &&
                    this.Organization.Equals(input.Organization))
                ) && 
                (
                    this.PullRequest == input.PullRequest ||
                    (this.PullRequest != null &&
                    this.PullRequest.Equals(input.PullRequest))
                ) && 
                (
                    this.TotalNumberOfPullRequests == input.TotalNumberOfPullRequests ||
                    (this.TotalNumberOfPullRequests != null &&
                    this.TotalNumberOfPullRequests.Equals(input.TotalNumberOfPullRequests))
                ) && 
                (
                    this._Class == input._Class ||
                    (this._Class != null &&
                    this._Class.Equals(input._Class))
                );
        }

        /// <summary>
        /// Gets the hash code
        /// </summary>
        /// <returns>Hash code</returns>
        public override int GetHashCode()
        {
            unchecked // Overflow is fine, just wrap
            {
                int hashCode = 41;
                if (this.DisplayName != null)
                    hashCode = hashCode * 59 + this.DisplayName.GetHashCode();
                if (this.EstimatedDurationInMillis != null)
                    hashCode = hashCode * 59 + this.EstimatedDurationInMillis.GetHashCode();
                if (this.Name != null)
                    hashCode = hashCode * 59 + this.Name.GetHashCode();
                if (this.WeatherScore != null)
                    hashCode = hashCode * 59 + this.WeatherScore.GetHashCode();
                if (this.LatestRun != null)
                    hashCode = hashCode * 59 + this.LatestRun.GetHashCode();
                if (this.Organization != null)
                    hashCode = hashCode * 59 + this.Organization.GetHashCode();
                if (this.PullRequest != null)
                    hashCode = hashCode * 59 + this.PullRequest.GetHashCode();
                if (this.TotalNumberOfPullRequests != null)
                    hashCode = hashCode * 59 + this.TotalNumberOfPullRequests.GetHashCode();
                if (this._Class != null)
                    hashCode = hashCode * 59 + this._Class.GetHashCode();
                return hashCode;
            }
        }

        /// <summary>
        /// To validate all properties of the instance
        /// </summary>
        /// <param name="validationContext">Validation context</param>
        /// <returns>Validation Result</returns>
        IEnumerable<System.ComponentModel.DataAnnotations.ValidationResult> IValidatableObject.Validate(ValidationContext validationContext)
        {
            yield break;
        }
    }

}
