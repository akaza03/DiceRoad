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
	void UpDate(void);	// マウスの情報を取得
	VECTOR2 GetPoint(void) const; // マウスの情報
	MOUSE_INT GetBtn(void) const;
private:
	
	int MouseInput;	// マウスの状態
	int OldMouseInput; // 1f前の
	//int mouseBtn[ST_MAX];
	MOUSE_INT mouseBtn;
	VECTOR2 pos;
};

