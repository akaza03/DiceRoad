#pragma once
#include <list>
#include <vector>
#include <memory>
#include "VECTOR2.h"
#include "GameDice.h"


class GmaeBoard
{
public:
	GmaeBoard();									// デフォルトでは8*8
	GmaeBoard(VECTOR2 vec);							// 指定した大きさの盤面を作る
	~GmaeBoard();
private:
	VECTOR2 BoardSize;								//　盤面のサイズ
	bool BoardSet(VECTOR2 vec);						// 盤面をセット
	VECTOR2 ScreenSize;

	VECTOR2 BoardLT;								// 盤面の左上の座標
	VECTOR2 BoardRD;								//		 右下	

	std::vector<std::weak_ptr<GameDice>*> data;		// baseDataを区切ってその先頭のアドレスを格納
	std::vector<std::weak_ptr<GameDice>> basedata;	// 一気にドーンとサイズを確保する
};

