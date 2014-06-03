
#pragma once

#include "DropSpenserEntity.h"





// tolua_begin
class cDispenserEntity :
	public cDropSpenserEntity
{
	typedef cDropSpenserEntity super;

public:

	// tolua_end

	/// Constructor used for normal operation
	cDispenserEntity(int a_BlockX, int a_BlockY, int a_BlockZ, cWorld * a_World);

	static const char * GetClassStatic(void) { return "cDispenserEntity"; }

	/** Spawns a projectile of the given kind in front of the dispenser */
	void SpawnProjectileFromDispenser(cChunk & a_Chunk, int & a_DispX, int & a_DispY, int & a_DispZ, cProjectileEntity::eKind a_kind, Vector3d a_ShootVector); // tolua_export

	/** Returns how to aim the projectile */
	Vector3d GetShootVector(cChunk & a_Chunk); // tolua_export

private:
	// cDropSpenser overrides:
	virtual void DropSpenseFromSlot(cChunk & a_Chunk, int a_SlotNum) override;

	/// If such a bucket can fit, adds it to m_Contents and returns true
	bool ScoopUpLiquid(int a_SlotNum, short a_BucketItemType);

	/// If the a_BlockInFront is liquidable and the empty bucket can fit, does the m_Contents processing and returns true
	bool EmptyLiquidBucket(BLOCKTYPE a_BlockInFront, int a_SlotNum);
} ;  // tolua_export




