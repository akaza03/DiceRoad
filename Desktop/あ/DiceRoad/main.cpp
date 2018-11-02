#include "DxLib.h"

#define SCREEN_SIZE_X 800
#define SCREEN_SIZE_Y 600

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	SetWindowText("1701309_��c �x");
	SetGraphMode(SCREEN_SIZE_X, SCREEN_SIZE_Y, 16);	// ��ʻ��ސݒ�
	ChangeWindowMode(true);				// true:window�@false:�ٽ�ذ�
	if (DxLib_Init() == -1)        // �c�w���C�u��������������
	{
		return -1;        // �G���[���N�����璼���ɏI��
	}

	SetDrawScreen(DX_SCREEN_BACK);				// �G���[���N�����璼���ɏI��

	WaitKey();            // �L�[�̓��͑҂�(�wWaitKey�x���g�p)

	DxLib_End();            // �c�w���C�u�����g�p�̏I������

	return 0;            // �\�t�g�̏I��
}

