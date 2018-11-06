#include "DxLib.h"
#include "VECTOR2.h"
#include "GameDice.h"


GameDice::GameDice()
{
}

GameDice::GameDice(VECTOR2 pos, VECTOR2 drawOffset, DICE_ST state)
{
}


GameDice::~GameDice()
{
}



int DrawBox(const VECTOR2 & vec1, const VECTOR2 & vec2, int color, bool flag)
{
	return DrawBox(vec1.x, vec1.y, vec2.x, vec2.y, color, flag);
}