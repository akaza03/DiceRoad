#pragma once
#include <array>
#include "VECTOR2.h"

enum BTN_ST {
	ST_NOW,
	ST_OLD,
	ST_MAX
};

using MOUSE_INT = std::array<int, ST_MAX>;
class MouseCtl
{
public:
	MouseCtl();
	~MouseCtl();
	void UpDate(void);	// �}�E�X�̏����擾
	VECTOR2 GetPoint(void) const; // �}�E�X�̏��
	MOUSE_INT GetBtn(void) const;
private:
	
	int MouseInput;	// �}�E�X�̏��
	int OldMouseInput; // 1f�O��
	//int mouseBtn[ST_MAX];
	MOUSE_INT mouseBtn;
	VECTOR2 pos;
};

