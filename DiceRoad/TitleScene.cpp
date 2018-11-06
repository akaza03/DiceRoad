#include "DxLib.h"
#include "TitleScene.h"
#include "GameScene.h"

TitleScene::TitleScene()
{
}

TitleScene::~TitleScene()
{
}

int TitleScene::Init()
{
	return 0;
}

BASE TitleScene::UpDate(BASE & _this, const MouseCtl & _mouseCtl)
{
	if ((_mouseCtl.GetBtn()[ST_NOW]) & (~_mouseCtl.GetBtn()[ST_OLD]) & MOUSE_INPUT_LEFT)
	{
		return std::move(std::make_unique<GameScene>());
	}
	ClsDrawScreen();
	DrawString(0, 0, "TITLE", GetColor(255, 255, 255), true);
	ScreenFlip();
	return std::move(_this);
}
