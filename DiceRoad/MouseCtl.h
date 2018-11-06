#pragma once
#include<array>
#include "VECTOR2.h"

//	ϳ����ضް
enum TRG_STATE{
	ST_NOW,				//	����
	ST_OLD,				//	1�ڰёO
	ST_MAX
};

using MOUSE_INT = std::array<int, ST_MAX>;

class MouseCtl
{
public:
	MouseCtl();
	~MouseCtl();
	VECTOR2 GetPoint(void) const; // �}�E�X�̏��
	MOUSE_INT GetBtn(void) const;
	void Update();
private:
	
	int MouseInput;	// �}�E�X�̏��
	int OldMouseInput; // 1f�O��
	
	MOUSE_INT mouseBtn;
	VECTOR2 pos;
};
