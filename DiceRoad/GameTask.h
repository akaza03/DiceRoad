#pragma once
#include "VECTOR2.h"
#include "BaseScene.h"
#include "MouseCtl.h"

#define SCREEN_SIZE_X 800
#define SCREEN_SIZE_Y 600
#define lpGameTask GameTask::GetInstance()
struct BaseScene;
using BASE = std::unique_ptr<BaseScene>;

class GameTask
{
public:
	void Run();
	int UpDate();
	VECTOR2 GetActivBoardSize();
	VECTOR2 GetScreenSize();

	static GameTask &GetInstance()
	{
		//mutex‚Åcall_once‚ªŽg‚¦‚é‚æ‚¤‚É‚È‚é
		//std::call_once(initFlag, Create);
		return  *s_Instance;
	}
private:
	GameTask();
	~GameTask();

	struct GameTaskDeleter
	{
		void operator()(GameTask* gametask) const
		{
			delete gametask;
		}
	};

	static std::unique_ptr<GameTask, GameTaskDeleter> s_Instance;
	std::unique_ptr<BaseScene>baseScene;
	std::unique_ptr<MouseCtl> mouseCtl;

	BASE ActiveScene;

	int SysInit(void);
		
	VECTOR2 screenSize;
	VECTOR2 boardsize;
	VECTOR2 boardLT;
};