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

	VECTOR2 GetPoint() const;
	MOUSE_INT GetBtn() const;
	void Update();
private:
	//int mouseBtn[ST_MAX];
	MOUSE_INT mouseBtn;
	VECTOR2 pos;
};

