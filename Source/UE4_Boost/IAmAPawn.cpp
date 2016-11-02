// Fill out your copyright notice in the Description page of Project Settings.

#include "UE4_Boost.h"
#include "IAmAPawn.h"


// Sets default values
AIAmAPawn::AIAmAPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AIAmAPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AIAmAPawn::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void AIAmAPawn::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

