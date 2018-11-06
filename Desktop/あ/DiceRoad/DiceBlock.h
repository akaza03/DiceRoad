#pragma once
#include "DiceState.h"

class DiceBlock :
	public DiceState
{
public:
	DiceBlock();
	~DiceBlock();
	DICE_ST GetState(void);
	void DrawDice(void);
};

