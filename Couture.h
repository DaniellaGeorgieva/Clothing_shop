#pragma once
#include "ClothingItem.h"

class Couture : public ClothingItem {
	String designer;
public:
	virtual Type getType() const override;
	virtual const char* typeToStr() const override;
	virtual ClothingItem* clone() const override;
	virtual void print() const override;
};
