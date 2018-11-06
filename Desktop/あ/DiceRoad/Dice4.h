#pragma once
#include "DiceState.h"

class Dice4 :
	public DiceState
{
public:
	Dice4();
	~Dice4();
	DICE_ST GetState(void);
	void DrawDice(void);
};

