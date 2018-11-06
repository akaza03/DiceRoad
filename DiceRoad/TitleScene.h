#pragma onc
#include "BaseScene.h"

struct TitleScene :
	BaseScene
{
	TitleScene();
	~TitleScene();

	virtual int Init();
	virtual BASE UpDate(BASE &_this, const MouseCtl &_mouseCtl);
};