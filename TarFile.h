/*
 * This header is generated by weak_classdump 0.2
 * on Thursday, July 10, 2014 at 2:04:04 AM Mountain Daylight Time
 * Operating System: Version 7.1.1 (Build 11D201)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

typedef struct{
	[ value1;
	1 value2;
	0 value3;
	0 value4;
	BOOL value5;
	[] value6;
	[ value7;
	8 value8;
	BOOL value9;
	[] value10;
	[ value11;
	8 value12;
	BOOL value13;
	[] value14;
	[ value15;
	8 value16;
	BOOL value17;
	[] value18;
	[ value19;
	1 value20;
	2 value21;
	BOOL value22;
	[] value23;
	[ value24;
	1 value25;
	2 value26;
	BOOL value27;
	[] value28;
	[ value29;
	8 value30;
	BOOL value31;
	[] value32;
	BOOL value33;
	[ value34;
	1 value35;
	0 value36;
	0 value37;
	BOOL value38;
	[] value39;
	[ value40;
	6 value41;
	BOOL value42;
	[] value43;
	[ value44;
	2 value45;
	BOOL value46;
	[] value47;
	[ value48;
	3 value49;
	2 value50;
	BOOL value51;
	[] value52;
	[ value53;
	3 value54;
	2 value55;
	BOOL value56;
	[] value57;
	[ value58;
	8 value59;
	BOOL value60;
	[] value61;
	[ value62;
	8 value63;
	BOOL value64;
	[] value65;
	[ value66;
	1 value67;
	5 value68;
	5 value69;
	BOOL value70;
	[] value71;
	[ value72;
	1 value73;
	2 value74;
	BOOL value75;
	[] value76;
} WCStruct_[100c][8c][8c][8c][12c][12c][8c]c[100c][6c][2c][32c][32c][8c][8c][155c][12c];


@interface TarFile : NSObject {
}
+(BOOL)tar:(id)arg1 relativeFromDirectory:(id)arg2 files:(id)arg3 cancelBlock:(id)arg4 progressBlock:(id)arg5;
+(unsigned)checksum:(WCStruct_[100c][8c][8c][8c][12c][12c][8c]c[100c][6c][2c][32c][32c][8c][8c][155c][12c]*)arg1;
+(BOOL)addFile:(id)arg1 relativeFromDirectory:(id)arg2 toTar:(id)arg3;
+(void)addEOF:(id)arg1;
+(BOOL)createDirectory:(id)arg1;
+(BOOL)untar:(id)arg1 extractToDirectory:(id)arg2 withOffset:(unsigned long long)arg3 progressBlock:(id)arg4;
@end