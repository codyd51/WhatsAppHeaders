/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:03:55 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface KeychainWrapper : NSObject {
}
+(id)keychainValueWithIdentifier:(id)arg1;
+(void)setKeychainValue:(id)arg1 forIdentifier:(id)arg2;
+(void)deleteKeychainValueWithIdentifier:(id)arg1;
+(id)keychainItemMatching:(id)arg1 withAccessibilityControl:(BOOL)arg2;
+(BOOL)updateKeychainValue:(id)arg1 forIdentifier:(id)arg2;
+(BOOL)createKeychainValue:(id)arg1 forIdentifier:(id)arg2;
+(id)searchDictionary:(id)arg1 withAccessibilityControl:(BOOL)arg2;
@end