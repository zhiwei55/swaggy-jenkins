//
// Hudson.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


public class Hudson: JSONEncodable {
    public var _class: String?
    public var assignedLabels: [HudsonassignedLabels]?
    public var mode: String?
    public var nodeDescription: String?
    public var nodeName: String?
    public var numExecutors: Int32?
    public var description: String?
    public var jobs: [FreeStyleProject]?
    public var primaryView: AllView?
    public var quietingDown: Bool?
    public var slaveAgentPort: Int32?
    public var unlabeledLoad: UnlabeledLoadStatistics?
    public var useCrumbs: Bool?
    public var useSecurity: Bool?
    public var views: [AllView]?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["_class"] = self._class
        nillableDictionary["assignedLabels"] = self.assignedLabels?.encodeToJSON()
        nillableDictionary["mode"] = self.mode
        nillableDictionary["nodeDescription"] = self.nodeDescription
        nillableDictionary["nodeName"] = self.nodeName
        nillableDictionary["numExecutors"] = self.numExecutors?.encodeToJSON()
        nillableDictionary["description"] = self.description
        nillableDictionary["jobs"] = self.jobs?.encodeToJSON()
        nillableDictionary["primaryView"] = self.primaryView?.encodeToJSON()
        nillableDictionary["quietingDown"] = self.quietingDown
        nillableDictionary["slaveAgentPort"] = self.slaveAgentPort?.encodeToJSON()
        nillableDictionary["unlabeledLoad"] = self.unlabeledLoad?.encodeToJSON()
        nillableDictionary["useCrumbs"] = self.useCrumbs
        nillableDictionary["useSecurity"] = self.useSecurity
        nillableDictionary["views"] = self.views?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
