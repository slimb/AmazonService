// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "OrderedDictionary.h"
#import "Summary.h"

@implementation Summary

@synthesize promotionId = _promotionId;
@synthesize category = _category;
@synthesize startDate = _startDate;
@synthesize endDate = _endDate;
@synthesize eligibilityRequirementDescription = _eligibilityRequirementDescription;
@synthesize benefitDescription = _benefitDescription;
@synthesize termsAndConditions = _termsAndConditions;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    return nil;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [OrderedDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"PromotionId" propertyName:@"promotionId" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"promotionId"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Category" propertyName:@"category" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"category"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"StartDate" propertyName:@"startDate" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"startDate"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"EndDate" propertyName:@"endDate" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"endDate"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"EligibilityRequirementDescription" propertyName:@"eligibilityRequirementDescription" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"eligibilityRequirementDescription"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"BenefitDescription" propertyName:@"benefitDescription" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"benefitDescription"];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"TermsAndConditions" propertyName:@"termsAndConditions" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"termsAndConditions"];
    
    return map;
}




@end