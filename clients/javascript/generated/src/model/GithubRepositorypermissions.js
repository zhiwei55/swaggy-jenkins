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
    define(['ApiClient'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'));
  } else {
    // Browser globals (root is window)
    if (!root.SwaggyJenkins) {
      root.SwaggyJenkins = {};
    }
    root.SwaggyJenkins.GithubRepositorypermissions = factory(root.SwaggyJenkins.ApiClient);
  }
}(this, function(ApiClient) {
  'use strict';




  /**
   * The GithubRepositorypermissions model module.
   * @module model/GithubRepositorypermissions
   * @version 0.0.2
   */

  /**
   * Constructs a new <code>GithubRepositorypermissions</code>.
   * @alias module:model/GithubRepositorypermissions
   * @class
   */
  var exports = function() {
    var _this = this;





  };

  /**
   * Constructs a <code>GithubRepositorypermissions</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/GithubRepositorypermissions} obj Optional instance to populate.
   * @return {module:model/GithubRepositorypermissions} The populated <code>GithubRepositorypermissions</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('admin')) {
        obj['admin'] = ApiClient.convertToType(data['admin'], 'Boolean');
      }
      if (data.hasOwnProperty('push')) {
        obj['push'] = ApiClient.convertToType(data['push'], 'Boolean');
      }
      if (data.hasOwnProperty('pull')) {
        obj['pull'] = ApiClient.convertToType(data['pull'], 'Boolean');
      }
      if (data.hasOwnProperty('_class')) {
        obj['_class'] = ApiClient.convertToType(data['_class'], 'String');
      }
    }
    return obj;
  }

  /**
   * @member {Boolean} admin
   */
  exports.prototype['admin'] = undefined;
  /**
   * @member {Boolean} push
   */
  exports.prototype['push'] = undefined;
  /**
   * @member {Boolean} pull
   */
  exports.prototype['pull'] = undefined;
  /**
   * @member {String} _class
   */
  exports.prototype['_class'] = undefined;



  return exports;
}));


