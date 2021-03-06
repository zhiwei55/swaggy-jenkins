//
// ComputerSet.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


open class ComputerSet: JSONEncodable {

    public var _class: String?
    public var busyExecutors: Int32?
    public var computer: [HudsonMasterComputer]?
    public var displayName: String?
    public var totalExecutors: Int32?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["_class"] = self._class
        nillableDictionary["busyExecutors"] = self.busyExecutors?.encodeToJSON()
        nillableDictionary["computer"] = self.computer?.encodeToJSON()
        nillableDictionary["displayName"] = self.displayName
        nillableDictionary["totalExecutors"] = self.totalExecutors?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
