#include "ImageMng.h"
#include "Dice5.h"


Dice5::Dice5()
{
}


Dice5::~Dice5()
{
}

DICE_ST Dice5::GetState(void)
{
	return DICE_5;
}

unsigned int Dice5::DrawDice(void)
{
	return IMAGE_ID("image/Dice(óLê¸)/05.png")[0];
}
