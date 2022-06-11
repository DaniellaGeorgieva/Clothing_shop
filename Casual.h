#pragma once
#include "ClothingItem.h"

class Casual : public ClothingItem {

public:
	virtual Type getType() const override;
	virtual const char* typeToStr() const override;
	virtual ClothingItem* clone() const override;
	virtual void print() const override;
};