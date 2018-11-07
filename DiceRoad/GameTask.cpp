#include "DxLib.h"
#include "GameTask.h"
#include "TitleScene.h"


std::unique_ptr<GameTask, GameTask::GameTaskDeleter> GameTask::s_Instance(new GameTask());

void GameTask::Run()
{
	ActiveScene = std::make_unique<TitleScene>();
	while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
	{
		mouseCtl->Update();
		ActiveScene = std::move(ActiveScene->UpDate(ActiveScene, *mouseCtl));
	}
}

int GameTask::UpDate(void)
{
	//memcpy(keyDataOld, keyData, sizeof(keyDataOld));
	return 0;
}

VECTOR2 GameTask::GetActivBoardSize()
{
	return ActiveScene->GetBoardSize();
}

VECTOR2 GameTask::GetScreenSize()
{
	return VECTOR2(SCREEN_SIZE_X, SCREEN_SIZE_Y);
}
GameTask::GameTask()
{
	SysInit();
	ActiveScene = std::make_unique<TitleScene>();
}

GameTask::~GameTask()
{
}

int GameTask::SysInit(void)
{
	SetWindowText("サイコロード");
	SetGraphMode(SCREEN_SIZE_X, SCREEN_SIZE_Y, 16);	// 画面ｻｲｽﾞ設定
	ChangeWindowMode(true);				// true:window　false:ﾌﾙｽｸﾘｰﾝ
	if (DxLib_Init() == -1)        // ＤＸライブラリ初期化処理
	{
		return -1;        // エラーが起きたら直ちに終了
	}

	SetDrawScreen(DX_SCREEN_BACK);				// エラーが起きたら直ちに終了
	mouseCtl = std::make_unique<MouseCtl>();
	return true;
}
