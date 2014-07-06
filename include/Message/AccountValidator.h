/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class NSArray, ActivityMonitor, Account, MFError;

@interface AccountValidator : NSObject {
	Account* _account;
	id _delegate;
	ActivityMonitor* _accountValidationActivity;
	struct {
		unsigned useSSL : 1;
		unsigned incomingServerSupportsSSL : 1;
		unsigned smtpServerSupportsSSL : 1;
		unsigned validationInProgress : 1;
		unsigned canceled : 1;
		unsigned unused : 27;
	} _flags;
	MFError* _incomingServerValidationError;
	MFError* _smtpServerValidationError;
	NSArray* _incomingServerAuthSchemes;
	NSArray* _smtpServerAuthSchemes;
}
// inherited: -(id)init;
// inherited: -(void)dealloc;
-(void)setDelegate:(id)delegate;
-(void)validateAccount:(id)account useSSL:(BOOL)ssl;
-(id)account;
-(void)cancelValidation;
-(id)_ispAccountInfo;
-(void)_validateAccount:(id)account;
-(BOOL)_incomingServerValid;
-(BOOL)_outgoingServerValid;
-(void)_updateValidationStatusForAccount:(id)account status:(id)status;
-(void)_backgroundValidateAccountFinished:(id)finished authSchemes:(id)schemes;
-(void)stop;
-(BOOL)accountValidationCanceled;
-(void)_validateAccountInBackground:(id)background;
-(BOOL)accountIsValid;
-(BOOL)accountSupportsSSL;
-(id)error;
@end

