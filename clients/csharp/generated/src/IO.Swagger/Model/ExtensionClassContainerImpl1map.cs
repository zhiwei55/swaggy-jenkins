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
    /// ExtensionClassContainerImpl1map
    /// </summary>
    [DataContract]
    public partial class ExtensionClassContainerImpl1map :  IEquatable<ExtensionClassContainerImpl1map>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ExtensionClassContainerImpl1map" /> class.
        /// </summary>
        /// <param name="IoJenkinsBlueoceanServiceEmbeddedRestPipelineImpl">IoJenkinsBlueoceanServiceEmbeddedRestPipelineImpl.</param>
        /// <param name="IoJenkinsBlueoceanServiceEmbeddedRestMultiBranchPipelineImpl">IoJenkinsBlueoceanServiceEmbeddedRestMultiBranchPipelineImpl.</param>
        /// <param name="_Class">_Class.</param>
        public ExtensionClassContainerImpl1map(ExtensionClassImpl IoJenkinsBlueoceanServiceEmbeddedRestPipelineImpl = default(ExtensionClassImpl), ExtensionClassImpl IoJenkinsBlueoceanServiceEmbeddedRestMultiBranchPipelineImpl = default(ExtensionClassImpl), string _Class = default(string))
        {
            this.IoJenkinsBlueoceanServiceEmbeddedRestPipelineImpl = IoJenkinsBlueoceanServiceEmbeddedRestPipelineImpl;
            this.IoJenkinsBlueoceanServiceEmbeddedRestMultiBranchPipelineImpl = IoJenkinsBlueoceanServiceEmbeddedRestMultiBranchPipelineImpl;
            this._Class = _Class;
        }
        
        /// <summary>
        /// Gets or Sets IoJenkinsBlueoceanServiceEmbeddedRestPipelineImpl
        /// </summary>
        [DataMember(Name="io.jenkins.blueocean.service.embedded.rest.PipelineImpl", EmitDefaultValue=false)]
        public ExtensionClassImpl IoJenkinsBlueoceanServiceEmbeddedRestPipelineImpl { get; set; }

        /// <summary>
        /// Gets or Sets IoJenkinsBlueoceanServiceEmbeddedRestMultiBranchPipelineImpl
        /// </summary>
        [DataMember(Name="io.jenkins.blueocean.service.embedded.rest.MultiBranchPipelineImpl", EmitDefaultValue=false)]
        public ExtensionClassImpl IoJenkinsBlueoceanServiceEmbeddedRestMultiBranchPipelineImpl { get; set; }

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
            sb.Append("class ExtensionClassContainerImpl1map {\n");
            sb.Append("  IoJenkinsBlueoceanServiceEmbeddedRestPipelineImpl: ").Append(IoJenkinsBlueoceanServiceEmbeddedRestPipelineImpl).Append("\n");
            sb.Append("  IoJenkinsBlueoceanServiceEmbeddedRestMultiBranchPipelineImpl: ").Append(IoJenkinsBlueoceanServiceEmbeddedRestMultiBranchPipelineImpl).Append("\n");
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
            return this.Equals(input as ExtensionClassContainerImpl1map);
        }

        /// <summary>
        /// Returns true if ExtensionClassContainerImpl1map instances are equal
        /// </summary>
        /// <param name="input">Instance of ExtensionClassContainerImpl1map to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ExtensionClassContainerImpl1map input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.IoJenkinsBlueoceanServiceEmbeddedRestPipelineImpl == input.IoJenkinsBlueoceanServiceEmbeddedRestPipelineImpl ||
                    (this.IoJenkinsBlueoceanServiceEmbeddedRestPipelineImpl != null &&
                    this.IoJenkinsBlueoceanServiceEmbeddedRestPipelineImpl.Equals(input.IoJenkinsBlueoceanServiceEmbeddedRestPipelineImpl))
                ) && 
                (
                    this.IoJenkinsBlueoceanServiceEmbeddedRestMultiBranchPipelineImpl == input.IoJenkinsBlueoceanServiceEmbeddedRestMultiBranchPipelineImpl ||
                    (this.IoJenkinsBlueoceanServiceEmbeddedRestMultiBranchPipelineImpl != null &&
                    this.IoJenkinsBlueoceanServiceEmbeddedRestMultiBranchPipelineImpl.Equals(input.IoJenkinsBlueoceanServiceEmbeddedRestMultiBranchPipelineImpl))
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
                if (this.IoJenkinsBlueoceanServiceEmbeddedRestPipelineImpl != null)
                    hashCode = hashCode * 59 + this.IoJenkinsBlueoceanServiceEmbeddedRestPipelineImpl.GetHashCode();
                if (this.IoJenkinsBlueoceanServiceEmbeddedRestMultiBranchPipelineImpl != null)
                    hashCode = hashCode * 59 + this.IoJenkinsBlueoceanServiceEmbeddedRestMultiBranchPipelineImpl.GetHashCode();
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
