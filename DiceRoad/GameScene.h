#pragma once
#include "BaseScene.h"
//#include "GameBoard.h"
#include "MouseCtl.h"

struct GameScene :
	BaseScene
{
	GameScene();
	~GameScene();

	virtual int Init();
	virtual BASE UpDate(BASE &_this, const MouseCtl &_mouseCtl);

	//const VECTOR2 GetBoardSize();
};