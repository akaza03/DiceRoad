#include<array>
#include "VECTOR2.h"

//	ﾏｳｽのﾄﾘｶﾞｰ
enum TRG_STATE{
	ST_NOW,				//	現在
	ST_OLD,				//	1ﾌﾚｰﾑ前
	ST_MAX
};

using MOUSE_INT = std::array<int, ST_MAX>;

class MouseCtl
{
public:
	MouseCtl();
	~MouseCtl();
	VECTOR2 GetPoint(void) const; // マウスの情報
	MOUSE_INT GetBtn(void) const;
private:
	
	int MouseInput;	// マウスの状態
	int OldMouseInput; // 1f前の

	void Update();
	MOUSE_INT mouseBtn;
	VECTOR2 pos;
};

