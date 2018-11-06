#include "GameDice.h"
#include "DxLib.h"
#include "VECTOR2.h"
#include "Dice1.h"
#include "Dice2.h"
#include "Dice3.h"
#include "Dice4.h"
#include "Dice5.h"
#include "Dice6.h"
#include "DiceBlock.h"
GameDice::GameDice()
{
}

GameDice::GameDice(VECTOR2 pos, VECTOR2 drawOffset, DICE_ST state)
{
	this->pos = pos;
	this->drawOffset = drawOffset;
	SetState(state);
}


GameDice::~GameDice()
{
}

void GameDice::SetState(DICE_ST state)
{
	switch (state)
	{
	case DICE_1:
		this->state.push_front(std::make_unique<Dice1>());
		break;
	case DICE_2:
		this->state.push_front(std::make_unique<Dice2>());
		break;
	case DICE_3:
		this->state.push_front(std::make_unique<Dice3>());
		break;
	case DICE_4:
		this->state.push_front(std::make_unique<Dice4>());
		break;
	case DICE_5:
		this->state.push_front(std::make_unique<Dice5>());
		break;
	case DICE_6:
		this->state.push_front(std::make_unique<Dice6>());
		break;
	case DICE_BLOCK:
		this->state.push_front(std::make_unique<DiceBlock>());
		break;
	default:
		break;
	}
}

DICE_ST GameDice::GetState(void)
{
	if (!state.empty())
	{
		if (*state.begin())
		{
			return (**state.begin()).GetState();
		}
	}
	return DICE_NON;
}

bool GameDice::SetPos(VECTOR2 pos)
{
	this->pos = pos;
	return true;
}

bool GameDice::SetDrawOffset(VECTOR2 drawOffset)
{
	this->drawOffset = drawOffset;
	return true;
}

void GameDice::Draw(void)
{
	unsigned int image = 0;
	if (*state.begin())
	{
		image = (**state.begin()).DrawDice();
	}
	DrawCircle(drawOffset.x + pos.x, drawOffset.y + pos.y, 64 / 2, GetColor(255,0,0), TRUE);
}

int DrawBox(const VECTOR2 & vec1, const VECTOR2 & vec2, int color, bool flag)
{
	return DrawBox(vec1.x, vec1.y, vec2.x, vec2.y, color, flag);
}