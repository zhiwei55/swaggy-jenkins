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
    // AMD.
    define(['expect.js', '../../src/index'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    factory(require('expect.js'), require('../../src/index'));
  } else {
    // Browser globals (root is window)
    factory(root.expect, root.SwaggyJenkins);
  }
}(this, function(expect, SwaggyJenkins) {
  'use strict';

  var instance;

  beforeEach(function() {
    instance = new SwaggyJenkins.PipelineActivity();
  });

  var getProperty = function(object, getter, property) {
    // Use getter method if present; otherwise, get the property directly.
    if (typeof object[getter] === 'function')
      return object[getter]();
    else
      return object[property];
  }

  var setProperty = function(object, setter, property, value) {
    // Use setter method if present; otherwise, set the property directly.
    if (typeof object[setter] === 'function')
      object[setter](value);
    else
      object[property] = value;
  }

  describe('PipelineActivity', function() {
    it('should create an instance of PipelineActivity', function() {
      // uncomment below and update the code to test PipelineActivity
      //var instane = new SwaggyJenkins.PipelineActivity();
      //expect(instance).to.be.a(SwaggyJenkins.PipelineActivity);
    });

    it('should have the property _class (base name: "_class")', function() {
      // uncomment below and update the code to test the property _class
      //var instane = new SwaggyJenkins.PipelineActivity();
      //expect(instance).to.be();
    });

    it('should have the property artifacts (base name: "artifacts")', function() {
      // uncomment below and update the code to test the property artifacts
      //var instane = new SwaggyJenkins.PipelineActivity();
      //expect(instance).to.be();
    });

    it('should have the property durationInMillis (base name: "durationInMillis")', function() {
      // uncomment below and update the code to test the property durationInMillis
      //var instane = new SwaggyJenkins.PipelineActivity();
      //expect(instance).to.be();
    });

    it('should have the property estimatedDurationInMillis (base name: "estimatedDurationInMillis")', function() {
      // uncomment below and update the code to test the property estimatedDurationInMillis
      //var instane = new SwaggyJenkins.PipelineActivity();
      //expect(instance).to.be();
    });

    it('should have the property enQueueTime (base name: "enQueueTime")', function() {
      // uncomment below and update the code to test the property enQueueTime
      //var instane = new SwaggyJenkins.PipelineActivity();
      //expect(instance).to.be();
    });

    it('should have the property endTime (base name: "endTime")', function() {
      // uncomment below and update the code to test the property endTime
      //var instane = new SwaggyJenkins.PipelineActivity();
      //expect(instance).to.be();
    });

    it('should have the property id (base name: "id")', function() {
      // uncomment below and update the code to test the property id
      //var instane = new SwaggyJenkins.PipelineActivity();
      //expect(instance).to.be();
    });

    it('should have the property organization (base name: "organization")', function() {
      // uncomment below and update the code to test the property organization
      //var instane = new SwaggyJenkins.PipelineActivity();
      //expect(instance).to.be();
    });

    it('should have the property pipeline (base name: "pipeline")', function() {
      // uncomment below and update the code to test the property pipeline
      //var instane = new SwaggyJenkins.PipelineActivity();
      //expect(instance).to.be();
    });

    it('should have the property result (base name: "result")', function() {
      // uncomment below and update the code to test the property result
      //var instane = new SwaggyJenkins.PipelineActivity();
      //expect(instance).to.be();
    });

    it('should have the property runSummary (base name: "runSummary")', function() {
      // uncomment below and update the code to test the property runSummary
      //var instane = new SwaggyJenkins.PipelineActivity();
      //expect(instance).to.be();
    });

    it('should have the property startTime (base name: "startTime")', function() {
      // uncomment below and update the code to test the property startTime
      //var instane = new SwaggyJenkins.PipelineActivity();
      //expect(instance).to.be();
    });

    it('should have the property state (base name: "state")', function() {
      // uncomment below and update the code to test the property state
      //var instane = new SwaggyJenkins.PipelineActivity();
      //expect(instance).to.be();
    });

    it('should have the property type (base name: "type")', function() {
      // uncomment below and update the code to test the property type
      //var instane = new SwaggyJenkins.PipelineActivity();
      //expect(instance).to.be();
    });

    it('should have the property commitId (base name: "commitId")', function() {
      // uncomment below and update the code to test the property commitId
      //var instane = new SwaggyJenkins.PipelineActivity();
      //expect(instance).to.be();
    });

  });

}));
