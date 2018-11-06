#include "ImageMng.h"
#include "Dice2.h"


Dice2::Dice2()
{
}


Dice2::~Dice2()
{
}

DICE_ST Dice2::GetState(void)
{
	return DICE_2;
}

unsigned int Dice2::DrawDice(void)
{
	return IMAGE_ID("image/Dice(óLê¸)/02.png")[0];
}
