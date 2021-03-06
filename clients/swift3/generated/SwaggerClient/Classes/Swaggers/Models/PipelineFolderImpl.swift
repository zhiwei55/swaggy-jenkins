//
// PipelineFolderImpl.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


open class PipelineFolderImpl: JSONEncodable {

    public var _class: String?
    public var displayName: String?
    public var fullName: String?
    public var name: String?
    public var organization: String?
    public var numberOfFolders: Int32?
    public var numberOfPipelines: Int32?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["_class"] = self._class
        nillableDictionary["displayName"] = self.displayName
        nillableDictionary["fullName"] = self.fullName
        nillableDictionary["name"] = self.name
        nillableDictionary["organization"] = self.organization
        nillableDictionary["numberOfFolders"] = self.numberOfFolders?.encodeToJSON()
        nillableDictionary["numberOfPipelines"] = self.numberOfPipelines?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
