#pragma once
#include "DiceState.h"

class Dice5 :
	public DiceState
{
public:
	Dice5();
	~Dice5();
	DICE_ST GetState(void);
	unsigned int DrawDice(void);
};

