// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGResourceSinkSettings.h"

bool FResourceSinkPointsData::operator==(const FResourceSinkPointsData &other) const{ return bool(); }
#if WITH_EDITOR
void UFGResourceSinkSettings::PostInitProperties(){ Super::PostInitProperties(); }
void UFGResourceSinkSettings::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent){ Super::PostEditChangeProperty(PropertyChangedEvent); }
void UFGResourceSinkSettings::SetMaxPointsForItem(int32 maxPointsForItem){ }
void UFGResourceSinkSettings::SetPointCalculationExpression(FString pointCalculationExpression){ }
void UFGResourceSinkSettings::SetNumRepeatsPerLevel(int32 numRepeats){ }
void UFGResourceSinkSettings::SetNumLevels(int32 numLevels){ }
#endif 
TSubclassOf< class UFGItemDescriptor > UFGResourceSinkSettings::GetCouponClass(){ return TSubclassOf<class UFGItemDescriptor>(); }
