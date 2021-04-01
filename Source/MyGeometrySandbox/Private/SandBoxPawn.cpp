// Fill out your copyright notice in the Description page of Project Settings.


#include "SandBoxPawn.h"
#include "Components/InputComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"

DEFINE_LOG_CATEGORY_STATIC(LogSandBoxPawn, All, All)

// Sets default values
ASandBoxPawn::ASandBoxPawn()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneComponent = CreateDefaultSubobject<USceneComponent>("SceneComponent");
	SetRootComponent(SceneComponent);

	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("StaticMeshComponent");
	StaticMeshComponent->SetupAttachment(GetRootComponent());

	CameraComponent = CreateDefaultSubobject<UCameraComponent>("CameraComponent");
	CameraComponent->SetupAttachment(GetRootComponent());

}

// Called when the game starts or when spawned
void ASandBoxPawn::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ASandBoxPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (!VelocityVector.IsZero()) { //&& IsControlled()
		const FVector NewLocation = GetActorLocation() + Velocity * DeltaTime * VelocityVector;
		SetActorLocation(NewLocation);
		VelocityVector = FVector::ZeroVector;
	}
}

// Called to bind functionality to input
void ASandBoxPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	if (PlayerInputComponent) {
		PlayerInputComponent->BindAxis("MoveForward", this, &ASandBoxPawn::MoveForward);
		PlayerInputComponent->BindAxis("MoveRight", this, &ASandBoxPawn::MoveRight);
	}
}

void ASandBoxPawn::MoveForward(float Amount)
{
	//UE_LOG(LogSandBoxPawn, Warning, TEXT("MoveForward: %f"), Amount);
	VelocityVector.X = Amount;
}

void ASandBoxPawn::MoveRight(float Amount)
{
	//UE_LOG(LogSandBoxPawn, Warning, TEXT("MoveRight: %f"), Amount);
	VelocityVector.Y = Amount;
}


void ASandBoxPawn::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	if (!NewController) return;
	UE_LOG(LogSandBoxPawn, Error, TEXT("PossessedBy %s"), *GetName(), *NewController->GetName());
}

void ASandBoxPawn::UnPossessed()
{
	Super::UnPossessed();
	UE_LOG(LogSandBoxPawn, Warning, TEXT("UnPossessed %s"), *GetName());
}

