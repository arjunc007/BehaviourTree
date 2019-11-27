// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterBase.h"

// Sets default values
ACharacterBase::ACharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Health = 100.f;
}

// Called when the game starts or when spawned
void ACharacterBase::BeginPlay()
{
	ACharacter::BeginPlay();
	
}

// Called every frame
void ACharacterBase::Tick(float DeltaTime)
{
	ACharacter::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	ACharacter::SetupPlayerInputComponent(PlayerInputComponent);

}

void ACharacterBase::HealthInterfaceDamage(float Damage)
{
	Health -= Damage;

	UE_LOG(LogTemp, Warning, TEXT("Damge Taken"));

	if (Health < 0)
	{
		Destroy();
	}
}

