// Fill out your copyright notice in the Description page of Project Settings.


#include "FireSpark.h"
#include "Components/AudioComponent.h"

// Sets default values
AFireSpark::AFireSpark()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = SceneComp;


	FireSparkMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FireSpark"));
	FireSparkMesh->SetupAttachment(RootComponent);
	hanabiPos = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Hanabi"));
	hanabiPos->SetupAttachment(FireSparkMesh);
	Audio = CreateDefaultSubobject<UAudioComponent>(TEXT("Audio"));

}

// Called when the game starts or when spawned
void AFireSpark::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFireSpark::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

