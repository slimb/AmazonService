// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 (public class)
 
 @ingroup AWSECommerceServicePortType
*/
@interface ItemLookupRequest : NSObject <PicoBindable> {

@private
    NSString *_condition;
    NSString *_idType;
    NSString *_merchantId;
    NSMutableArray *_itemId;
    NSMutableArray *_responseGroup;
    NSString *_searchIndex;
    NSString *_variationPage;
    NSString *_relatedItemPage;
    NSMutableArray *_relationshipType;
    NSString *_includeReviewsSummary;
    NSNumber *_truncateReviewsAt;

}


/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, strong) NSString *condition;

/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, strong) NSString *idType;

/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, strong) NSString *merchantId;

/**
 (public property)
 
 entry type : NSString, wrapper for primitive string
*/

@property (nonatomic, strong) NSMutableArray *itemId;

/**
 (public property)
 
 entry type : NSString, wrapper for primitive string
*/

@property (nonatomic, strong) NSMutableArray *responseGroup;

/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, strong) NSString *searchIndex;

/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, strong) NSString *variationPage;

/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, strong) NSString *relatedItemPage;

/**
 (public property)
 
 entry type : NSString, wrapper for primitive string
*/

@property (nonatomic, strong) NSMutableArray *relationshipType;

/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, strong) NSString *includeReviewsSummary;

/**
 (public property)
 
 type : NSNumber, wrapper for primitive long
*/
@property (nonatomic, strong) NSNumber *truncateReviewsAt;


@end
