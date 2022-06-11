#pragma once
#include "ClothingItem.h"
class SportsWear : public ClothingItem {
	
public:
	virtual Type getType() const override;
	virtual const char* typeToStr() const override;
	virtual ClothingItem* clone() const override;
	virtual void print() const override;
};

