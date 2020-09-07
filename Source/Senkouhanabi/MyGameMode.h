// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MyGameMode.generated.h"


//色選択の列挙
UENUM(BlueprintType)
enum class EColor : uint8
{
	RED,
	GREEN,
	BLUE,
};

USTRUCT(BlueprintType)
struct FInputKey
{
	GENERATED_BODY()
		FString KeyValue;

	float InputWaitTime;

	bool IsInput;

	EColor ColorType;


};
/**
 * 
 */
UCLASS()
class SENKOUHANABI_API AMyGameMode : public AGameModeBase
{
	GENERATED_BODY()

protected:

	//変数

	//入力ガイドの変数
	TArray<FString> _inputKeyRefarence;

	//
	int _index;

	//
	int _maxIndex;


	//TODO inputkeyStructy作成
	TArray<FInputKey> _inputkeyArray;


	int _successCount;

	int _missCount;

	//TODO　COLOR\TYEP
	EColor _colorType;

	//乱数で算出した要素番号
	int _randomIndex;


protected:
	//コンストラクタ

	AMyGameMode();

protected:
	//関数
	
	//ガイドキーの設定を行う。
	void SetSelectKey();
	
	//ガイド構造体配列の先頭を削除する。
	void InputKeyArrayDelete();
	
};
