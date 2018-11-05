#include "GmaeBoard.h"

#define DEF_BOARD_CNT (8)
#define MASS_SIZE (64)

#define SCREEN_SIZE_X 800	// とりあえず	Taskの方に作るなら消していい
#define SCREEN_SIZE_Y 600	// 同上			消す場合はBoardSetを修正すること

GmaeBoard::GmaeBoard()
{
}

GmaeBoard::GmaeBoard(VECTOR2 vec)
{
}


GmaeBoard::~GmaeBoard()
{
}

bool GmaeBoard::BoardSet(VECTOR2 vec)
{
	basedata.resize(vec.y*vec.x);
	data.resize(vec.y);
	for (int i = 0; i < data.size(); i++)
	{
		data[i] = &basedata[i*vec.x];	// dataに各x行の先頭のアドレスを渡す
	}
	BoardSize = vec;
	ScreenSize = VECTOR2(SCREEN_SIZE_X, SCREEN_SIZE_Y);	// 修正箇所

	BoardLT = VECTOR2((ScreenSize.x - (MASS_SIZE * BoardSize.x)) / 2, (ScreenSize.y - (MASS_SIZE * BoardSize.y)) / 2);
	BoardRD = VECTOR2(BoardLT.x + (MASS_SIZE * BoardSize.x), BoardLT.y + (MASS_SIZE * BoardSize.y));	// ライトダウン
	return false;
}
