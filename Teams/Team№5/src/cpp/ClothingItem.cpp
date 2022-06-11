#include"ClothingItem.h"
#include<iostream>

ClothingItem::ClothingItem() : name(), price(0), numAvailable(0)
{}
ClothingItem::ClothingItem(const String& name, const double price, const size_t numAvailable) : name(name), price(price), numAvailable(numAvailable)
{}

void ClothingItem::setName(const String& name)
{
	this->name = name;
}

void ClothingItem::setPrice(const double price)
{
	this->price = price;
}
void ClothingItem::setNumAvailable(const size_t numAvailable)
{
	this->numAvailable = numAvailable;
}
ClothingItem::Type ClothingItem::getType() const
{
	return Type::UNKNOWN;
}
ClothingItem::Gender ClothingItem::getGender() const
{
	return Gender::UNISEX;
}

ClothingItem::Size ClothingItem::getSize() const
{
	return Size::UNKNOWN;
}

String ClothingItem::getName() const
{
	return name;
}

double ClothingItem::getPrice() const
{
	return price;
}
size_t ClothingItem::getNumAvailable() const
{
	return numAvailable;
}
const char* ClothingItem::typeToStr() const
{
	return "Unknown";
}
const char* ClothingItem::sizeToStr() const
{
	return "Unknown";
}
const char* ClothingItem::genderToStr() const
{
	return "Unisex";
}
void ClothingItem::print() const
{
	std::cout << "Name: " << name << std::endl
		<< "Price: " << price << std::endl
		<< "Size: " << sizeToStr() << std::endl
		<< "Number available: " << numAvailable << std::endl
		<< "Type: " << typeToStr() << std::endl
		<< "Gender: " << genderToStr() << std::endl;
}
