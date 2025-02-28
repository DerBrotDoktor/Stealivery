// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WheeledVehiclePawn.h"
#include "DeliveryVehiclePawn.generated.h"

/**
 * 
 */
UCLASS(abstract, config = Game, BlueprintType)
class STEALIVERY_API ADeliveryVehiclePawn : public AWheeledVehiclePawn
{
	GENERATED_UCLASS_BODY()
};
