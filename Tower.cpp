// Fill out your copyright notice in the Description page of Project Settings.
#include "Tower.h"
#include "Tank.h"
#include "Kismet/GameplayStatics.h"

void ATower::BeginPlay()
{
	Super::BeginPlay();

	Tank = Cast<ATank>(UGameplayStatics::GetPlayerPawn(this, 0));
}
void ATower::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (Tank)
	{

	// Find the distance to the Tank
	float Distance = FVector::Dist(GetActorLocation(), Tank->GetActorLocation());

	// Check to see if the Tank is in range


	//If in range, rotate turret towards Tank



	}


}


