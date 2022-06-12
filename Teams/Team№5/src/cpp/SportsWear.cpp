#include "SportsWear.h"

SportsWear::SportsWear(const String& name, const double price, const size_t numAvailable) :ClothingItem(name,price,numAvailable)
{}

ClothingItem::Type SportsWear::getType() const
{
	return ClothingItem::Type::Sportswear;
}

const char* SportsWear::typeToStr() const
{
	return "SportsWear";
}

ClothingItem* SportsWear::clone() const
{
	return new SportsWear(*this);
}

String SportsWear::getData() const
{
	return ClothingItem::getData();
}

void SportsWear::print() const
{
	ClothingItem::print();
}
