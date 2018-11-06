#pragma once
#include "DiceState.h"

class Dice1 :
	public DiceState
{
public:
	Dice1();
	~Dice1();
	DICE_ST GetState(void);
	void DrawDice(void);
};

