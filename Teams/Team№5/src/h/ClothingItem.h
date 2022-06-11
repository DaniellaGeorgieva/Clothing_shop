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
		Couture,
		UNKNOWN
	} type;
	enum Size {
		XS,
		S,
		M,
		L,
		XL,
		XXL,
		UNKNOWN
	}size;
private:

	String name;
	double price;
	size_t numAvailable;

public:
	ClothingItem();
	ClothingItem(const String&, const double, const size_t);

	virtual ~ClothingItem() = default;

	void setName(const String&);
	void setPrice(const double);
	void setNumAvailable(const size_t);

	virtual Type getType() const;
	Gender getGender() const;
	Size getSize() const;

	String getName() const;
	double getPrice() const;
	size_t getNumAvailable() const;

	virtual const char* typeToStr() const;
	virtual const char* sizeToStr() const;
	virtual const char* genderToStr() const;

	virtual ClothingItem* clone() const = 0;
	virtual void print() const;
};
