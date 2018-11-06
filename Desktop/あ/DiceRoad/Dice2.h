#pragma once
#include "DiceState.h"

class Dice2 :
	public DiceState
{
public:
	Dice2();
	~Dice2();
	DICE_ST GetState(void);
	unsigned int DrawDice(void);
};

