//
// Pipeline.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


open class Pipeline: Codable {

    public var _class: String?
    public var organization: String?
    public var name: String?
    public var displayName: String?
    public var fullName: String?
    public var weatherScore: Int?
    public var estimatedDurationInMillis: Int?
    public var latestRun: PipelinelatestRun?

    public init() {}


    private enum CodingKeys: String, CodingKey { 
        case _class = "_class"
        case organization = "organization"
        case name = "name"
        case displayName = "displayName"
        case fullName = "fullName"
        case weatherScore = "weatherScore"
        case estimatedDurationInMillis = "estimatedDurationInMillis"
        case latestRun = "latestRun"
    }

}
