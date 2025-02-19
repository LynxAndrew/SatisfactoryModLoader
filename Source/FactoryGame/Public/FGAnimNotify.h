// Copyright Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "FactoryGame.h"
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "FGAnimNotify.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams( FNotifyTrigger, const class UFGAnimNotify*, Notify, AActor*, Owner );

/**
 * 
 */
UCLASS( Abstract )
class FACTORYGAME_API UFGAnimNotify : public UAnimNotify
{
	GENERATED_BODY()
public:
	//~ Begin UAnimNotify interface
	virtual void Notify( USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation ) override;
	//~ End UAnimNotify interface

	/** Called from OnAttackNotify. */
	UPROPERTY( BlueprintAssignable, Category = "Attack", DisplayName = "OnAttackNotify" )
	FNotifyTrigger mOnNotifyTriggered;
};
