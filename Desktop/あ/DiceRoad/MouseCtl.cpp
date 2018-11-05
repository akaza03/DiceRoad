<<<<<<< .mine
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

=======
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
>>>>>>> .theirs
