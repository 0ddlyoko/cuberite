
#pragma once

#include "Monster.h"





class cGhast :
	public cMonster
{
	typedef cMonster super;
	
public:
	cGhast(void);

	CLASS_PROTODEF(cGhast)

	virtual void GetDrops(cItems & a_Drops, cEntity * a_Killer = NULL) override;

	bool IsCharging(void) const {return false; }
} ;




