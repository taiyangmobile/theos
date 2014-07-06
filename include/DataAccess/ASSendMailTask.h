/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "ASTask.h"

@class NSData;

@interface ASSendMailTask : ASTask {
	NSData* _mimeMessage;
}
-(id)initWithMessage:(id)message;
// inherited: -(void)dealloc;
// inherited: -(void)finishWithError:(id)error;
-(int)_streamType;
// inherited: -(id)requestBodyStream;
// inherited: -(id)requestBody;
// inherited: -(int)commandCode;
// inherited: -(id)parameterData;
// inherited: -(id)command;
// inherited: -(id)contentType;
// inherited: -(BOOL)expectsWBXML;
// inherited: -(int)connectionActionForResponse:(id)response;
@end

