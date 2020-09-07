// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameMode.h"

AMyGameMode::AMyGameMode()
{
	//ガイド文字配列を設定(A~Zの文字を設定)
	_inputKeyRefarence.Add("A");
	_inputKeyRefarence.Add("B");
	_inputKeyRefarence.Add("C");
	_inputKeyRefarence.Add("D");
	_inputKeyRefarence.Add("E");
	_inputKeyRefarence.Add("F");
	_inputKeyRefarence.Add("G");
	_inputKeyRefarence.Add("H");
	_inputKeyRefarence.Add("I");
	_inputKeyRefarence.Add("J");
	_inputKeyRefarence.Add("K");
	_inputKeyRefarence.Add("L");
	_inputKeyRefarence.Add("M");
	_inputKeyRefarence.Add("N");
	_inputKeyRefarence.Add("O");
	_inputKeyRefarence.Add("P");
	_inputKeyRefarence.Add("Q");
	_inputKeyRefarence.Add("R");
	_inputKeyRefarence.Add("S");
	_inputKeyRefarence.Add("T");
	_inputKeyRefarence.Add("U");
	_inputKeyRefarence.Add("V");
	_inputKeyRefarence.Add("W");
	_inputKeyRefarence.Add("X");
	_inputKeyRefarence.Add("Y");
	_inputKeyRefarence.Add("Z");

	//配列の要素を削除
	_inputkeyArray.Empty();

	
}

//ガイドとなるキーを設定する。
void AMyGameMode::SetSelectKey()
{
	//ガイド参照配列から値を取得するための要素番号設定変数を設定
	_randomIndex = FMath::RandRange(0, _inputKeyRefarence.Num() - 1);

	//ガイドの花火につける色を設定
	if (_randomIndex <= 8)
	{
		_colorType = EColor::RED;
	}
	else if (_randomIndex > 8 && _randomIndex <= 16)
	{
		_colorType = EColor::GREEN;
	}
	else
	{
		_colorType = EColor::BLUE;
	}

	//ガイド構造体配列InpuitKeyStructにガイドとなるパラメータを設定する
	FInputKey AddValue;
	
	//配列に追加する値を設定
	AddValue.KeyValue = _inputKeyRefarence[_randomIndex];
	AddValue.InputWaitTime = 0.2f;
	AddValue.IsInput = true;
	AddValue.ColorType = _colorType;

	//ガイド構造遺体配列の末尾に追加
	_inputkeyArray.Add(AddValue);
}

//ガイド構造体配列の先頭を削除する
void AMyGameMode::InputKeyArrayDelete()
{

	_inputkeyArray.RemoveAt(0);
}