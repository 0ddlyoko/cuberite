#pragma once

#include "../../Registries/Items.h"

namespace Palette_1_16
{
	UInt32 FromBlock(short ID);
	UInt32 FromItem(Item ID);
	Item ToItem(UInt32 ID);
}
