#include "SportsWear.h"

ClothingItem::Type SportsWear::getType() const
{
	return ClothingItem::Sportswear;
}


const char* SportsWear::typeToStr() const
{
	return "SportsWear";
}

ClothingItem* SportsWear::clone() const
{
	return new SportsWear(*this);
}

void SportsWear::print() const
{
	std::cout << "Name: " << name << std::endl
		<< "Price: " << price << std::endl
		<< "Size: " << sizeToStr() << std::endl
		<< "Number available: " << numAvailable << std::endl
		<< "Type: " << "SportsWear" << std::endl
		<< "Gender: " << genderToStr() << std::endl;
}