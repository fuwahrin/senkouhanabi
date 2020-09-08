// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "enum.h"
#include "MyGameMode.generated.h"


USTRUCT(BlueprintType)
struct FInputKey
{
	GENERATED_USTRUCT_BODY()
	
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "FInputKey")
	FString KeyValue;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "FInputKey")
	float InputWaitTime;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "FInputKey")
	bool IsInput;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "FInputKey")
	EColor ColorType;

};
/**
 * 
 */
UCLASS()
class SENKOUHANABI_API AMyGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:

	//変数

	//入力ガイドの変数
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "FInputKey")
	TArray<FString> _inputKeyRefarence;

	//
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "FInputKey")
	int _index;

	//
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "FInputKey")
	int _maxIndex;


	//TODO inputkeyStructy作成
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "FInputKey")
	TArray<FInputKey> _inputkeyArray;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "FInputKey")
	int _successCount;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "FInputKey")
	int _missCount;

	//TODO　COLOR\TYEP
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "FInputKey")
	EColor _colorType;

	//乱数で算出した要素番号
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "FInputKey")
	int _randomIndex;


protected:
	//コンストラクタ

	AMyGameMode();

protected:
	//関数
	
	//ガイドキーの設定を行う。
	UFUNCTION()
	void SetSelectKey();
	
public:
	UFUNCTION()
	//ガイド構造体配列の先頭を削除する。
	void InputKeyArrayDelete();

};
