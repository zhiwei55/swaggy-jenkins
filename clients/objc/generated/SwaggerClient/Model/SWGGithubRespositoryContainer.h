#import <Foundation/Foundation.h>
#import "SWGObject.h"

/**
* Swaggy Jenkins
* Jenkins API clients generated from Swagger / Open API specification
*
* OpenAPI spec version: 0.1.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/


#import "SWGGithubRepositories.h"
#import "SWGGithubRespositoryContainerlinks.h"
@protocol SWGGithubRepositories;
@class SWGGithubRepositories;
@protocol SWGGithubRespositoryContainerlinks;
@class SWGGithubRespositoryContainerlinks;



@protocol SWGGithubRespositoryContainer
@end

@interface SWGGithubRespositoryContainer : SWGObject


@property(nonatomic) NSString* class;

@property(nonatomic) SWGGithubRespositoryContainerlinks* links;

@property(nonatomic) SWGGithubRepositories* repositories;

@end