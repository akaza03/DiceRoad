#include "DxLib.h"
#include "GameTask.h"

#define SCREEN_SIZE_X 800
#define SCREEN_SIZE_Y 600

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{	
	lpGameTask.Run();
	
	WaitKey();            // �L�[�̓��͑҂�(�wWaitKey�x���g�p)

	DxLib_End();            // �c�w���C�u�����g�p�̏I������
	return 0;            // �\�t�g�̏I��
}

