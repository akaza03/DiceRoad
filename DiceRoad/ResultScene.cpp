#include "DxLib.h"
#include "ResultScene.h"

ResultScene::ResultScene()
{
	//Init();
}

ResultScene::~ResultScene()
{
}

int ResultScene::Init()
{
	return 0;
}

BASE ResultScene::UpDate(BASE & _this, const MouseCtl & MouseCtl)
{
	ClsDrawScreen();
	DrawString(0, 0, "RESULT", GetColor(255, 255, 255), true);
	ScreenFlip();

	return std::move(_this);

}


