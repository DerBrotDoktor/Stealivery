// Fill out your copyright notice in the Description page of Project Settings.


#include "DeliveryVehiclePawn.h"
#include "DeliveryVehicleMovementComponent.h"

ADeliveryVehiclePawn::ADeliveryVehiclePawn(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer.SetDefaultSubobjectClass<UDeliveryVehicleMovementComponent>("DeliveryVehicleComponent"))
{
}
