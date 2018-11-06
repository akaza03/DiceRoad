#include "DxLib.h"
#include "GameScene.h"
#include "ResultScene.h"

GameScene::GameScene()
{
	Init();
}

GameScene::~GameScene()
{
}

int GameScene::Init()
{
	return 0;
}

BASE GameScene::UpDate(BASE & _this, const MouseCtl & _mouseCtl)
{
	if ((_mouseCtl.GetBtn()[ST_NOW]) & (~_mouseCtl.GetBtn()[ST_OLD]) & MOUSE_INPUT_LEFT)
	{
		return std::move(std::make_unique<ResultScene>());
	}
	ClsDrawScreen();
	DrawString(0, 0, "GAME", GetColor(255, 255, 255), true);
	ScreenFlip();
	return std::move(_this);
}
