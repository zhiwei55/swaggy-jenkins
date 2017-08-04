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
    instance = new SwaggyJenkins.BranchImplpermissions();
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

  describe('BranchImplpermissions', function() {
    it('should create an instance of BranchImplpermissions', function() {
      // uncomment below and update the code to test BranchImplpermissions
      //var instane = new SwaggyJenkins.BranchImplpermissions();
      //expect(instance).to.be.a(SwaggyJenkins.BranchImplpermissions);
    });

    it('should have the property create (base name: "create")', function() {
      // uncomment below and update the code to test the property create
      //var instane = new SwaggyJenkins.BranchImplpermissions();
      //expect(instance).to.be();
    });

    it('should have the property read (base name: "read")', function() {
      // uncomment below and update the code to test the property read
      //var instane = new SwaggyJenkins.BranchImplpermissions();
      //expect(instance).to.be();
    });

    it('should have the property start (base name: "start")', function() {
      // uncomment below and update the code to test the property start
      //var instane = new SwaggyJenkins.BranchImplpermissions();
      //expect(instance).to.be();
    });

    it('should have the property stop (base name: "stop")', function() {
      // uncomment below and update the code to test the property stop
      //var instane = new SwaggyJenkins.BranchImplpermissions();
      //expect(instance).to.be();
    });

    it('should have the property _class (base name: "_class")', function() {
      // uncomment below and update the code to test the property _class
      //var instane = new SwaggyJenkins.BranchImplpermissions();
      //expect(instance).to.be();
    });

  });

}));
