// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Price;

/**
 (public class)
 
 @ingroup AWSECommerceServicePortType
*/
@interface VariationSummary : NSObject <PicoBindable> {

@private
    Price *_lowestPrice;
    Price *_highestPrice;
    Price *_lowestSalePrice;
    Price *_highestSalePrice;

}


/**
 (public property)
 
 type : class Price
*/
@property (nonatomic, strong) Price *lowestPrice;

/**
 (public property)
 
 type : class Price
*/
@property (nonatomic, strong) Price *highestPrice;

/**
 (public property)
 
 type : class Price
*/
@property (nonatomic, strong) Price *lowestSalePrice;

/**
 (public property)
 
 type : class Price
*/
@property (nonatomic, strong) Price *highestSalePrice;


@end
