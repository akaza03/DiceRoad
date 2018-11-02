#include "DxLib.h"

#define SCREEN_SIZE_X 800
#define SCREEN_SIZE_Y 600

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	SetWindowText("1701309_川田 栞");
	SetGraphMode(SCREEN_SIZE_X, SCREEN_SIZE_Y, 16);	// 画面ｻｲｽﾞ設定
	ChangeWindowMode(true);				// true:window　false:ﾌﾙｽｸﾘｰﾝ
	if (DxLib_Init() == -1)        // ＤＸライブラリ初期化処理
	{
		return -1;        // エラーが起きたら直ちに終了
	}

	SetDrawScreen(DX_SCREEN_BACK);				// エラーが起きたら直ちに終了

	WaitKey();            // キーの入力待ち(『WaitKey』を使用)

	DxLib_End();            // ＤＸライブラリ使用の終了処理

	return 0;            // ソフトの終了
}

