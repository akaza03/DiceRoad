#include "ImageMng.h"
#include "DiceBlock.h"


DiceBlock::DiceBlock()
{
}


DiceBlock::~DiceBlock()
{
}

DICE_ST DiceBlock::GetState(void)
{
	return DICE_BLOCK;
}

unsigned int DiceBlock::DrawDice(void)
{
	//return IMAGE_ID("image/Dice(�L��)/Block.png")[0];
}

