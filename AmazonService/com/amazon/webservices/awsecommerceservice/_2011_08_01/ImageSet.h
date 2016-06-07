// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Image;

/**
 (public class)
 
 @ingroup AWSECommerceServicePortType
*/
@interface ImageSet : NSObject <PicoBindable> {

@private
    Image *_swatchImage;
    Image *_smallImage;
    Image *_thumbnailImage;
    Image *_tinyImage;
    Image *_mediumImage;
    Image *_largeImage;
    NSString *_category;

}


/**
 (public property)
 
 type : class Image
*/
@property (nonatomic, strong) Image *swatchImage;

/**
 (public property)
 
 type : class Image
*/
@property (nonatomic, strong) Image *smallImage;

/**
 (public property)
 
 type : class Image
*/
@property (nonatomic, strong) Image *thumbnailImage;

/**
 (public property)
 
 type : class Image
*/
@property (nonatomic, strong) Image *tinyImage;

/**
 (public property)
 
 type : class Image
*/
@property (nonatomic, strong) Image *mediumImage;

/**
 (public property)
 
 type : class Image
*/
@property (nonatomic, strong) Image *largeImage;

/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, strong) NSString *category;


@end
