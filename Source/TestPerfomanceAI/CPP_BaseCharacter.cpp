// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_BaseCharacter.h"

// Sets default values
ACPP_BaseCharacter::ACPP_BaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACPP_BaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	//GetMesh()->bEnableUpdateRateOptimizations = true;
	//GetMesh()->AnimUpdateRateParams->bShouldUseLodMap = true;
	//GetMesh()->AnimUpdateRateParams->MaxEvalRateForInterpolation = 15;
	//GetMesh()->AnimUpdateRateParams->LODToFrameSkipMap.Add(0, 0);
	//GetMesh()->AnimUpdateRateParams->LODToFrameSkipMap.Add(1, 10);
	//GetMesh()->AnimUpdateRateParams->LODToFrameSkipMap.Add(2, 5);
	//GetMesh()->AnimUpdateRateParams->BaseNonRenderedUpdateRate = 4;
}

// Called every frame
void ACPP_BaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACPP_BaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

