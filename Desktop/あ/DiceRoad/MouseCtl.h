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

//	ﾏｳｽのﾄﾘｶﾞｰ
enum TRG_STATE{
	ST_NOW,				//	現在
	ST_OLD,				//	1ﾌﾚｰﾑ前
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
	void UpDate(void);	// マウスの情報を取得
	VECTOR2 GetPoint(void) const; // マウスの情報
	MOUSE_INT GetBtn(void) const;
private:
	
	int MouseInput;	// マウスの状態
	int OldMouseInput; // 1f前の
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

