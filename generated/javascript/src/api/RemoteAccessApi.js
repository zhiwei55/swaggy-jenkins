/**
 * Swaggy Jenkins
 * Jenkins remote access API
 *
 * OpenAPI spec version: 0.0.1
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
    define(['ApiClient', 'model/HudsonmodelComputerSet', 'model/HudsonmodelFreeStyleBuild', 'model/HudsonmodelFreeStyleProject', 'model/HudsonmodelHudson', 'model/HudsonmodelListView', 'model/HudsonmodelQueue', 'model/HudsonsecuritycsrfDefaultCrumbIssuer'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('../model/HudsonmodelComputerSet'), require('../model/HudsonmodelFreeStyleBuild'), require('../model/HudsonmodelFreeStyleProject'), require('../model/HudsonmodelHudson'), require('../model/HudsonmodelListView'), require('../model/HudsonmodelQueue'), require('../model/HudsonsecuritycsrfDefaultCrumbIssuer'));
  } else {
    // Browser globals (root is window)
    if (!root.SwaggyJenkins) {
      root.SwaggyJenkins = {};
    }
    root.SwaggyJenkins.RemoteAccessApi = factory(root.SwaggyJenkins.ApiClient, root.SwaggyJenkins.HudsonmodelComputerSet, root.SwaggyJenkins.HudsonmodelFreeStyleBuild, root.SwaggyJenkins.HudsonmodelFreeStyleProject, root.SwaggyJenkins.HudsonmodelHudson, root.SwaggyJenkins.HudsonmodelListView, root.SwaggyJenkins.HudsonmodelQueue, root.SwaggyJenkins.HudsonsecuritycsrfDefaultCrumbIssuer);
  }
}(this, function(ApiClient, HudsonmodelComputerSet, HudsonmodelFreeStyleBuild, HudsonmodelFreeStyleProject, HudsonmodelHudson, HudsonmodelListView, HudsonmodelQueue, HudsonsecuritycsrfDefaultCrumbIssuer) {
  'use strict';

  /**
   * RemoteAccess service.
   * @module api/RemoteAccessApi
   * @version 0.0.1
   */

  /**
   * Constructs a new RemoteAccessApi. 
   * @alias module:api/RemoteAccessApi
   * @class
   * @param {module:ApiClient} apiClient Optional API client implementation to use,
   * default to {@link module:ApiClient#instance} if unspecified.
   */
  var exports = function(apiClient) {
    this.apiClient = apiClient || ApiClient.instance;


    /**
     * Callback function to receive the result of the getComputer operation.
     * @callback module:api/RemoteAccessApi~getComputerCallback
     * @param {String} error Error message, if any.
     * @param {module:model/HudsonmodelComputerSet} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Get computer
     * @param {module:api/RemoteAccessApi~getComputerCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/HudsonmodelComputerSet}
     */
    this.getComputer = function(callback) {
      var postBody = null;


      var pathParams = {
      };
      var queryParams = {
      };
      var headerParams = {
      };
      var formParams = {
      };

      var authNames = [];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = HudsonmodelComputerSet;

      return this.apiClient.callApi(
        '/computer/api/json?depth=1', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the getCrumb operation.
     * @callback module:api/RemoteAccessApi~getCrumbCallback
     * @param {String} error Error message, if any.
     * @param {module:model/HudsonsecuritycsrfDefaultCrumbIssuer} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Get crumb
     * @param {module:api/RemoteAccessApi~getCrumbCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/HudsonsecuritycsrfDefaultCrumbIssuer}
     */
    this.getCrumb = function(callback) {
      var postBody = null;


      var pathParams = {
      };
      var queryParams = {
      };
      var headerParams = {
      };
      var formParams = {
      };

      var authNames = [];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = HudsonsecuritycsrfDefaultCrumbIssuer;

      return this.apiClient.callApi(
        '/crumbIssuer/api/json', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the getInfo operation.
     * @callback module:api/RemoteAccessApi~getInfoCallback
     * @param {String} error Error message, if any.
     * @param {module:model/HudsonmodelHudson} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Get info
     * @param {module:api/RemoteAccessApi~getInfoCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/HudsonmodelHudson}
     */
    this.getInfo = function(callback) {
      var postBody = null;


      var pathParams = {
      };
      var queryParams = {
      };
      var headerParams = {
      };
      var formParams = {
      };

      var authNames = [];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = HudsonmodelHudson;

      return this.apiClient.callApi(
        '/api/json', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the getJob operation.
     * @callback module:api/RemoteAccessApi~getJobCallback
     * @param {String} error Error message, if any.
     * @param {module:model/HudsonmodelFreeStyleProject} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Get job
     * @param {String} name 
     * @param {module:api/RemoteAccessApi~getJobCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/HudsonmodelFreeStyleProject}
     */
    this.getJob = function(name, callback) {
      var postBody = null;

      // verify the required parameter 'name' is set
      if (name === undefined || name === null) {
        throw new Error("Missing the required parameter 'name' when calling getJob");
      }


      var pathParams = {
        'name': name
      };
      var queryParams = {
      };
      var headerParams = {
      };
      var formParams = {
      };

      var authNames = [];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = HudsonmodelFreeStyleProject;

      return this.apiClient.callApi(
        '/job/{name}/api/json', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the getJobConfig operation.
     * @callback module:api/RemoteAccessApi~getJobConfigCallback
     * @param {String} error Error message, if any.
     * @param {'String'} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Fetch a job configuration config.xml
     * @param {String} name 
     * @param {module:api/RemoteAccessApi~getJobConfigCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link 'String'}
     */
    this.getJobConfig = function(name, callback) {
      var postBody = null;

      // verify the required parameter 'name' is set
      if (name === undefined || name === null) {
        throw new Error("Missing the required parameter 'name' when calling getJobConfig");
      }


      var pathParams = {
        'name': name
      };
      var queryParams = {
      };
      var headerParams = {
      };
      var formParams = {
      };

      var authNames = [];
      var contentTypes = [];
      var accepts = ['text/xml'];
      var returnType = 'String';

      return this.apiClient.callApi(
        '/job/{name}/config.xml', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the getJobLastBuild operation.
     * @callback module:api/RemoteAccessApi~getJobLastBuildCallback
     * @param {String} error Error message, if any.
     * @param {module:model/HudsonmodelFreeStyleBuild} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Get job last build
     * @param {String} name 
     * @param {module:api/RemoteAccessApi~getJobLastBuildCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/HudsonmodelFreeStyleBuild}
     */
    this.getJobLastBuild = function(name, callback) {
      var postBody = null;

      // verify the required parameter 'name' is set
      if (name === undefined || name === null) {
        throw new Error("Missing the required parameter 'name' when calling getJobLastBuild");
      }


      var pathParams = {
        'name': name
      };
      var queryParams = {
      };
      var headerParams = {
      };
      var formParams = {
      };

      var authNames = [];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = HudsonmodelFreeStyleBuild;

      return this.apiClient.callApi(
        '/job/{name}/lastBuild/api/json', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the getJobProgressiveText operation.
     * @callback module:api/RemoteAccessApi~getJobProgressiveTextCallback
     * @param {String} error Error message, if any.
     * @param data This operation does not return a value.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Get a job&#39;s console progressive text
     * @param {String} name 
     * @param {String} _number 
     * @param {String} start 
     * @param {module:api/RemoteAccessApi~getJobProgressiveTextCallback} callback The callback function, accepting three arguments: error, data, response
     */
    this.getJobProgressiveText = function(name, _number, start, callback) {
      var postBody = null;

      // verify the required parameter 'name' is set
      if (name === undefined || name === null) {
        throw new Error("Missing the required parameter 'name' when calling getJobProgressiveText");
      }

      // verify the required parameter '_number' is set
      if (_number === undefined || _number === null) {
        throw new Error("Missing the required parameter '_number' when calling getJobProgressiveText");
      }

      // verify the required parameter 'start' is set
      if (start === undefined || start === null) {
        throw new Error("Missing the required parameter 'start' when calling getJobProgressiveText");
      }


      var pathParams = {
        'name': name,
        'number': _number
      };
      var queryParams = {
        'start': start
      };
      var headerParams = {
      };
      var formParams = {
      };

      var authNames = [];
      var contentTypes = [];
      var accepts = [];
      var returnType = null;

      return this.apiClient.callApi(
        '/job/{name}/{number}/logText/progressiveText', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the getQueue operation.
     * @callback module:api/RemoteAccessApi~getQueueCallback
     * @param {String} error Error message, if any.
     * @param {module:model/HudsonmodelQueue} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Get queue
     * @param {module:api/RemoteAccessApi~getQueueCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/HudsonmodelQueue}
     */
    this.getQueue = function(callback) {
      var postBody = null;


      var pathParams = {
      };
      var queryParams = {
      };
      var headerParams = {
      };
      var formParams = {
      };

      var authNames = [];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = HudsonmodelQueue;

      return this.apiClient.callApi(
        '/queue/api/json', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the getQueueItem operation.
     * @callback module:api/RemoteAccessApi~getQueueItemCallback
     * @param {String} error Error message, if any.
     * @param {module:model/HudsonmodelQueue} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Get queued item details
     * @param {String} _number 
     * @param {module:api/RemoteAccessApi~getQueueItemCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/HudsonmodelQueue}
     */
    this.getQueueItem = function(_number, callback) {
      var postBody = null;

      // verify the required parameter '_number' is set
      if (_number === undefined || _number === null) {
        throw new Error("Missing the required parameter '_number' when calling getQueueItem");
      }


      var pathParams = {
        'number': _number
      };
      var queryParams = {
      };
      var headerParams = {
      };
      var formParams = {
      };

      var authNames = [];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = HudsonmodelQueue;

      return this.apiClient.callApi(
        '/queue/item/{number}/api/json', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the getView operation.
     * @callback module:api/RemoteAccessApi~getViewCallback
     * @param {String} error Error message, if any.
     * @param {module:model/HudsonmodelListView} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Get view
     * @param {String} name 
     * @param {module:api/RemoteAccessApi~getViewCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/HudsonmodelListView}
     */
    this.getView = function(name, callback) {
      var postBody = null;

      // verify the required parameter 'name' is set
      if (name === undefined || name === null) {
        throw new Error("Missing the required parameter 'name' when calling getView");
      }


      var pathParams = {
        'name': name
      };
      var queryParams = {
      };
      var headerParams = {
      };
      var formParams = {
      };

      var authNames = [];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = HudsonmodelListView;

      return this.apiClient.callApi(
        '/view/{name}/api/json', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the getViewConfig operation.
     * @callback module:api/RemoteAccessApi~getViewConfigCallback
     * @param {String} error Error message, if any.
     * @param {'String'} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Fetch a view configuration config.xml
     * @param {String} name 
     * @param {module:api/RemoteAccessApi~getViewConfigCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link 'String'}
     */
    this.getViewConfig = function(name, callback) {
      var postBody = null;

      // verify the required parameter 'name' is set
      if (name === undefined || name === null) {
        throw new Error("Missing the required parameter 'name' when calling getViewConfig");
      }


      var pathParams = {
        'name': name
      };
      var queryParams = {
      };
      var headerParams = {
      };
      var formParams = {
      };

      var authNames = [];
      var contentTypes = [];
      var accepts = ['text/xml'];
      var returnType = 'String';

      return this.apiClient.callApi(
        '/view/{name}/config.xml', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the headVersion operation.
     * @callback module:api/RemoteAccessApi~headVersionCallback
     * @param {String} error Error message, if any.
     * @param data This operation does not return a value.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Retrieve version header
     * @param {module:api/RemoteAccessApi~headVersionCallback} callback The callback function, accepting three arguments: error, data, response
     */
    this.headVersion = function(callback) {
      var postBody = null;


      var pathParams = {
      };
      var queryParams = {
      };
      var headerParams = {
      };
      var formParams = {
      };

      var authNames = [];
      var contentTypes = [];
      var accepts = [];
      var returnType = null;

      return this.apiClient.callApi(
        '/', 'HEAD',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the postCreateItem operation.
     * @callback module:api/RemoteAccessApi~postCreateItemCallback
     * @param {String} error Error message, if any.
     * @param data This operation does not return a value.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Post item creation
     * @param {String} name 
     * @param {Object} opts Optional parameters
     * @param {String} opts.from 
     * @param {String} opts.mode 
     * @param {String} opts.body 
     * @param {String} opts.jenkinsCrumb 
     * @param {String} opts.contentType 
     * @param {module:api/RemoteAccessApi~postCreateItemCallback} callback The callback function, accepting three arguments: error, data, response
     */
    this.postCreateItem = function(name, opts, callback) {
      opts = opts || {};
      var postBody = opts['body'];

      // verify the required parameter 'name' is set
      if (name === undefined || name === null) {
        throw new Error("Missing the required parameter 'name' when calling postCreateItem");
      }


      var pathParams = {
      };
      var queryParams = {
        'name': name,
        'from': opts['from'],
        'mode': opts['mode']
      };
      var headerParams = {
        'Jenkins-Crumb': opts['jenkinsCrumb'],
        'Content-Type': opts['contentType']
      };
      var formParams = {
      };

      var authNames = [];
      var contentTypes = [];
      var accepts = ['text/html'];
      var returnType = null;

      return this.apiClient.callApi(
        '/createItem', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the postCreateView operation.
     * @callback module:api/RemoteAccessApi~postCreateViewCallback
     * @param {String} error Error message, if any.
     * @param data This operation does not return a value.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Post view creation
     * @param {String} name 
     * @param {Object} opts Optional parameters
     * @param {String} opts.body 
     * @param {String} opts.jenkinsCrumb 
     * @param {String} opts.contentType 
     * @param {module:api/RemoteAccessApi~postCreateViewCallback} callback The callback function, accepting three arguments: error, data, response
     */
    this.postCreateView = function(name, opts, callback) {
      opts = opts || {};
      var postBody = opts['body'];

      // verify the required parameter 'name' is set
      if (name === undefined || name === null) {
        throw new Error("Missing the required parameter 'name' when calling postCreateView");
      }


      var pathParams = {
      };
      var queryParams = {
        'name': name
      };
      var headerParams = {
        'Jenkins-Crumb': opts['jenkinsCrumb'],
        'Content-Type': opts['contentType']
      };
      var formParams = {
      };

      var authNames = [];
      var contentTypes = [];
      var accepts = ['text/html'];
      var returnType = null;

      return this.apiClient.callApi(
        '/createView', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the postJobBuild operation.
     * @callback module:api/RemoteAccessApi~postJobBuildCallback
     * @param {String} error Error message, if any.
     * @param data This operation does not return a value.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Build a job
     * @param {String} name 
     * @param {String} json 
     * @param {Object} opts Optional parameters
     * @param {String} opts.token 
     * @param {String} opts.jenkinsCrumb 
     * @param {module:api/RemoteAccessApi~postJobBuildCallback} callback The callback function, accepting three arguments: error, data, response
     */
    this.postJobBuild = function(name, json, opts, callback) {
      opts = opts || {};
      var postBody = null;

      // verify the required parameter 'name' is set
      if (name === undefined || name === null) {
        throw new Error("Missing the required parameter 'name' when calling postJobBuild");
      }

      // verify the required parameter 'json' is set
      if (json === undefined || json === null) {
        throw new Error("Missing the required parameter 'json' when calling postJobBuild");
      }


      var pathParams = {
        'name': name
      };
      var queryParams = {
        'json': json,
        'token': opts['token']
      };
      var headerParams = {
        'Jenkins-Crumb': opts['jenkinsCrumb']
      };
      var formParams = {
      };

      var authNames = [];
      var contentTypes = [];
      var accepts = [];
      var returnType = null;

      return this.apiClient.callApi(
        '/job/{name}/build', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the postJobConfig operation.
     * @callback module:api/RemoteAccessApi~postJobConfigCallback
     * @param {String} error Error message, if any.
     * @param data This operation does not return a value.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Update job config.xml
     * @param {String} name 
     * @param {String} body 
     * @param {Object} opts Optional parameters
     * @param {String} opts.jenkinsCrumb 
     * @param {module:api/RemoteAccessApi~postJobConfigCallback} callback The callback function, accepting three arguments: error, data, response
     */
    this.postJobConfig = function(name, body, opts, callback) {
      opts = opts || {};
      var postBody = body;

      // verify the required parameter 'name' is set
      if (name === undefined || name === null) {
        throw new Error("Missing the required parameter 'name' when calling postJobConfig");
      }

      // verify the required parameter 'body' is set
      if (body === undefined || body === null) {
        throw new Error("Missing the required parameter 'body' when calling postJobConfig");
      }


      var pathParams = {
        'name': name
      };
      var queryParams = {
      };
      var headerParams = {
        'Jenkins-Crumb': opts['jenkinsCrumb']
      };
      var formParams = {
      };

      var authNames = [];
      var contentTypes = [];
      var accepts = ['text/xml'];
      var returnType = null;

      return this.apiClient.callApi(
        '/job/{name}/config.xml', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the postJobDelete operation.
     * @callback module:api/RemoteAccessApi~postJobDeleteCallback
     * @param {String} error Error message, if any.
     * @param data This operation does not return a value.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Delete job
     * @param {String} name 
     * @param {Object} opts Optional parameters
     * @param {String} opts.jenkinsCrumb 
     * @param {module:api/RemoteAccessApi~postJobDeleteCallback} callback The callback function, accepting three arguments: error, data, response
     */
    this.postJobDelete = function(name, opts, callback) {
      opts = opts || {};
      var postBody = null;

      // verify the required parameter 'name' is set
      if (name === undefined || name === null) {
        throw new Error("Missing the required parameter 'name' when calling postJobDelete");
      }


      var pathParams = {
        'name': name
      };
      var queryParams = {
      };
      var headerParams = {
        'Jenkins-Crumb': opts['jenkinsCrumb']
      };
      var formParams = {
      };

      var authNames = [];
      var contentTypes = [];
      var accepts = [];
      var returnType = null;

      return this.apiClient.callApi(
        '/job/{name}/doDelete', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the postJobDisable operation.
     * @callback module:api/RemoteAccessApi~postJobDisableCallback
     * @param {String} error Error message, if any.
     * @param data This operation does not return a value.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Disable a job
     * @param {String} name 
     * @param {Object} opts Optional parameters
     * @param {String} opts.jenkinsCrumb 
     * @param {module:api/RemoteAccessApi~postJobDisableCallback} callback The callback function, accepting three arguments: error, data, response
     */
    this.postJobDisable = function(name, opts, callback) {
      opts = opts || {};
      var postBody = null;

      // verify the required parameter 'name' is set
      if (name === undefined || name === null) {
        throw new Error("Missing the required parameter 'name' when calling postJobDisable");
      }


      var pathParams = {
        'name': name
      };
      var queryParams = {
      };
      var headerParams = {
        'Jenkins-Crumb': opts['jenkinsCrumb']
      };
      var formParams = {
      };

      var authNames = [];
      var contentTypes = [];
      var accepts = [];
      var returnType = null;

      return this.apiClient.callApi(
        '/job/{name}/disable', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the postJobEnable operation.
     * @callback module:api/RemoteAccessApi~postJobEnableCallback
     * @param {String} error Error message, if any.
     * @param data This operation does not return a value.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Enable a job
     * @param {String} name 
     * @param {Object} opts Optional parameters
     * @param {String} opts.jenkinsCrumb 
     * @param {module:api/RemoteAccessApi~postJobEnableCallback} callback The callback function, accepting three arguments: error, data, response
     */
    this.postJobEnable = function(name, opts, callback) {
      opts = opts || {};
      var postBody = null;

      // verify the required parameter 'name' is set
      if (name === undefined || name === null) {
        throw new Error("Missing the required parameter 'name' when calling postJobEnable");
      }


      var pathParams = {
        'name': name
      };
      var queryParams = {
      };
      var headerParams = {
        'Jenkins-Crumb': opts['jenkinsCrumb']
      };
      var formParams = {
      };

      var authNames = [];
      var contentTypes = [];
      var accepts = [];
      var returnType = null;

      return this.apiClient.callApi(
        '/job/{name}/enable', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the postJobLastBuildStop operation.
     * @callback module:api/RemoteAccessApi~postJobLastBuildStopCallback
     * @param {String} error Error message, if any.
     * @param data This operation does not return a value.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Stop a running/building job
     * @param {String} name 
     * @param {Object} opts Optional parameters
     * @param {String} opts.jenkinsCrumb 
     * @param {module:api/RemoteAccessApi~postJobLastBuildStopCallback} callback The callback function, accepting three arguments: error, data, response
     */
    this.postJobLastBuildStop = function(name, opts, callback) {
      opts = opts || {};
      var postBody = null;

      // verify the required parameter 'name' is set
      if (name === undefined || name === null) {
        throw new Error("Missing the required parameter 'name' when calling postJobLastBuildStop");
      }


      var pathParams = {
        'name': name
      };
      var queryParams = {
      };
      var headerParams = {
        'Jenkins-Crumb': opts['jenkinsCrumb']
      };
      var formParams = {
      };

      var authNames = [];
      var contentTypes = [];
      var accepts = [];
      var returnType = null;

      return this.apiClient.callApi(
        '/job/{name}/lastBuild/stop', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the postViewConfig operation.
     * @callback module:api/RemoteAccessApi~postViewConfigCallback
     * @param {String} error Error message, if any.
     * @param data This operation does not return a value.
     * @param {String} response The complete HTTP response.
     */

    /**
     * Update view config.xml
     * @param {String} name 
     * @param {String} body 
     * @param {Object} opts Optional parameters
     * @param {String} opts.jenkinsCrumb 
     * @param {module:api/RemoteAccessApi~postViewConfigCallback} callback The callback function, accepting three arguments: error, data, response
     */
    this.postViewConfig = function(name, body, opts, callback) {
      opts = opts || {};
      var postBody = body;

      // verify the required parameter 'name' is set
      if (name === undefined || name === null) {
        throw new Error("Missing the required parameter 'name' when calling postViewConfig");
      }

      // verify the required parameter 'body' is set
      if (body === undefined || body === null) {
        throw new Error("Missing the required parameter 'body' when calling postViewConfig");
      }


      var pathParams = {
        'name': name
      };
      var queryParams = {
      };
      var headerParams = {
        'Jenkins-Crumb': opts['jenkinsCrumb']
      };
      var formParams = {
      };

      var authNames = [];
      var contentTypes = [];
      var accepts = ['text/xml'];
      var returnType = null;

      return this.apiClient.callApi(
        '/view/{name}/config.xml', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }
  };

  return exports;
}));
