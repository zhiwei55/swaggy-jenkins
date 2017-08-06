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

/**
 * SwagPipelineBranchesitemlatestRun
 */
public class SwagPipelineBranchesitemlatestRun implements Swagger.MappedProperties {
    /**
     * Get durationInMillis
     * @return durationInMillis
     */
    public Integer durationInMillis { get; set; }

    /**
     * Get estimatedDurationInMillis
     * @return estimatedDurationInMillis
     */
    public Integer estimatedDurationInMillis { get; set; }

    /**
     * Get enQueueTime
     * @return enQueueTime
     */
    public String enQueueTime { get; set; }

    /**
     * Get endTime
     * @return endTime
     */
    public String endTime { get; set; }

    /**
     * Get id
     * @return id
     */
    public String id { get; set; }

    /**
     * Get organization
     * @return organization
     */
    public String organization { get; set; }

    /**
     * Get pipeline
     * @return pipeline
     */
    public String pipeline { get; set; }

    /**
     * Get result
     * @return result
     */
    public String result { get; set; }

    /**
     * Get runSummary
     * @return runSummary
     */
    public String runSummary { get; set; }

    /**
     * Get startTime
     * @return startTime
     */
    public String startTime { get; set; }

    /**
     * Get state
     * @return state
     */
    public String state { get; set; }

    /**
     * Get r_type
     * @return r_type
     */
    public String r_type { get; set; }

    /**
     * Get commitId
     * @return commitId
     */
    public String commitId { get; set; }

    /**
     * Get propertyClass
     * @return propertyClass
     */
    public String propertyClass { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'type' => 'r_type',
        '_class' => 'propertyClass'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public static SwagPipelineBranchesitemlatestRun getExample() {
        SwagPipelineBranchesitemlatestRun pipelineBranchesitemlatestRun = new SwagPipelineBranchesitemlatestRun();
        pipelineBranchesitemlatestRun.durationInMillis = 123;
        pipelineBranchesitemlatestRun.estimatedDurationInMillis = 123;
        pipelineBranchesitemlatestRun.enQueueTime = 'aeiou';
        pipelineBranchesitemlatestRun.endTime = 'aeiou';
        pipelineBranchesitemlatestRun.id = 'aeiou';
        pipelineBranchesitemlatestRun.organization = 'aeiou';
        pipelineBranchesitemlatestRun.pipeline = 'aeiou';
        pipelineBranchesitemlatestRun.result = 'aeiou';
        pipelineBranchesitemlatestRun.runSummary = 'aeiou';
        pipelineBranchesitemlatestRun.startTime = 'aeiou';
        pipelineBranchesitemlatestRun.state = 'aeiou';
        pipelineBranchesitemlatestRun.r_type = 'aeiou';
        pipelineBranchesitemlatestRun.commitId = 'aeiou';
        pipelineBranchesitemlatestRun.propertyClass = 'aeiou';
        return pipelineBranchesitemlatestRun;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof SwagPipelineBranchesitemlatestRun) {
            SwagPipelineBranchesitemlatestRun pipelineBranchesitemlatestRun = (SwagPipelineBranchesitemlatestRun) obj;
            return this.durationInMillis == pipelineBranchesitemlatestRun.durationInMillis
                && this.estimatedDurationInMillis == pipelineBranchesitemlatestRun.estimatedDurationInMillis
                && this.enQueueTime == pipelineBranchesitemlatestRun.enQueueTime
                && this.endTime == pipelineBranchesitemlatestRun.endTime
                && this.id == pipelineBranchesitemlatestRun.id
                && this.organization == pipelineBranchesitemlatestRun.organization
                && this.pipeline == pipelineBranchesitemlatestRun.pipeline
                && this.result == pipelineBranchesitemlatestRun.result
                && this.runSummary == pipelineBranchesitemlatestRun.runSummary
                && this.startTime == pipelineBranchesitemlatestRun.startTime
                && this.state == pipelineBranchesitemlatestRun.state
                && this.r_type == pipelineBranchesitemlatestRun.r_type
                && this.commitId == pipelineBranchesitemlatestRun.commitId
                && this.propertyClass == pipelineBranchesitemlatestRun.propertyClass;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (durationInMillis == null ? 0 : System.hashCode(durationInMillis));
        hashCode = (17 * hashCode) + (estimatedDurationInMillis == null ? 0 : System.hashCode(estimatedDurationInMillis));
        hashCode = (17 * hashCode) + (enQueueTime == null ? 0 : System.hashCode(enQueueTime));
        hashCode = (17 * hashCode) + (endTime == null ? 0 : System.hashCode(endTime));
        hashCode = (17 * hashCode) + (id == null ? 0 : System.hashCode(id));
        hashCode = (17 * hashCode) + (organization == null ? 0 : System.hashCode(organization));
        hashCode = (17 * hashCode) + (pipeline == null ? 0 : System.hashCode(pipeline));
        hashCode = (17 * hashCode) + (result == null ? 0 : System.hashCode(result));
        hashCode = (17 * hashCode) + (runSummary == null ? 0 : System.hashCode(runSummary));
        hashCode = (17 * hashCode) + (startTime == null ? 0 : System.hashCode(startTime));
        hashCode = (17 * hashCode) + (state == null ? 0 : System.hashCode(state));
        hashCode = (17 * hashCode) + (r_type == null ? 0 : System.hashCode(r_type));
        hashCode = (17 * hashCode) + (commitId == null ? 0 : System.hashCode(commitId));
        hashCode = (17 * hashCode) + (propertyClass == null ? 0 : System.hashCode(propertyClass));
        return hashCode;
    }
}
