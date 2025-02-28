// Fill out your copyright notice in the Description page of Project Settings.


#include "NPCMassAgentComponent.h"
#include <MassEntitySubsystem.h>

void UNPCMassAgentComponent::DestroyMassEntity()
{
    UWorld* World = GetWorld();
    if (!World)
    {
        return;
    }

    UMassEntitySubsystem* MassSubsystem = World->GetSubsystem<UMassEntitySubsystem>();
    if (!MassSubsystem)
    {
        return;
    }

    FMassEntityManager& EntityManager = MassSubsystem->GetMutableEntityManager();
    FMassEntityHandle EntityHandle = GetEntityHandle();

    if (!EntityHandle.IsValid())
    {
        return;
    }

    EntityManager.Defer().DestroyEntity(EntityHandle);
}
