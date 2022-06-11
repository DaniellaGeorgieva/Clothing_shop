#include "Couture.h"

ClothingItem::Type Couture::getType() const
{
	return ClothingItem::Couture;
}


const char* Couture::typeToStr() const
{
	return "Couture";
}

ClothingItem* Couture::clone() const
{
	return new Couture(*this);
}

void Couture::print() const
{
	std::cout << "Name: " << name << std::endl
		<< "Price: " << price << std::endl
		<< "Size: " << sizeToStr() << std::endl
		<< "Number available: " << numAvailable << std::endl
		<< "Type: " << "Couture" << std::endl
		<< "Gender: " << genderToStr() << std::endl;
}