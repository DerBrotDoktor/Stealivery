// Fill out your copyright notice in the Description page of Project Settings.


#include "DeliveryVehicleMovementComponent.h"

void UDeliveryVehicleMovementComponent::SetVehicleMass(float NewMass)
{
	Mass = NewMass;

	RecreatePhysicsState();
}

float UDeliveryVehicleMovementComponent::GetVehicleMass()
{
	return Mass;
}

