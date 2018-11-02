#pragma once
#include<array>
#include "VECTOR2.h"

//	œ≥ΩÇÃƒÿ∂ﬁ∞
enum TRG_STATE{
	ST_NOW,				//	åªç›
	ST_OLD,				//	1Ã⁄∞—ëO
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

