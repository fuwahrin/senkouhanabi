// Fill out your copyright notice in the Description page of Project Settings.


#include "SenkouhanabiController.h"
#include "MyGameMode.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Blueprint/UserWidget.h"

ASenkouhanabiController::ASenkouhanabiController()
{
	//PrimaryActorTick.bCanEverTick = true;

	//変数の初期化
	_SpawnTimer = 1.5f;
	_SpawnMinTimer = 0.5f;
	_hanabiColorVector = FVector(1.0f, 0.3f, 0.1f);

	//BPで作成したPlayUIクラスの取得
	ConstructorHelpers::FClassFinder<UUserWidget>PlayUIClassFinder(TEXT("/Game/Developers/fuwarrin/Collections/UI/WG_PlayUI"));
	//クラスが存在しているか確認
	if (PlayUIClassFinder.Class)
	{
		_PlayUIClass = (UClass*)PlayUIClassFinder.Class;
	}

	//BPで作成したTitleUIクラスの取得
	ConstructorHelpers::FClassFinder<UUserWidget>TitleUIClassFinder(TEXT("/Game/Developers/fuwarrin/Collections/UI/WG_StartUI"));
	//クラスが存在しているか確認
	if (TitleUIClassFinder.Class)
	{
		_TitleUIClass = (UClass*)TitleUIClassFinder.Class;
	}

}

//インプット登録
void ASenkouhanabiController::SetupInputComponent()
{
	Super::SetupInputComponent();

	//入力イベントの登録
	InputComponent->BindAction("PushA", IE_Pressed, this, &ASenkouhanabiController::SetInputKey);
	//InputComponent->BindAction("PushA", IE_Released, this, &ASenkouhanabiController::SetInputKey);

	InputComponent->BindAction("PushB", IE_Pressed, this, &ASenkouhanabiController::SetInputKey);
	//InputComponent->BindAction("PushB", IE_Released, this, &ASenkouhanabiController::SetInputKey);

	InputComponent->BindAction("PushC", IE_Pressed, this, &ASenkouhanabiController::SetInputKey);
	//InputComponent->BindAction("PushC", IE_Released, this, &ASenkouhanabiController::SetInputKey);

	InputComponent->BindAction("PushD", IE_Pressed, this, &ASenkouhanabiController::SetInputKey);
	//InputComponent->BindAction("PushD", IE_Released, this, &ASenkouhanabiController::SetInputKey);

	InputComponent->BindAction("PushE", IE_Pressed, this, &ASenkouhanabiController::SetInputKey);
	//InputComponent->BindAction("PushE", IE_Released, this, &ASenkouhanabiController::SetInputKey);

	InputComponent->BindAction("PushF", IE_Pressed, this, &ASenkouhanabiController::SetInputKey);
	//InputComponent->BindAction("PushF", IE_Released, this, &ASenkouhanabiController::SetInputKey);

	InputComponent->BindAction("PushG", IE_Pressed, this, &ASenkouhanabiController::SetInputKey);
	//InputComponent->BindAction("PushG", IE_Released, this, &ASenkouhanabiController::SetInputKey);

	InputComponent->BindAction("PushH", IE_Pressed, this, &ASenkouhanabiController::SetInputKey);
	//InputComponent->BindAction("PushH", IE_Released, this, &ASenkouhanabiController::SetInputKey);

	InputComponent->BindAction("PushI", IE_Pressed, this, &ASenkouhanabiController::SetInputKey);
	//InputComponent->BindAction("PushI", IE_Released, this, &ASenkouhanabiController::SetInputKey);

	InputComponent->BindAction("PushJ", IE_Pressed, this, &ASenkouhanabiController::SetInputKey);
	//InputComponent->BindAction("PushJ", IE_Released, this, &ASenkouhanabiController::SetInputKey);

	InputComponent->BindAction("PushK", IE_Pressed, this, &ASenkouhanabiController::SetInputKey);
	//InputComponent->BindAction("PushK", IE_Released, this, &ASenkouhanabiController::SetInputKey);

	InputComponent->BindAction("PushL", IE_Pressed, this, &ASenkouhanabiController::SetInputKey);
	//InputComponent->BindAction("PushL", IE_Released, this, &ASenkouhanabiController::SetInputKey);

	InputComponent->BindAction("PushM", IE_Pressed, this, &ASenkouhanabiController::SetInputKey);
	//InputComponent->BindAction("PushM", IE_Released, this, &ASenkouhanabiController::SetInputKey);

	InputComponent->BindAction("PushN", IE_Pressed, this, &ASenkouhanabiController::SetInputKey);
	//InputComponent->BindAction("PushN", IE_Released, this, &ASenkouhanabiController::SetInputKey);

	InputComponent->BindAction("PushO", IE_Pressed, this, &ASenkouhanabiController::SetInputKey);
	//InputComponent->BindAction("PushO", IE_Released, this, &ASenkouhanabiController::SetInputKey);

	InputComponent->BindAction("PushP", IE_Pressed, this, &ASenkouhanabiController::SetInputKey);
	//InputComponent->BindAction("PushP", IE_Released, this, &ASenkouhanabiController::SetInputKey);

	InputComponent->BindAction("PushQ", IE_Pressed, this, &ASenkouhanabiController::SetInputKey);
	//InputComponent->BindAction("PushQ", IE_Released, this, &ASenkouhanabiController::SetInputKey);

	InputComponent->BindAction("PushR", IE_Pressed, this, &ASenkouhanabiController::SetInputKey);
	//InputComponent->BindAction("PushR", IE_Released, this, &ASenkouhanabiController::SetInputKey);

	InputComponent->BindAction("PushS", IE_Pressed, this, &ASenkouhanabiController::SetInputKey);
	//InputComponent->BindAction("PushS", IE_Released, this, &ASenkouhanabiController::SetInputKey);

	InputComponent->BindAction("PushT", IE_Pressed, this, &ASenkouhanabiController::SetInputKey);
	//InputComponent->BindAction("PushT", IE_Released, this, &ASenkouhanabiController::SetInputKey);

	InputComponent->BindAction("PushU", IE_Pressed, this, &ASenkouhanabiController::SetInputKey);
	//InputComponent->BindAction("PushU", IE_Released, this, &ASenkouhanabiController::SetInputKey);

	InputComponent->BindAction("PushV", IE_Pressed, this, &ASenkouhanabiController::SetInputKey);
	//InputComponent->BindAction("PushV", IE_Released, this, &ASenkouhanabiController::SetInputKey);

	InputComponent->BindAction("PushW", IE_Pressed, this, &ASenkouhanabiController::SetInputKey);
	//InputComponent->BindAction("PushW", IE_Released, this, &ASenkouhanabiController::SetInputKey);

	InputComponent->BindAction("PushX", IE_Pressed, this, &ASenkouhanabiController::SetInputKey);
	//InputComponent->BindAction("PushX", IE_Released, this, &ASenkouhanabiController::SetInputKey);

	InputComponent->BindAction("PushY", IE_Pressed, this, &ASenkouhanabiController::SetInputKey);
	//InputComponent->BindAction("PushY", IE_Released, this, &ASenkouhanabiController::SetInputKey);

	InputComponent->BindAction("PushZ", IE_Pressed, this, &ASenkouhanabiController::SetInputKey);
	//InputComponent->BindAction("PushZ", IE_Released, this, &ASenkouhanabiController::SetInputKey);

}

void ASenkouhanabiController::BeginPlay()
{
	//ワールドを取得
	UWorld* world = GetWorld();

	//毎回有効なワールドが買えるわけではないの条件をつける
	if(world)
	{
		//ゲームモードの取得
		MyGameMode = (AMyGameMode *)GetWorld()->GetAuthGameMode();
	}

	//Widgetの作成
	_TitleUI = CreateWidget<UUserWidget>(this, _TitleUIClass);
	_PlayUI = CreateWidget<UUserWidget>(this, _PlayUIClass);

	//表示
	_TitleUI->AddToViewport();

	

}

void ASenkouhanabiController::SetInputKey(FKey key)
{
	//入力したキーを変数に格納
	_inputKey = key.GetFName().ToString();
	//UE_LOG(LogTemp, Warning , TEXT("KeyName = %s"), *_inputKey );

	//入力したキーとガイドのキーと一致しているか比較
	CheckInputKey(_inputKey);

	//描画
	//InputKeyDrawer();
}

void ASenkouhanabiController::CheckInputKey(FString Input)
{
	AMyGameMode* gm = Cast<AMyGameMode>(GetWorld()->GetAuthGameMode());
	if (gm)
	{
		//値が生成されているか確認
		if (gm->_inputkeyArray.IsValidIndex(0))
		{
			FInputKey GuideKey = gm->_inputkeyArray[0];
			
			bool bCheck = GuideKey.IsInput && GuideKey.KeyValue == Input;
			//入力可能状態か確認 & 入力されたボタンと格納されている値（ガイドの値）と一致しているか確認
			if (bCheck)
			{
				//一致しているとき

				//コンボカウントを増やす
				_CommboCounter++;

				//コンボがないならコンボ計算フラグを立てる
				if (!_bisCommbo)
				{
					_bisCommbo = true;
				}

				//スコアを加算
				Score += 20;

				//WG_PlayUI ScoreDraw();

			}
			else
			{
				//入力文字とガイドの文字が不一致だった時

				//コンボフラグを切る
				_bisCommbo = false;

				//最大コンボ数を超えているか判定
				if (_MaxCommbo < _CommboCounter)
				{
					//超えていれば最大コンボ数を更新する
					_MaxCommbo = _CommboCounter;
				}

				//コンボ計算用のカウンターを0にする
				_CommboCounter = 0;

				//WG_PlayUI LifeEvent

			}

			// WG_PlayUI CommboCounterAdd;

			//InputComplate

			ScoreStateCounter(bCheck , GuideKey.ColorType);
		}
	}
}

void ASenkouhanabiController::ScoreStateCounter(bool IsSuccess, EColor type)
{
	//入力文字とガイド文字が一致しているか？
	if (IsSuccess)
	{
		//一致していれば成功数をカウント
		_SuccessCount++;
	}
	else
	{
		//間違っていればミス数をカウント
		_missCount++;
	}
	
	//ゲームモードの取得
	AMyGameMode* gm = Cast<AMyGameMode>(GetWorld()->GetAuthGameMode());

	gm->InputKeyArrayDelete();

}

void ASenkouhanabiController::GameEndCheck()
{
	//失敗回数が規定値まで到達したら
	if(_missCount >= _GameEndCounter)
	{
		//花火落下フラグをON
		_bisDrop = true;

		TSubclassOf<AActor*>BPParticleText;
		

	}
}
