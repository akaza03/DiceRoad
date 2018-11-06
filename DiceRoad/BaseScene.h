#pragma once
#include <memory>
#include "GameTask.h"
#include "MouseCtl.h"

struct BaseScene;
using BASE = std::unique_ptr<BaseScene>;

//struct�̕W����private
struct BaseScene
{
	//�Ȃ̂ł�����public�̊֐����Ȃ������珑���K�v���Ȃ�
	//private
	~BaseScene();

	//�������z�֐�
	virtual int Init() = 0;
	virtual BASE UpDate(BASE &_this, const MouseCtl &_mosueCtl) = 0;
	virtual const VECTOR2 GetBoardSize();
};

