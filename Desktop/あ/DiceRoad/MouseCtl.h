#pragma once
<<<<<<< HEAD
#include <array>
#include "VECTOR2.h"

enum BTN_ST {
	ST_NOW,
	ST_OLD,
=======
#include<array>
#include "VECTOR2.h"

//	ϳ����ضް
enum TRG_STATE{
	ST_NOW,				//	����
	ST_OLD,				//	1�ڰёO
>>>>>>> c5e984c7388995927f3c3c579817597dde918f82
	ST_MAX
};

using MOUSE_INT = std::array<int, ST_MAX>;
<<<<<<< HEAD
=======

>>>>>>> c5e984c7388995927f3c3c579817597dde918f82
class MouseCtl
{
public:
	MouseCtl();
	~MouseCtl();
<<<<<<< HEAD
	void UpDate(void);	// �}�E�X�̏����擾
	VECTOR2 GetPoint(void) const; // �}�E�X�̏��
	MOUSE_INT GetBtn(void) const;
private:
	
	int MouseInput;	// �}�E�X�̏��
	int OldMouseInput; // 1f�O��
=======

	VECTOR2 GetPoint() const;
	MOUSE_INT GetBtn() const;
	void Update();
private:
>>>>>>> c5e984c7388995927f3c3c579817597dde918f82
	//int mouseBtn[ST_MAX];
	MOUSE_INT mouseBtn;
	VECTOR2 pos;
};

