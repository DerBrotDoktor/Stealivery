// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ChaosWheeledVehicleMovementComponent.h"
#include "DeliveryVehicleMovementComponent.generated.h"

/**
 * 
 */
UCLASS()
class STEALIVERY_API UDeliveryVehicleMovementComponent : public UChaosWheeledVehicleMovementComponent
{
	GENERATED_BODY()
	
	FTimerHandle RecreatePhysicsHandle;

	UFUNCTION(BlueprintCallable)
	void SetVehicleMass(float NewMass);

	UFUNCTION(BlueprintCallable, BlueprintPure)
	float GetVehicleMass();
};
