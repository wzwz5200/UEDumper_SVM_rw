
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: Chaos
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/FieldSystemEngine.FieldSystemActor
/// Size: 0x0298 (664 bytes) (0x000290 - 0x000298) align 8 MaxSize: 0x0298
class AFieldSystemActor : public AActor
{ 
public:
	class UFieldSystemComponent*                       FieldSystemComponent;                                       // 0x0290   (0x0008)  
};

/// Class /Script/FieldSystemEngine.FieldSystem
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UFieldSystem : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Struct /Script/FieldSystemEngine.FieldObjectCommands
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FFieldObjectCommands
{ 
	TArray<FName>                                      TargetNames;                                                // 0x0000   (0x0010)  
	TArray<class UFieldNodeBase*>                      RootNodes;                                                  // 0x0010   (0x0010)  
	TArray<class UFieldSystemMetaData*>                MetaDatas;                                                  // 0x0020   (0x0010)  
};

/// Class /Script/FieldSystemEngine.FieldSystemComponent
/// Size: 0x0640 (1600 bytes) (0x000568 - 0x000640) align 16 MaxSize: 0x0640
class UFieldSystemComponent : public UPrimitiveComponent
{ 
public:
	class UFieldSystem*                                FieldSystem;                                                // 0x0568   (0x0008)  
	bool                                               bIsWorldField;                                              // 0x0570   (0x0001)  
	bool                                               bIsChaosField;                                              // 0x0571   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0572   (0x0006)  MISSED
	SDK_UNDEFINED(16,1190) /* TArray<TWeakObjectPtr<AChaosSolverActor*>> */ __um(SupportedSolvers);                // 0x0578   (0x0010)  
	FFieldObjectCommands                               ConstructionCommands;                                       // 0x0588   (0x0030)  
	FFieldObjectCommands                               BufferCommands;                                             // 0x05B8   (0x0030)  
	unsigned char                                      UnknownData01_7[0x58];                                      // 0x05E8   (0x0058)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ResetFieldSystem
	// void ResetFieldSystem();                                                                                                 // [0x3ff6390] Final|Native|Public|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.RemovePersistentFields
	// void RemovePersistentFields();                                                                                           // [0x3ff6370] Final|Native|Public|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce
	// void ApplyUniformVectorFalloffForce(bool Enabled, FVector position, FVector Direction, float Radius, float Magnitude);   // [0x3ff6030] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyStrainField
	// void ApplyStrainField(bool Enabled, FVector position, float Radius, float Magnitude, int32_t Iterations);                // [0x3ff5da0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField
	// void ApplyStayDynamicField(bool Enabled, FVector position, float Radius);                                                // [0x3ff5b90] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce
	// void ApplyRadialVectorFalloffForce(bool Enabled, FVector position, float Radius, float Magnitude);                       // [0x3ff58a0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyRadialForce
	// void ApplyRadialForce(bool Enabled, FVector position, float Magnitude);                                                  // [0x3ff56a0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField
	// void ApplyPhysicsField(bool Enabled, TEnumAsByte<EFieldPhysicsType> Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field); // [0x3ff5540] Final|Native|Public|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyLinearForce
	// void ApplyLinearForce(bool Enabled, FVector Direction, float Magnitude);                                                 // [0x3ff5340] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.AddPersistentField
	// void AddPersistentField(bool Enabled, TEnumAsByte<EFieldPhysicsType> Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field); // [0x3ff51e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.AddFieldCommand
	// void AddFieldCommand(bool Enabled, TEnumAsByte<EFieldPhysicsType> Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field); // [0x3ff5080] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FieldSystemEngine.FieldSystemMetaData
/// Size: 0x00A0 (160 bytes) (0x0000A0 - 0x0000A0) align 8 MaxSize: 0x00A0
class UFieldSystemMetaData : public UActorComponent
{ 
public:
};

/// Class /Script/FieldSystemEngine.FieldSystemMetaDataIteration
/// Size: 0x00A8 (168 bytes) (0x0000A0 - 0x0000A8) align 8 MaxSize: 0x00A8
class UFieldSystemMetaDataIteration : public UFieldSystemMetaData
{ 
public:
	int32_t                                            Iterations;                                                 // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00A4   (0x0004)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration
	// class UFieldSystemMetaDataIteration* SetMetaDataIteration(int32_t Iterations);                                           // [0x3ff6950] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.FieldSystemMetaDataProcessingResolution
/// Size: 0x00A8 (168 bytes) (0x0000A0 - 0x0000A8) align 8 MaxSize: 0x00A8
class UFieldSystemMetaDataProcessingResolution : public UFieldSystemMetaData
{ 
public:
	TEnumAsByte<EFieldResolutionType>                  ResolutionType;                                             // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00A1   (0x0007)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType
	// class UFieldSystemMetaDataProcessingResolution* SetMetaDataaProcessingResolutionType(TEnumAsByte<EFieldResolutionType> ResolutionType); // [0x3ff69f0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.FieldSystemMetaDataFilter
/// Size: 0x00A8 (168 bytes) (0x0000A0 - 0x0000A8) align 8 MaxSize: 0x00A8
class UFieldSystemMetaDataFilter : public UFieldSystemMetaData
{ 
public:
	TEnumAsByte<EFieldFilterType>                      FilterType;                                                 // 0x00A0   (0x0001)  
	TEnumAsByte<EFieldObjectType>                      ObjectType;                                                 // 0x00A1   (0x0001)  
	TEnumAsByte<EFieldPositionType>                    PositionType;                                               // 0x00A2   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5];                                       // 0x00A3   (0x0005)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.FieldSystemMetaDataFilter.SetMetaDataFilterType
	// class UFieldSystemMetaDataFilter* SetMetaDataFilterType(TEnumAsByte<EFieldFilterType> FilterType, TEnumAsByte<EFieldObjectType> ObjectType, TEnumAsByte<EFieldPositionType> PositionType); // [0x3ff6840] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.FieldNodeBase
/// Size: 0x00A0 (160 bytes) (0x0000A0 - 0x0000A0) align 8 MaxSize: 0x00A0
class UFieldNodeBase : public UActorComponent
{ 
public:
};

/// Class /Script/FieldSystemEngine.FieldNodeInt
/// Size: 0x00A0 (160 bytes) (0x0000A0 - 0x0000A0) align 8 MaxSize: 0x00A0
class UFieldNodeInt : public UFieldNodeBase
{ 
public:
};

/// Class /Script/FieldSystemEngine.FieldNodeFloat
/// Size: 0x00A0 (160 bytes) (0x0000A0 - 0x0000A0) align 8 MaxSize: 0x00A0
class UFieldNodeFloat : public UFieldNodeBase
{ 
public:
};

/// Class /Script/FieldSystemEngine.FieldNodeVector
/// Size: 0x00A0 (160 bytes) (0x0000A0 - 0x0000A0) align 8 MaxSize: 0x00A0
class UFieldNodeVector : public UFieldNodeBase
{ 
public:
};

/// Class /Script/FieldSystemEngine.UniformInteger
/// Size: 0x00A8 (168 bytes) (0x0000A0 - 0x0000A8) align 8 MaxSize: 0x00A8
class UUniformInteger : public UFieldNodeInt
{ 
public:
	int32_t                                            Magnitude;                                                  // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00A4   (0x0004)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.UniformInteger.SetUniformInteger
	// class UUniformInteger* SetUniformInteger(int32_t Magnitude);                                                             // [0x3ff6950] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.RadialIntMask
/// Size: 0x00D0 (208 bytes) (0x0000A0 - 0x0000D0) align 8 MaxSize: 0x00D0
class URadialIntMask : public UFieldNodeInt
{ 
public:
	float                                              Radius;                                                     // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00A4   (0x0004)  MISSED
	FVector                                            position;                                                   // 0x00A8   (0x0018)  
	int32_t                                            InteriorValue;                                              // 0x00C0   (0x0004)  
	int32_t                                            ExteriorValue;                                              // 0x00C4   (0x0004)  
	TEnumAsByte<ESetMaskConditionType>                 SetMaskCondition;                                           // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x00C9   (0x0007)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.RadialIntMask.SetRadialIntMask
	// class URadialIntMask* SetRadialIntMask(float Radius, FVector position, int32_t InteriorValue, int32_t ExteriorValue, TEnumAsByte<ESetMaskConditionType> SetMaskConditionIn); // [0x3ff72b0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.UniformScalar
/// Size: 0x00A8 (168 bytes) (0x0000A0 - 0x0000A8) align 8 MaxSize: 0x00A8
class UUniformScalar : public UFieldNodeFloat
{ 
public:
	float                                              Magnitude;                                                  // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00A4   (0x0004)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.UniformScalar.SetUniformScalar
	// class UUniformScalar* SetUniformScalar(float Magnitude);                                                                 // [0x3ff7570] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.WaveScalar
/// Size: 0x00D0 (208 bytes) (0x0000A0 - 0x0000D0) align 8 MaxSize: 0x00D0
class UWaveScalar : public UFieldNodeFloat
{ 
public:
	float                                              Magnitude;                                                  // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00A4   (0x0004)  MISSED
	FVector                                            position;                                                   // 0x00A8   (0x0018)  
	float                                              Wavelength;                                                 // 0x00C0   (0x0004)  
	float                                              Period;                                                     // 0x00C4   (0x0004)  
	TEnumAsByte<EWaveFunctionType>                     Function;                                                   // 0x00C8   (0x0001)  
	TEnumAsByte<EFieldFalloffType>                     Falloff;                                                    // 0x00C9   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x00CA   (0x0006)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.WaveScalar.SetWaveScalar
	// class UWaveScalar* SetWaveScalar(float Magnitude, FVector position, float Wavelength, float Period, float time, TEnumAsByte<EWaveFunctionType> Function, TEnumAsByte<EFieldFalloffType> Falloff); // [0x3ff76c0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.RadialFalloff
/// Size: 0x00D8 (216 bytes) (0x0000A0 - 0x0000D8) align 8 MaxSize: 0x00D8
class URadialFalloff : public UFieldNodeFloat
{ 
public:
	float                                              Magnitude;                                                  // 0x00A0   (0x0004)  
	float                                              MinRange;                                                   // 0x00A4   (0x0004)  
	float                                              MaxRange;                                                   // 0x00A8   (0x0004)  
	float                                              Default;                                                    // 0x00AC   (0x0004)  
	float                                              Radius;                                                     // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00B4   (0x0004)  MISSED
	FVector                                            position;                                                   // 0x00B8   (0x0018)  
	TEnumAsByte<EFieldFalloffType>                     Falloff;                                                    // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x00D1   (0x0007)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.RadialFalloff.SetRadialFalloff
	// class URadialFalloff* SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, FVector position, TEnumAsByte<EFieldFalloffType> Falloff); // [0x3ff7060] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.PlaneFalloff
/// Size: 0x00F0 (240 bytes) (0x0000A0 - 0x0000F0) align 8 MaxSize: 0x00F0
class UPlaneFalloff : public UFieldNodeFloat
{ 
public:
	float                                              Magnitude;                                                  // 0x00A0   (0x0004)  
	float                                              MinRange;                                                   // 0x00A4   (0x0004)  
	float                                              MaxRange;                                                   // 0x00A8   (0x0004)  
	float                                              Default;                                                    // 0x00AC   (0x0004)  
	float                                              Distance;                                                   // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00B4   (0x0004)  MISSED
	FVector                                            position;                                                   // 0x00B8   (0x0018)  
	FVector                                            Normal;                                                     // 0x00D0   (0x0018)  
	TEnumAsByte<EFieldFalloffType>                     Falloff;                                                    // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x00E9   (0x0007)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.PlaneFalloff.SetPlaneFalloff
	// class UPlaneFalloff* SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, FVector position, FVector Normal, TEnumAsByte<EFieldFalloffType> Falloff); // [0x3ff6dc0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.BoxFalloff
/// Size: 0x0120 (288 bytes) (0x0000A0 - 0x000120) align 16 MaxSize: 0x0120
class UBoxFalloff : public UFieldNodeFloat
{ 
public:
	float                                              Magnitude;                                                  // 0x00A0   (0x0004)  
	float                                              MinRange;                                                   // 0x00A4   (0x0004)  
	float                                              MaxRange;                                                   // 0x00A8   (0x0004)  
	float                                              Default;                                                    // 0x00AC   (0x0004)  
	FTransform                                         Transform;                                                  // 0x00B0   (0x0060)  
	TEnumAsByte<EFieldFalloffType>                     Falloff;                                                    // 0x0110   (0x0001)  
	unsigned char                                      UnknownData00_7[0xF];                                       // 0x0111   (0x000F)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.BoxFalloff.SetBoxFalloff
	// class UBoxFalloff* SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, FTransform Transform, TEnumAsByte<EFieldFalloffType> Falloff); // [0x3ff6480] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.NoiseField
/// Size: 0x0110 (272 bytes) (0x0000A0 - 0x000110) align 16 MaxSize: 0x0110
class UNoiseField : public UFieldNodeFloat
{ 
public:
	float                                              MinRange;                                                   // 0x00A0   (0x0004)  
	float                                              MaxRange;                                                   // 0x00A4   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00A8   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x00B0   (0x0060)  


	/// Functions
	// Function /Script/FieldSystemEngine.NoiseField.SetNoiseField
	// class UNoiseField* SetNoiseField(float MinRange, float MaxRange, FTransform Transform);                                  // [0x3ff6a80] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.UniformVector
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UUniformVector : public UFieldNodeVector
{ 
public:
	float                                              Magnitude;                                                  // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00A4   (0x0004)  MISSED
	FVector                                            Direction;                                                  // 0x00A8   (0x0018)  


	/// Functions
	// Function /Script/FieldSystemEngine.UniformVector.SetUniformVector
	// class UUniformVector* SetUniformVector(float Magnitude, FVector Direction);                                              // [0x3ff7480] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.RadialVector
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class URadialVector : public UFieldNodeVector
{ 
public:
	float                                              Magnitude;                                                  // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00A4   (0x0004)  MISSED
	FVector                                            position;                                                   // 0x00A8   (0x0018)  


	/// Functions
	// Function /Script/FieldSystemEngine.RadialVector.SetRadialVector
	// class URadialVector* SetRadialVector(float Magnitude, FVector position);                                                 // [0x3ff7480] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.RandomVector
/// Size: 0x00A8 (168 bytes) (0x0000A0 - 0x0000A8) align 8 MaxSize: 0x00A8
class URandomVector : public UFieldNodeVector
{ 
public:
	float                                              Magnitude;                                                  // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00A4   (0x0004)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.RandomVector.SetRandomVector
	// class URandomVector* SetRandomVector(float Magnitude);                                                                   // [0x3ff7570] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.OperatorField
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UOperatorField : public UFieldNodeBase
{ 
public:
	float                                              Magnitude;                                                  // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00A4   (0x0004)  MISSED
	class UFieldNodeBase*                              RightField;                                                 // 0x00A8   (0x0008)  
	class UFieldNodeBase*                              LeftField;                                                  // 0x00B0   (0x0008)  
	TEnumAsByte<EFieldOperationType>                   Operation;                                                  // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x00B9   (0x0007)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.OperatorField.SetOperatorField
	// class UOperatorField* SetOperatorField(float Magnitude, class UFieldNodeBase* LeftField, class UFieldNodeBase* RightField, TEnumAsByte<EFieldOperationType> Operation); // [0x3ff6c50] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.ToIntegerField
/// Size: 0x00A8 (168 bytes) (0x0000A0 - 0x0000A8) align 8 MaxSize: 0x00A8
class UToIntegerField : public UFieldNodeInt
{ 
public:
	class UFieldNodeFloat*                             FloatField;                                                 // 0x00A0   (0x0008)  


	/// Functions
	// Function /Script/FieldSystemEngine.ToIntegerField.SetToIntegerField
	// class UToIntegerField* SetToIntegerField(class UFieldNodeFloat* FloatField);                                             // [0x3ff7620] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.ToFloatField
/// Size: 0x00A8 (168 bytes) (0x0000A0 - 0x0000A8) align 8 MaxSize: 0x00A8
class UToFloatField : public UFieldNodeFloat
{ 
public:
	class UFieldNodeInt*                               IntField;                                                   // 0x00A0   (0x0008)  


	/// Functions
	// Function /Script/FieldSystemEngine.ToFloatField.SetToFloatField
	// class UToFloatField* SetToFloatField(class UFieldNodeInt* IntegerField);                                                 // [0x3ff7620] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.CullingField
/// Size: 0x00B8 (184 bytes) (0x0000A0 - 0x0000B8) align 8 MaxSize: 0x00B8
class UCullingField : public UFieldNodeBase
{ 
public:
	class UFieldNodeBase*                              Culling;                                                    // 0x00A0   (0x0008)  
	class UFieldNodeBase*                              Field;                                                      // 0x00A8   (0x0008)  
	TEnumAsByte<EFieldCullingOperationType>            Operation;                                                  // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00B1   (0x0007)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.CullingField.SetCullingField
	// class UCullingField* SetCullingField(class UFieldNodeBase* Culling, class UFieldNodeBase* Field, TEnumAsByte<EFieldCullingOperationType> Operation); // [0x3ff6720] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.ReturnResultsTerminal
/// Size: 0x00A0 (160 bytes) (0x0000A0 - 0x0000A0) align 8 MaxSize: 0x00A0
class UReturnResultsTerminal : public UFieldNodeBase
{ 
public:


	/// Functions
	// Function /Script/FieldSystemEngine.ReturnResultsTerminal.SetReturnResultsTerminal
	// class UReturnResultsTerminal* SetReturnResultsTerminal();                                                                // [0x3ff7600] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

#pragma pack(pop)


static_assert(sizeof(AFieldSystemActor) == 0x0298); // 664 bytes (0x000290 - 0x000298)
static_assert(sizeof(UFieldSystem) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FFieldObjectCommands) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UFieldSystemComponent) == 0x0640); // 1600 bytes (0x000568 - 0x000640)
static_assert(sizeof(UFieldSystemMetaData) == 0x00A0); // 160 bytes (0x0000A0 - 0x0000A0)
static_assert(sizeof(UFieldSystemMetaDataIteration) == 0x00A8); // 168 bytes (0x0000A0 - 0x0000A8)
static_assert(sizeof(UFieldSystemMetaDataProcessingResolution) == 0x00A8); // 168 bytes (0x0000A0 - 0x0000A8)
static_assert(sizeof(UFieldSystemMetaDataFilter) == 0x00A8); // 168 bytes (0x0000A0 - 0x0000A8)
static_assert(sizeof(UFieldNodeBase) == 0x00A0); // 160 bytes (0x0000A0 - 0x0000A0)
static_assert(sizeof(UFieldNodeInt) == 0x00A0); // 160 bytes (0x0000A0 - 0x0000A0)
static_assert(sizeof(UFieldNodeFloat) == 0x00A0); // 160 bytes (0x0000A0 - 0x0000A0)
static_assert(sizeof(UFieldNodeVector) == 0x00A0); // 160 bytes (0x0000A0 - 0x0000A0)
static_assert(sizeof(UUniformInteger) == 0x00A8); // 168 bytes (0x0000A0 - 0x0000A8)
static_assert(sizeof(URadialIntMask) == 0x00D0); // 208 bytes (0x0000A0 - 0x0000D0)
static_assert(sizeof(UUniformScalar) == 0x00A8); // 168 bytes (0x0000A0 - 0x0000A8)
static_assert(sizeof(UWaveScalar) == 0x00D0); // 208 bytes (0x0000A0 - 0x0000D0)
static_assert(sizeof(URadialFalloff) == 0x00D8); // 216 bytes (0x0000A0 - 0x0000D8)
static_assert(sizeof(UPlaneFalloff) == 0x00F0); // 240 bytes (0x0000A0 - 0x0000F0)
static_assert(sizeof(UBoxFalloff) == 0x0120); // 288 bytes (0x0000A0 - 0x000120)
static_assert(sizeof(UNoiseField) == 0x0110); // 272 bytes (0x0000A0 - 0x000110)
static_assert(sizeof(UUniformVector) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(URadialVector) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(URandomVector) == 0x00A8); // 168 bytes (0x0000A0 - 0x0000A8)
static_assert(sizeof(UOperatorField) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UToIntegerField) == 0x00A8); // 168 bytes (0x0000A0 - 0x0000A8)
static_assert(sizeof(UToFloatField) == 0x00A8); // 168 bytes (0x0000A0 - 0x0000A8)
static_assert(sizeof(UCullingField) == 0x00B8); // 184 bytes (0x0000A0 - 0x0000B8)
static_assert(sizeof(UReturnResultsTerminal) == 0x00A0); // 160 bytes (0x0000A0 - 0x0000A0)
static_assert(offsetof(AFieldSystemActor, FieldSystemComponent) == 0x0290);
static_assert(offsetof(FFieldObjectCommands, TargetNames) == 0x0000);
static_assert(offsetof(FFieldObjectCommands, RootNodes) == 0x0010);
static_assert(offsetof(FFieldObjectCommands, MetaDatas) == 0x0020);
static_assert(offsetof(UFieldSystemComponent, FieldSystem) == 0x0568);
static_assert(offsetof(UFieldSystemComponent, ConstructionCommands) == 0x0588);
static_assert(offsetof(UFieldSystemComponent, BufferCommands) == 0x05B8);
static_assert(offsetof(UFieldSystemMetaDataProcessingResolution, ResolutionType) == 0x00A0);
static_assert(offsetof(UFieldSystemMetaDataFilter, FilterType) == 0x00A0);
static_assert(offsetof(UFieldSystemMetaDataFilter, ObjectType) == 0x00A1);
static_assert(offsetof(UFieldSystemMetaDataFilter, PositionType) == 0x00A2);
static_assert(offsetof(URadialIntMask, position) == 0x00A8);
static_assert(offsetof(URadialIntMask, SetMaskCondition) == 0x00C8);
static_assert(offsetof(UWaveScalar, position) == 0x00A8);
static_assert(offsetof(UWaveScalar, Function) == 0x00C8);
static_assert(offsetof(UWaveScalar, Falloff) == 0x00C9);
static_assert(offsetof(URadialFalloff, position) == 0x00B8);
static_assert(offsetof(URadialFalloff, Falloff) == 0x00D0);
static_assert(offsetof(UPlaneFalloff, position) == 0x00B8);
static_assert(offsetof(UPlaneFalloff, Normal) == 0x00D0);
static_assert(offsetof(UPlaneFalloff, Falloff) == 0x00E8);
static_assert(offsetof(UBoxFalloff, Transform) == 0x00B0);
static_assert(offsetof(UBoxFalloff, Falloff) == 0x0110);
static_assert(offsetof(UNoiseField, Transform) == 0x00B0);
static_assert(offsetof(UUniformVector, Direction) == 0x00A8);
static_assert(offsetof(URadialVector, position) == 0x00A8);
static_assert(offsetof(UOperatorField, RightField) == 0x00A8);
static_assert(offsetof(UOperatorField, LeftField) == 0x00B0);
static_assert(offsetof(UOperatorField, Operation) == 0x00B8);
static_assert(offsetof(UToIntegerField, FloatField) == 0x00A0);
static_assert(offsetof(UToFloatField, IntField) == 0x00A0);
static_assert(offsetof(UCullingField, Culling) == 0x00A0);
static_assert(offsetof(UCullingField, Field) == 0x00A8);
static_assert(offsetof(UCullingField, Operation) == 0x00B0);
