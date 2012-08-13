//
//  ARPOC PLugin
//  LetsGoMo Labs


#ifdef CORDOVA_FRAMEWORK
#import <CORDOVA/CDVPlugin.h>
#else
#import "CDVPlugin.h"
#endif

@interface ARPOC : CDVPlugin {
    NSString* callbackID;
    
}
@property (nonatomic, copy) NSString* callbackID;

-(void)showView:(NSMutableArray *)arguments withDict:(NSMutableDictionary *)options;
@end
