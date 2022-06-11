#pragma once
#include"String.h"

class ClothingItem {
protected:
	enum Gender {
		MAN,
		WOMAN,
		UNISEX
	} gender;
	enum Type {
		Casual,
		Sportswear,
		Couture
	} type;
private:

	String name;
	String size;
	double price;

public:
	ClothingItem();
	ClothingItem(const String&, const String&, const double);

	virtual ~ClothingItem() = default;

	void setName(const String&);
	void setSize(const String&);
	void setPrice(const double);

	String& getName() const;
	String& getSize() const;
	double getPrice() const;

	virtual ClothingItem* clone() const = 0;
	virtual void print() const;

};
