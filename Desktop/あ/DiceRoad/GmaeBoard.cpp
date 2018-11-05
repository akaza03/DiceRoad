#include "GmaeBoard.h"

#define DEF_BOARD_CNT (8)
#define MASS_SIZE (64)

#define SCREEN_SIZE_X 800	// �Ƃ肠����	Task�̕��ɍ��Ȃ�����Ă���
#define SCREEN_SIZE_Y 600	// ����			�����ꍇ��BoardSet���C�����邱��

GmaeBoard::GmaeBoard()
{
}

GmaeBoard::GmaeBoard(VECTOR2 vec)
{
}


GmaeBoard::~GmaeBoard()
{
}

bool GmaeBoard::BoardSet(VECTOR2 vec)
{
	basedata.resize(vec.y*vec.x);
	data.resize(vec.y);
	for (int i = 0; i < data.size(); i++)
	{
		data[i] = &basedata[i*vec.x];	// data�Ɋex�s�̐擪�̃A�h���X��n��
	}
	BoardSize = vec;
	ScreenSize = VECTOR2(SCREEN_SIZE_X, SCREEN_SIZE_Y);	// �C���ӏ�

	BoardLT = VECTOR2((ScreenSize.x - (MASS_SIZE * BoardSize.x)) / 2, (ScreenSize.y - (MASS_SIZE * BoardSize.y)) / 2);
	BoardRD = VECTOR2(BoardLT.x + (MASS_SIZE * BoardSize.x), BoardLT.y + (MASS_SIZE * BoardSize.y));	// ���C�g�_�E��
	return false;
}
