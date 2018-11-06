#pragma once
#include "DiceState.h"
#include <list>
#include <memory>

class VECTOR2;
class GameDice;

using dice_ptr = std::shared_ptr<GameDice>;
using dice_list = std::list<dice_ptr>;

using diceST_unique = std::unique_ptr<DiceState>;
using diceST_uniList = std::list<diceST_unique>;

class GameDice
{
public:
	GameDice();
	GameDice(VECTOR2 pos, VECTOR2 drawOffset, DICE_ST state);
	~GameDice();
private:
	diceST_uniList state;
	VECTOR2 pos;
	VECTOR2 drawOffset;
};
int DrawBox(const VECTOR2 &vec1, const VECTOR2 &vec2, int color, bool flag);
