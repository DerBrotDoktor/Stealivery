// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MassAgentComponent.h"
#include "NPCMassAgentComponent.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class STEALIVERY_API UNPCMassAgentComponent : public UMassAgentComponent
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	void DestroyMassEntity();
};
