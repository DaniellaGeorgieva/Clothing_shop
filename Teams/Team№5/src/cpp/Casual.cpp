#include "Casual.h"

ClothingItem::Type Casual::getType() const
{
	return ClothingItem::Casual;
}


const char* Casual::typeToStr() const
{
	return "Casual";
}

ClothingItem* Casual::clone() const
{
	return new Casual(*this);
}

void Casual::print() const
{
	std::cout << "Name: " << name << std::endl
		<< "Price: " << price << std::endl
		<< "Size: " << sizeToStr() << std::endl
		<< "Number available: " << numAvailable << std::endl
		<< "Type: " << "Casual" << std::endl
		<< "Gender: " << genderToStr() << std::endl;
}