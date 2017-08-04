/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 *
 * Swagger Codegen version: 2.2.3-SNAPSHOT
 *
 * Do not edit the class manually.
 *
 */

(function(root, factory) {
  if (typeof define === 'function' && define.amd) {
    // AMD. Register as an anonymous module.
    define(['ApiClient', 'model/PipelineRunImpllinks'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('./PipelineRunImpllinks'));
  } else {
    // Browser globals (root is window)
    if (!root.SwaggyJenkins) {
      root.SwaggyJenkins = {};
    }
    root.SwaggyJenkins.PipelineRunImpl = factory(root.SwaggyJenkins.ApiClient, root.SwaggyJenkins.PipelineRunImpllinks);
  }
}(this, function(ApiClient, PipelineRunImpllinks) {
  'use strict';




  /**
   * The PipelineRunImpl model module.
   * @module model/PipelineRunImpl
   * @version 0.0.2
   */

  /**
   * Constructs a new <code>PipelineRunImpl</code>.
   * @alias module:model/PipelineRunImpl
   * @class
   */
  var exports = function() {
    var _this = this;
















  };

  /**
   * Constructs a <code>PipelineRunImpl</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/PipelineRunImpl} obj Optional instance to populate.
   * @return {module:model/PipelineRunImpl} The populated <code>PipelineRunImpl</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('_class')) {
        obj['_class'] = ApiClient.convertToType(data['_class'], 'String');
      }
      if (data.hasOwnProperty('_links')) {
        obj['_links'] = PipelineRunImpllinks.constructFromObject(data['_links']);
      }
      if (data.hasOwnProperty('durationInMillis')) {
        obj['durationInMillis'] = ApiClient.convertToType(data['durationInMillis'], 'Number');
      }
      if (data.hasOwnProperty('enQueueTime')) {
        obj['enQueueTime'] = ApiClient.convertToType(data['enQueueTime'], 'String');
      }
      if (data.hasOwnProperty('endTime')) {
        obj['endTime'] = ApiClient.convertToType(data['endTime'], 'String');
      }
      if (data.hasOwnProperty('estimatedDurationInMillis')) {
        obj['estimatedDurationInMillis'] = ApiClient.convertToType(data['estimatedDurationInMillis'], 'Number');
      }
      if (data.hasOwnProperty('id')) {
        obj['id'] = ApiClient.convertToType(data['id'], 'String');
      }
      if (data.hasOwnProperty('organization')) {
        obj['organization'] = ApiClient.convertToType(data['organization'], 'String');
      }
      if (data.hasOwnProperty('pipeline')) {
        obj['pipeline'] = ApiClient.convertToType(data['pipeline'], 'String');
      }
      if (data.hasOwnProperty('result')) {
        obj['result'] = ApiClient.convertToType(data['result'], 'String');
      }
      if (data.hasOwnProperty('runSummary')) {
        obj['runSummary'] = ApiClient.convertToType(data['runSummary'], 'String');
      }
      if (data.hasOwnProperty('startTime')) {
        obj['startTime'] = ApiClient.convertToType(data['startTime'], 'String');
      }
      if (data.hasOwnProperty('state')) {
        obj['state'] = ApiClient.convertToType(data['state'], 'String');
      }
      if (data.hasOwnProperty('type')) {
        obj['type'] = ApiClient.convertToType(data['type'], 'String');
      }
      if (data.hasOwnProperty('commitId')) {
        obj['commitId'] = ApiClient.convertToType(data['commitId'], 'String');
      }
    }
    return obj;
  }

  /**
   * @member {String} _class
   */
  exports.prototype['_class'] = undefined;
  /**
   * @member {module:model/PipelineRunImpllinks} _links
   */
  exports.prototype['_links'] = undefined;
  /**
   * @member {Number} durationInMillis
   */
  exports.prototype['durationInMillis'] = undefined;
  /**
   * @member {String} enQueueTime
   */
  exports.prototype['enQueueTime'] = undefined;
  /**
   * @member {String} endTime
   */
  exports.prototype['endTime'] = undefined;
  /**
   * @member {Number} estimatedDurationInMillis
   */
  exports.prototype['estimatedDurationInMillis'] = undefined;
  /**
   * @member {String} id
   */
  exports.prototype['id'] = undefined;
  /**
   * @member {String} organization
   */
  exports.prototype['organization'] = undefined;
  /**
   * @member {String} pipeline
   */
  exports.prototype['pipeline'] = undefined;
  /**
   * @member {String} result
   */
  exports.prototype['result'] = undefined;
  /**
   * @member {String} runSummary
   */
  exports.prototype['runSummary'] = undefined;
  /**
   * @member {String} startTime
   */
  exports.prototype['startTime'] = undefined;
  /**
   * @member {String} state
   */
  exports.prototype['state'] = undefined;
  /**
   * @member {String} type
   */
  exports.prototype['type'] = undefined;
  /**
   * @member {String} commitId
   */
  exports.prototype['commitId'] = undefined;



  return exports;
}));


