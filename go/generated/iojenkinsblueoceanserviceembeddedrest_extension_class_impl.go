/* 
 * Swaggy Jenkins
 *
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 */

package swagger

type IojenkinsblueoceanserviceembeddedrestExtensionClassImpl struct {

	Class string `json:"_class,omitempty"`

	Links IojenkinsblueoceanserviceembeddedrestExtensionClassImplLinks `json:"_links,omitempty"`

	Classes []string `json:"classes,omitempty"`
}