
#include "Dxlib.h"
#include "MouseCtl.h"


MouseCtl::MouseCtl()
{
}


MouseCtl::~MouseCtl()
{
}

VECTOR2 MouseCtl::GetPoint() const
{
	return pos;
}

MOUSE_INT MouseCtl::GetBtn() const
{
	return mouseBtn;
}

void MouseCtl::Update()
{
	mouseBtn[ST_OLD] = mouseBtn[ST_NOW];
	mouseBtn[ST_NOW] = GetMouseInput();

	GetMousePoint(&pos.x, &pos.y);
}
