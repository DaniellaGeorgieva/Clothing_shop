#include "Couture.h"

Couture::Couture(const String& name, const double price, const size_t numAvailable) :ClothingItem(name, price, numAvailable)
{}

ClothingItem::Type Couture::getType() const
{
	return ClothingItem::Type::Couture;
}

const char* Couture::typeToStr() const
{
	return "Couture";
}

ClothingItem* Couture::clone() const
{
	return new Couture(*this);
}

String Couture::getData() const
{
	return ClothingItem::getData();
}

void Couture::print() const
{
	ClothingItem::print();
}
