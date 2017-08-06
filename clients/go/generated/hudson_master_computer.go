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

type HudsonMasterComputer struct {

	Class string `json:"_class,omitempty"`

	DisplayName string `json:"displayName,omitempty"`

	Executors []HudsonMasterComputerexecutors `json:"executors,omitempty"`

	Icon string `json:"icon,omitempty"`

	IconClassName string `json:"iconClassName,omitempty"`

	Idle bool `json:"idle,omitempty"`

	JnlpAgent bool `json:"jnlpAgent,omitempty"`

	LaunchSupported bool `json:"launchSupported,omitempty"`

	LoadStatistics *Label1 `json:"loadStatistics,omitempty"`

	ManualLaunchAllowed bool `json:"manualLaunchAllowed,omitempty"`

	MonitorData *HudsonMasterComputermonitorData `json:"monitorData,omitempty"`

	NumExecutors int32 `json:"numExecutors,omitempty"`

	Offline bool `json:"offline,omitempty"`

	OfflineCause string `json:"offlineCause,omitempty"`

	OfflineCauseReason string `json:"offlineCauseReason,omitempty"`

	TemporarilyOffline bool `json:"temporarilyOffline,omitempty"`
}