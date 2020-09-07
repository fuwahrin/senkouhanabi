// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FireSpark.generated.h"


//クラスの前方宣言
class UAudioComponent;


UCLASS()
class SENKOUHANABI_API AFireSpark : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFireSpark();
protected:

	//コンポーネント群

	//シーンコンポーネント
	UPROPERTY(EditAnyWhere)
		USceneComponent* SceneComp;


	//線香花火
	UPROPERTY(EditAnyWhere)
		UStaticMeshComponent* FireSparkMesh;
	
	//花火ベース
	UPROPERTY(EditAnyWhere)
		UStaticMeshComponent* hanabiPos;

	//花火のオーディオ
	UPROPERTY(EditAnyWhere)
		UAudioComponent* Audio;

	

		


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;




};
