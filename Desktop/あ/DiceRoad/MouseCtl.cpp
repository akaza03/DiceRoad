#include "MouseCtl.h"
#include "DxLib.h"
#include "ImageMng.h"

MouseCtl::MouseCtl()
{
}


MouseCtl::~MouseCtl()
{
}

void MouseCtl::UpDate(void)
{
	mouseBtn[ST_OLD] = mouseBtn[ST_NOW];		// ŒÃ‚¢î•ñ‚ğOld‚É•Û‘¶‚·‚è‚ã
	mouseBtn[ST_NOW] = GetMouseInput();
	GetMousePoint(&pos.x, &pos.y);
}

VECTOR2 MouseCtl::GetPoint(void) const
{
	return pos;
}

MOUSE_INT MouseCtl::GetBtn(void) const
{
	return mouseBtn;
}
