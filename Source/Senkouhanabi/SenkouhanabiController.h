// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
//#include "WG_PlayUI.h"
//#include "WG_Title.h"
#include "enum.h"

#include "SenkouhanabiController.generated.h"

//クラスの前方宣言
class AMyGameMode;
class UWG_PlayUI;
class UWG_Title;
/**
 * 
 */
UCLASS()
class SENKOUHANABI_API ASenkouhanabiController : public APlayerController
{
	GENERATED_BODY()

protected:
	//コンストラクタ
	ASenkouhanabiController();
	
	virtual void BeginPlay() override;

	//入力イベント
	virtual void SetupInputComponent() override;
	//入力した文字の比較と描画を行うメソッド
	UFUNCTION()
		void SetInputKey(FKey key);

	//入力した文字とガイドの文字とを比較するメソッド
	UFUNCTION()
		void CheckInputKey(FString Input);

	UFUNCTION()
		void ScoreStateCounter(bool IsSuccess, EColor type);

	UFUNCTION()
		void GameEndCheck();

protected:

	//変数
	
	//ゲームモード
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "SenkouhanabiController")
	AMyGameMode* MyGameMode;

	//花火が出現したか判断するboolean変数
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "SenkouhanabiController")
	bool _bIsFireStart;

	//入力文字
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "SenkouhanabiController")
	FString _inputKey;

	//花火が落下したかの変数
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "SenkouhanabiController")
	bool _bisDrop;

	//入力ミスしたのカウント
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "SenkouhanabiController")
	int _missCount;

	//成功数カウント
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "SenkouhanabiController")
	int _SuccessCount;

	//TODO SPaner

	//出現タイマー
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "SenkouhanabiController")
	int _SpawnTimer;

	//出現感覚の最小時間
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "SenkouhanabiController")
	int _SpawnMinTimer;


	//コンボ判定
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "SenkouhanabiController")
	bool _bisCommbo;

	//コンボカウンター
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "SenkouhanabiController")
	int _CommboCounter;

	//最大コンボ数
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "SenkouhanabiController")
	int _MaxCommbo;


	//PlayUIWidgetのクラス参照用
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "SenkouhanabiController")
	//UWG_PlayUI* PlayUI;
	TSubclassOf<UUserWidget> _PlayUIClass;

	//変数格納用
	UUserWidget* _PlayUI;


	//TODO InputKeyDrawer

	//プレイ時間
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "SenkouhanabiController")
	float Timer;

	//スコア
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "SenkouhanabiController")
	int Score;

	//TitleWidgetのクラス参照用
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "SenkouhanabiController")
	//UWG_Title* TitleUi;
	TSubclassOf<UUserWidget> _TitleUIClass;

	//変数に格納用
	UUserWidget* _TitleUI;
	
	
	//スタートボタンを押したか？
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "SenkouhanabiController")
	bool _bisStartPush;

	//花火の色を設定しているVector変数
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "SenkouhanabiController")
	FVector _hanabiColorVector;

	//花火の色設定
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "SenkouhanabiController")
	float _hanabi_Red;
	
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "SenkouhanabiController")
	float _hanabi_Green;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "SenkouhanabiController")
	float _hanabi_Blue;

	//TODO SkyLightの変数を設定
	
	//花火の初期k値
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "SenkouhanabiController")
	FVector _firstLocation;

	//失敗数の上限
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "SenkouhanabiController")
	int _GameEndCounter;
};
