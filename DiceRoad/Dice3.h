#pragma once
#include "DiceState.h"

class Dice3 :
	public DiceState
{
public:
	Dice3();
	~Dice3();
	DICE_ST GetState(void);
	unsigned int DrawDice(void);
};

