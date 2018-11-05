#pragma once
#include <list>
#include <vector>
#include <memory>
#include "VECTOR2.h"
#include "GameDice.h"


class GmaeBoard
{
public:
	GmaeBoard();									// �f�t�H���g�ł�8*8
	GmaeBoard(VECTOR2 vec);							// �w�肵���傫���̔Ֆʂ����
	~GmaeBoard();
private:
	VECTOR2 BoardSize;								//�@�Ֆʂ̃T�C�Y
	bool BoardSet(VECTOR2 vec);						// �Ֆʂ��Z�b�g
	VECTOR2 ScreenSize;

	VECTOR2 BoardLT;								// �Ֆʂ̍���̍��W
	VECTOR2 BoardRD;								//		 �E��	

	std::vector<std::weak_ptr<GameDice>*> data;		// baseData����؂��Ă��̐擪�̃A�h���X���i�[
	std::vector<std::weak_ptr<GameDice>> basedata;	// ��C�Ƀh�[���ƃT�C�Y���m�ۂ���
};

