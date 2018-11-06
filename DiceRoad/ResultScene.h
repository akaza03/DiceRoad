#pragma once
#include "BaseScene.h"

struct ResultScene :
	BaseScene
{
	ResultScene();
	~ResultScene();
	virtual int Init();
	virtual BASE UpDate(BASE &_this, const MouseCtl &MouseCtl);
};