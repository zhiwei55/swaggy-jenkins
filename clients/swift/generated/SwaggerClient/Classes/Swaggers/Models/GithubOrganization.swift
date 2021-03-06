//
// GithubOrganization.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


public class GithubOrganization: JSONEncodable {
    public var _class: String?
    public var links: GithubOrganizationlinks?
    public var jenkinsOrganizationPipeline: Bool?
    public var name: String?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["_class"] = self._class
        nillableDictionary["_links"] = self.links?.encodeToJSON()
        nillableDictionary["jenkinsOrganizationPipeline"] = self.jenkinsOrganizationPipeline
        nillableDictionary["name"] = self.name
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
