
#pragma once

#include "Monster.h"





class cEnderDragon :
	public cMonster
{
	typedef cMonster super;
	
public:
	cEnderDragon(void);

	CLASS_PROTODEF(cEnderDragon)
	
	virtual void GetDrops(cItems & a_Drops, cEntity * a_Killer = NULL) /*override*/;
} ;




