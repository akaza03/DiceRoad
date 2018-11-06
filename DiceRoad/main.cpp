#include "DxLib.h"
#include "GameTask.h"

#define SCREEN_SIZE_X 800
#define SCREEN_SIZE_Y 600

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{	
	lpGameTask.Run();
	
	WaitKey();            // キーの入力待ち(『WaitKey』を使用)

	DxLib_End();            // ＤＸライブラリ使用の終了処理
	return 0;            // ソフトの終了
}

