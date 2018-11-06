#pragma once
#include "DiceState.h"

class Dice6 :
	public DiceState
{
public:
	Dice6();
	~Dice6();
	DICE_ST GetState(void);
	void DrawDice(void);
};

