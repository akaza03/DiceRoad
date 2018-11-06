#pragma once
#include <memory>
#include "GameTask.h"
#include "MouseCtl.h"

struct BaseScene;
using BASE = std::unique_ptr<BaseScene>;

//structの標準はprivate
struct BaseScene
{
	//なのでここにpublicの関数がなかったら書く必要がない
	//private
	~BaseScene();

	//純粋仮想関数
	virtual int Init() = 0;
	virtual BASE UpDate(BASE &_this, const MouseCtl &_mosueCtl) = 0;
	virtual const VECTOR2 GetBoardSize();
};

