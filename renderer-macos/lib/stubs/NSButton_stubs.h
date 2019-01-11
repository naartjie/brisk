#import "Cocoa_stubs.h"
#define CAML_NAME_SPACE
#import <caml/mlvalues.h>

@interface Button : NSButton

@property(nonatomic, assign) value _callback;

- (void)setCallback:(value)action;

@end
