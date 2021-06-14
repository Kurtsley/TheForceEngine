#pragma once
//////////////////////////////////////////////////////////////////////
// Dark Forces Logic - 
// The base Logic structure and functionality.
//////////////////////////////////////////////////////////////////////

#include <TFE_System/types.h>
#include <TFE_Asset/dfKeywords.h>
#include <TFE_Level/rsector.h>
#include <TFE_Level/robject.h>

namespace TFE_DarkForces
{
	struct Task;
	struct Logic;
	typedef void(*LogicCleanupFunc)(Logic*);

	struct Logic
	{
		RSector* sector;
		s32 u04;
		SecObject* obj;
		Logic** parent;
		Task* task;
		LogicCleanupFunc cleanupFunc;
	};
	
	void obj_addLogic(SecObject* obj, Logic* logic, Task* logicTask, LogicCleanupFunc cleanupFunc);
	void deleteLogicAndObject(Logic* logic);
}  // namespace TFE_DarkForces