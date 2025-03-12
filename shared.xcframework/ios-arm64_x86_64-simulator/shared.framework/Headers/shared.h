#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class SharedDie, SharedDiceCollectionCompanion, SharedDiceCollection, SharedDiceCollectionDesc, SharedDiceCollectionRoll, SharedDiceNotationInterpreterCompanion, SharedOperatorWithLocation, SharedDiceRollInstruction, SharedDiceRollInstructionStack, SharedRange, SharedResultType, SharedOperationType, SharedDiceRollInstructionCompanion, SharedDiceRollInstructionResultCompanion, SharedDiceRollInstructionResult, SharedDiceRollInstructionStackCompanion, SharedDiceRollingSessionCompanion, SharedRollResult, SharedDiceRollingSession, SharedKotlinEnumCompanion, SharedKotlinEnum<E>, SharedKotlinArray<T>;

@protocol SharedPlatform, SharedKotlinComparable, SharedKotlinIterator;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface SharedBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface SharedBase (SharedBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface SharedMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface SharedMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorSharedKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface SharedNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface SharedByte : SharedNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface SharedUByte : SharedNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface SharedShort : SharedNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface SharedUShort : SharedNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface SharedInt : SharedNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface SharedUInt : SharedNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface SharedLong : SharedNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface SharedULong : SharedNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface SharedFloat : SharedNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface SharedDouble : SharedNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface SharedBoolean : SharedNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Die")))
@interface SharedDie : SharedBase
- (instancetype)initWithSides:(int32_t)sides lastResult:(int32_t)lastResult __attribute__((swift_name("init(sides:lastResult:)"))) __attribute__((objc_designated_initializer));
- (SharedDie *)doCopySides:(int32_t)sides lastResult:(int32_t)lastResult __attribute__((swift_name("doCopy(sides:lastResult:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void)roll __attribute__((swift_name("roll()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t result __attribute__((swift_name("result")));
@property (readonly) int32_t sides __attribute__((swift_name("sides")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiceCollection")))
@interface SharedDiceCollection : SharedBase
- (instancetype)initWithSize:(int32_t)size sides:(int32_t)sides indexFoundAt:(int32_t)indexFoundAt __attribute__((swift_name("init(size:sides:indexFoundAt:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedDiceCollectionCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)countResultsAboveOrMatchingBoundBound:(int32_t)bound __attribute__((swift_name("countResultsAboveOrMatchingBound(bound:)")));
- (int32_t)countResultsBelowOrMatchingBoundBound:(int32_t)bound __attribute__((swift_name("countResultsBelowOrMatchingBound(bound:)")));
- (SharedDie *)dieAtIndex:(int32_t)index __attribute__((swift_name("dieAt(index:)")));
- (void)doExplodes __attribute__((swift_name("doExplodes()")));
- (NSArray<SharedInt *> *)roll __attribute__((swift_name("roll()")));
- (void)rollSilent __attribute__((swift_name("rollSilent()")));
- (void)setResultsResults:(NSArray<SharedInt *> *)results __attribute__((swift_name("setResults(results:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)total __attribute__((swift_name("total()")));
@property BOOL doExplosionsStack __attribute__((swift_name("doExplosionsStack")));
@property int32_t explosionLowerBound __attribute__((swift_name("explosionLowerBound")));
@property int32_t indexFoundAt __attribute__((swift_name("indexFoundAt")));
@property (readonly) NSArray<SharedInt *> *lastResults __attribute__((swift_name("lastResults")));
@property (readonly) int32_t sides __attribute__((swift_name("sides")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiceCollection.Companion")))
@interface SharedDiceCollectionCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedDiceCollectionCompanion *shared __attribute__((swift_name("shared")));
- (SharedDiceCollection *)createSize:(int32_t)size sides:(int32_t)sides __attribute__((swift_name("create(size:sides:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiceCollectionDesc")))
@interface SharedDiceCollectionDesc : SharedBase
- (instancetype)initWithSides:(int32_t)sides size:(int32_t)size __attribute__((swift_name("init(sides:size:)"))) __attribute__((objc_designated_initializer));
- (SharedDiceCollectionDesc *)doCopySides:(int32_t)sides size:(int32_t)size __attribute__((swift_name("doCopy(sides:size:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t sides __attribute__((swift_name("sides")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiceCollectionRoll")))
@interface SharedDiceCollectionRoll : SharedBase
- (instancetype)initWithDef:(SharedDiceCollectionDesc *)def rolledResults:(NSArray<SharedInt *> *)rolledResults successes:(SharedInt * _Nullable)successes __attribute__((swift_name("init(def:rolledResults:successes:)"))) __attribute__((objc_designated_initializer));
- (SharedDiceCollectionRoll *)doCopyDef:(SharedDiceCollectionDesc *)def rolledResults:(NSArray<SharedInt *> *)rolledResults successes:(SharedInt * _Nullable)successes __attribute__((swift_name("doCopy(def:rolledResults:successes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedDiceCollectionDesc *def __attribute__((swift_name("def")));
@property (readonly) NSArray<SharedInt *> *rolledResults __attribute__((swift_name("rolledResults")));
@property (readonly) SharedInt * _Nullable successes __attribute__((swift_name("successes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiceNotationInterpreter")))
@interface SharedDiceNotationInterpreter : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedDiceNotationInterpreterCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)charIsInlineWhitespaceC:(unichar)c __attribute__((swift_name("charIsInlineWhitespace(c:)")));
- (BOOL)charIsOperatorC:(unichar)c __attribute__((swift_name("charIsOperator(c:)")));
- (NSString *)doCopyRangeToStringTarget:(NSString *)target startIndex:(int32_t)startIndex length:(int32_t)length __attribute__((swift_name("doCopyRangeToString(target:startIndex:length:)")));
- (BOOL)couldBeDiceCollectionStr:(NSString *)str __attribute__((swift_name("couldBeDiceCollection(str:)")));
- (BOOL)couldBeNumberStr:(NSString *)str __attribute__((swift_name("couldBeNumber(str:)")));
- (BOOL)couldBeOperandStr:(NSString *)str __attribute__((swift_name("couldBeOperand(str:)")));
- (int32_t)countPairsOfParensInRangeStr:(NSString *)str startIndex:(int32_t)startIndex length:(int32_t)length __attribute__((swift_name("countPairsOfParensInRange(str:startIndex:length:)")));
- (SharedOperatorWithLocation *)createOperatorWithLocationText:(NSString *)text index:(int32_t)index __attribute__((swift_name("createOperatorWithLocation(text:index:)")));
- (SharedDiceRollInstruction * _Nullable)diceRollInstructionFromStringOperandStr:(NSString *)operandStr __attribute__((swift_name("diceRollInstructionFromString(operandStr:)")));
- (SharedDiceRollInstructionStack *)diceRollInstructionStackFromExpressionExpression:(NSString *)expression __attribute__((swift_name("diceRollInstructionStackFromExpression(expression:)")));
- (int32_t)indexOfInnermostOpeningParenStr:(NSString *)str startIndex:(int32_t)startIndex length:(int32_t)length __attribute__((swift_name("indexOfInnermostOpeningParen(str:startIndex:length:)")));
- (int32_t)indexOfInnermostOpeningParenIgnoringRangesStr:(NSString *)str startIndex:(int32_t)startIndex length:(int32_t)length rangesToIgnore:(NSMutableArray<SharedRange *> *)rangesToIgnore __attribute__((swift_name("indexOfInnermostOpeningParenIgnoringRanges(str:startIndex:length:rangesToIgnore:)")));
- (int32_t)indexOfNextClosingParamStr:(NSString *)str startIndex:(int32_t)startIndex __attribute__((swift_name("indexOfNextClosingParam(str:startIndex:)")));
- (int32_t)indexOfNextOperatorInRangeStr:(NSString *)str startIndex:(int32_t)startIndex length:(int32_t)length __attribute__((swift_name("indexOfNextOperatorInRange(str:startIndex:length:)")));
- (BOOL)isDigitC:(unichar)c __attribute__((swift_name("isDigit(c:)")));
- (BOOL)isOperatorC:(unichar)c __attribute__((swift_name("isOperator(c:)")));
- (void)postfixifyExpressionPostfixRanges:(NSMutableArray<SharedRange *> *)postfixRanges expression:(NSString *)expression __attribute__((swift_name("postfixifyExpression(postfixRanges:expression:)")));
- (int32_t)precedenceForOperatorC:(unichar)c __attribute__((swift_name("precedenceForOperator(c:)")));
- (NSArray<NSString *> *)splitStringStr:(NSString *)str delimiter:(NSString *)delimiter __attribute__((swift_name("splitString(str:delimiter:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiceNotationInterpreter.Companion")))
@interface SharedDiceNotationInterpreterCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedDiceNotationInterpreterCompanion *shared __attribute__((swift_name("shared")));
- (SharedDiceCollection * _Nullable)createFromNotationNotation:(NSString *)notation __attribute__((swift_name("createFromNotation(notation:)")));
- (SharedDiceCollection * _Nullable)diceCollectionFromCoreNotationNotation:(NSString *)notation __attribute__((swift_name("diceCollectionFromCoreNotation(notation:)")));
- (SharedDiceCollection * _Nullable)diceCollectionFromPercentileNotationNotation:(NSString *)notation __attribute__((swift_name("diceCollectionFromPercentileNotation(notation:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiceRollInstruction")))
@interface SharedDiceRollInstruction : SharedBase
- (instancetype)initWithValue:(id _Nullable)value expectedResultType:(SharedResultType *)expectedResultType numArgs:(int32_t)numArgs opType:(SharedOperationType *)opType __attribute__((swift_name("init(value:expectedResultType:numArgs:opType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedDiceRollInstructionCompanion *companion __attribute__((swift_name("companion")));
- (SharedDiceRollInstruction *)doOperationArgs:(NSArray<SharedDiceRollInstruction *> *)args __attribute__((swift_name("doOperation(args:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (SharedDiceCollection *)getDiceCollection __attribute__((swift_name("getDiceCollection()")));
- (double)getNumber __attribute__((swift_name("getNumber()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void)setOperationTypeOpType:(SharedOperationType *)opType __attribute__((swift_name("setOperationType(opType:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property SharedResultType *expectedResultType __attribute__((swift_name("expectedResultType")));
@property int32_t numArgs __attribute__((swift_name("numArgs")));
@property SharedOperationType *opType __attribute__((swift_name("opType")));
@property id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiceRollInstruction.Companion")))
@interface SharedDiceRollInstructionCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedDiceRollInstructionCompanion *shared __attribute__((swift_name("shared")));
- (SharedDiceRollInstruction *)cloneOriginal:(SharedDiceRollInstruction *)original __attribute__((swift_name("clone(original:)")));
- (SharedDiceRollInstruction *)create __attribute__((swift_name("create()")));
- (SharedDiceRollInstruction *)createNumberNum:(double)num __attribute__((swift_name("createNumber(num:)")));
- (SharedDiceRollInstruction * _Nullable)fromStringStringRepresentation:(NSString *)stringRepresentation __attribute__((swift_name("fromString(stringRepresentation:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiceRollInstructionResult")))
@interface SharedDiceRollInstructionResult : SharedBase
@property (class, readonly, getter=companion) SharedDiceRollInstructionResultCompanion *companion __attribute__((swift_name("companion")));
- (SharedDiceCollection * _Nullable)getDiceCollection __attribute__((swift_name("getDiceCollection()")));
- (double)getNumber __attribute__((swift_name("getNumber()")));
- (void)print __attribute__((swift_name("print()")));
- (double)valueAsDouble __attribute__((swift_name("valueAsDouble()")));
@property id _Nullable resultValue __attribute__((swift_name("resultValue")));
@property SharedResultType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiceRollInstructionResult.Companion")))
@interface SharedDiceRollInstructionResultCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedDiceRollInstructionResultCompanion *shared __attribute__((swift_name("shared")));
- (SharedDiceRollInstructionResult *)create __attribute__((swift_name("create()")));
- (SharedDiceRollInstructionResult *)doInit __attribute__((swift_name("doInit()")));
- (SharedDiceRollInstructionResult *)withDiceCollectionDc:(SharedDiceCollection *)dc __attribute__((swift_name("withDiceCollection(dc:)")));
- (SharedDiceRollInstructionResult *)withDoubleValue:(double)value __attribute__((swift_name("withDouble(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiceRollInstructionStack")))
@interface SharedDiceRollInstructionStack : SharedBase
- (instancetype)initWithInitialSize:(int32_t)initialSize __attribute__((swift_name("init(initialSize:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedDiceRollInstructionStackCompanion *companion __attribute__((swift_name("companion")));
- (SharedDiceRollInstruction * _Nullable)evaluate __attribute__((swift_name("evaluate()")));
- (NSArray<SharedDiceCollection *> *)getDiceCollections __attribute__((swift_name("getDiceCollections()")));
- (SharedDiceRollInstruction * _Nullable)instructionAtIndex:(int32_t)index __attribute__((swift_name("instructionAt(index:)")));
- (SharedDiceRollInstruction * _Nullable)peek __attribute__((swift_name("peek()")));
- (SharedDiceRollInstruction * _Nullable)pop __attribute__((swift_name("pop()")));
- (void)pushInstruction:(SharedDiceRollInstruction *)instruction __attribute__((swift_name("push(instruction:)")));
@property (readonly) NSMutableArray<SharedDiceRollInstruction *> *instructions __attribute__((swift_name("instructions")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiceRollInstructionStack.Companion")))
@interface SharedDiceRollInstructionStackCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedDiceRollInstructionStackCompanion *shared __attribute__((swift_name("shared")));
- (SharedDiceRollInstructionStack *)createSize:(int32_t)size __attribute__((swift_name("create(size:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiceRollingSession")))
@interface SharedDiceRollingSession : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedDiceRollingSessionCompanion *companion __attribute__((swift_name("companion")));
- (SharedRollResult *)resolveNotationExpression:(NSString *)expression __attribute__((swift_name("resolveNotation(expression:)")));
@property int32_t botchUpperBound __attribute__((swift_name("botchUpperBound")));
@property NSMutableArray<SharedDiceCollection *> * _Nullable diceCollections __attribute__((swift_name("diceCollections")));
@property int32_t doubleSuccessLowerBound __attribute__((swift_name("doubleSuccessLowerBound")));
@property int32_t successLowerBound __attribute__((swift_name("successLowerBound")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiceRollingSession.Companion")))
@interface SharedDiceRollingSessionCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedDiceRollingSessionCompanion *shared __attribute__((swift_name("shared")));
- (SharedDiceRollingSession *)create __attribute__((swift_name("create()")));
@end

__attribute__((swift_name("Platform")))
@protocol SharedPlatform
@required
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSPlatform")))
@interface SharedIOSPlatform : SharedBase <SharedPlatform>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol SharedKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface SharedKotlinEnum<E> : SharedBase <SharedKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OperationType")))
@interface SharedOperationType : SharedKotlinEnum<SharedOperationType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedOperationType *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) SharedOperationType *number __attribute__((swift_name("number")));
@property (class, readonly) SharedOperationType *diceCollection __attribute__((swift_name("diceCollection")));
@property (class, readonly) SharedOperationType *add __attribute__((swift_name("add")));
@property (class, readonly) SharedOperationType *subtract __attribute__((swift_name("subtract")));
@property (class, readonly) SharedOperationType *multiply __attribute__((swift_name("multiply")));
@property (class, readonly) SharedOperationType *divide __attribute__((swift_name("divide")));
@property (class, readonly) SharedOperationType *sum __attribute__((swift_name("sum")));
@property (class, readonly) SharedOperationType *mean __attribute__((swift_name("mean")));
@property (class, readonly) SharedOperationType *max __attribute__((swift_name("max")));
+ (SharedKotlinArray<SharedOperationType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedOperationType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OperatorWithLocation")))
@interface SharedOperatorWithLocation : SharedBase
- (instancetype)initWithOperation:(SharedOperationType *)operation index:(int32_t)index __attribute__((swift_name("init(operation:index:)"))) __attribute__((objc_designated_initializer));
- (SharedOperatorWithLocation *)doCopyOperation:(SharedOperationType *)operation index:(int32_t)index __attribute__((swift_name("doCopy(operation:index:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t index __attribute__((swift_name("index")));
@property (readonly) SharedOperationType *operation __attribute__((swift_name("operation")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Range")))
@interface SharedRange : SharedBase
- (instancetype)initWithIndex:(int32_t)index length:(int32_t)length __attribute__((swift_name("init(index:length:)"))) __attribute__((objc_designated_initializer));
- (SharedRange *)doCopyIndex:(int32_t)index length:(int32_t)length __attribute__((swift_name("doCopy(index:length:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isInRangeI:(int32_t)i __attribute__((swift_name("isInRange(i:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property int32_t index __attribute__((swift_name("index")));
@property int32_t length __attribute__((swift_name("length")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResultType")))
@interface SharedResultType : SharedKotlinEnum<SharedResultType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedResultType *void_ __attribute__((swift_name("void_")));
@property (class, readonly) SharedResultType *double_ __attribute__((swift_name("double_")));
@property (class, readonly) SharedResultType *diceCollection __attribute__((swift_name("diceCollection")));
+ (SharedKotlinArray<SharedResultType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedResultType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RollResult")))
@interface SharedRollResult : SharedBase
- (instancetype)initWithDiceCollectionRolls:(NSArray<SharedDiceCollectionRoll *> *)diceCollectionRolls total:(double)total __attribute__((swift_name("init(diceCollectionRolls:total:)"))) __attribute__((objc_designated_initializer));
- (SharedRollResult *)doCopyDiceCollectionRolls:(NSArray<SharedDiceCollectionRoll *> *)diceCollectionRolls total:(double)total __attribute__((swift_name("doCopy(diceCollectionRolls:total:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedDiceCollectionRoll *> *diceCollectionRolls __attribute__((swift_name("diceCollectionRolls")));
@property (readonly) double total __attribute__((swift_name("total")));
@end

@interface SharedDiceCollection (Extensions)
- (NSString *)createResultsString __attribute__((swift_name("createResultsString()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ArrayList_StackKt")))
@interface SharedArrayList_StackKt : SharedBase
+ (id _Nullable)peek:(NSMutableArray<id> *)receiver __attribute__((swift_name("peek(_:)")));
+ (id _Nullable)pop:(NSMutableArray<id> *)receiver __attribute__((swift_name("pop(_:)")));
+ (BOOL)push:(NSMutableArray<id> *)receiver item:(id _Nullable)item __attribute__((swift_name("push(_:item:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiceRollInstructionStackKt")))
@interface SharedDiceRollInstructionStackKt : SharedBase
+ (void)printElements:(NSArray<SharedDiceRollInstructionResult *> *)receiver __attribute__((swift_name("printElements(_:)")));
+ (void)printInstructions:(NSArray<SharedDiceRollInstruction *> *)receiver __attribute__((swift_name("printInstructions(_:)")));
+ (SharedDiceRollInstructionResult * _Nullable)resultFromInstructionDri:(SharedDiceRollInstruction *)dri __attribute__((swift_name("resultFromInstruction(dri:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform_iosKt")))
@interface SharedPlatform_iosKt : SharedBase
+ (id<SharedPlatform>)getPlatform __attribute__((swift_name("getPlatform()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StringFormatKt")))
@interface SharedStringFormatKt : SharedBase
+ (NSString *)format:(NSString *)receiver args:(SharedKotlinArray<id> *)args __attribute__((swift_name("format(_:args:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface SharedKotlinEnumCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface SharedKotlinArray<T> : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<SharedKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol SharedKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
