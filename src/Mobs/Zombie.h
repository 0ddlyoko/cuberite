#pragma once

#include "Monster.h"





class cZombie :
	public cMonster
{
	typedef cMonster super;
	
public:
	cZombie(bool a_IsVillagerZombie);

	CLASS_PROTODEF(cZombie)
	
	virtual void GetDrops(cItems & a_Drops, cEntity * a_Killer = NULL) /*override*/;
	
	bool IsVillagerZombie(void) const { return m_IsVillagerZombie; }
	bool IsConverting    (void) const { return m_IsConverting; }

private:

	bool m_IsVillagerZombie;
	bool m_IsConverting;

} ;




