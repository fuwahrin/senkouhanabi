// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
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

	//変数
	
	//ゲームモード
	AMyGameMode* MyGameMode;

	//花火が出現したか判断するboolean変数
	bool _IsFireStart;

	//入力文字
	FString _inputKey;

	//花火が落下したかの変数
	bool _isDrop;

	//入力ミスしたのカウント
	int _missCount;

	//成功数カウント
	int _SuccessCount;

	//TODO SPaner

	//出現タイマー
	int _SpawnTimer;

	//出現感覚の最小時間
	int _SpawnMinTimer;

	//コンボ判定
	bool _bisCommbo;

	//コンボカウンター
	int _CommboCounter;

	//最大コンボ数
	int MaxCommbo;


	//TODO　WGPlayUI変数を追加
	UWG_PlayUI PlayuUI;

	//TODO InputKeyDrawer

	//プレイ時間
	float Timer;

	//スコア
	int Score;

	UWG_Title TitleUi;
	
	//スタートボタンを押したか？
	bool _bisStartPush;

	//花火の色を設定しているVector変数
	FVector _hanabiColorVector;

	//花火の色設定
	float _hanabi_Red;
	float _hanabi_Green;
	float _hanabi_Blue;

	//TODO SkyLightの変数を設定
	
	//花火の初期k値
	FVector _firstLocation;

};
