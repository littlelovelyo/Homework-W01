// Copyright Epic Games, Inc. All Rights Reserved.

#include "Homework_W01PickUpComponent.h"

UHomework_W01PickUpComponent::UHomework_W01PickUpComponent()
{
	// Setup the Sphere Collision
	SphereRadius = 32.f;
}

void UHomework_W01PickUpComponent::BeginPlay()
{
	Super::BeginPlay();

	// Register our Overlap Event
	OnComponentBeginOverlap.AddDynamic(this, &UHomework_W01PickUpComponent::OnSphereBeginOverlap);
}

void UHomework_W01PickUpComponent::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Checking if it is a First Person Character overlapping
	AHomework_W01Character* Character = Cast<AHomework_W01Character>(OtherActor);
	if(Character != nullptr)
	{
		// Notify that the actor is being picked up
		OnPickUp.Broadcast(Character);

		// Unregister from the Overlap Event so it is no longer triggered
		OnComponentBeginOverlap.RemoveAll(this);
	}
}
