#pragma once

enum DICE_ST {
	DICE_NON,
	DICE_1,
	DICE_2,
	DICE_3,
	DICE_4,
	DICE_5,
	DICE_6,
	DICE_BLOCK,
	DICE_MAX
};

class DiceState
{
public:
	//DiceState();
	virtual ~DiceState();
	virtual DICE_ST GetState(void) = 0;
	virtual unsigned int DrawDice(void) = 0;
};

