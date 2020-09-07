// Fill out your copyright notice in the Description page of Project Settings.


#include "SenkouhanabiController.h"
#include "MyGameMode.h"


ASenkouhanabiController::ASenkouhanabiController()
{
	//PrimaryActorTick.bCanEverTick = true;

	//変数の初期化
	_SpawnTimer = 1.5f;
	_SpawnMinTimer = 0.5f;
	_hanabiColorVector = FVector(1.0f, 0.3f, 0.1f);

	//入力イベントの登録

	



	
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
	

}

void ASenkouhanabiController::SetInputKey(FKey key)
{
	//入力したキーを変数に格納
	_inputKey = key.GetFName().ToString();
	//UE_LOG(LogTemp, TEXT("KeyName = %s"), key.GetFName());

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
			
			//入力可能状態か確認 & 入力されたボタンと格納されている値（ガイドの値）と一致しているか確認
			if (GuideKey.IsInput && GuideKey.KeyValue == Input)
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

				//WG_PlayUI CommboCounterAdd;

				//InputComplate

				//ScoreStateCounter();
			}
		}
	}
}
