#pragma once
#include"ClothingItem.h"

class ClothingContainer
{
private:
	ClothingItem** container;
	String* log;
	double* logPrice;
	size_t capacity;
	size_t size;
	size_t logSize;
public:
	ClothingContainer();
	ClothingContainer(const ClothingContainer&);
	ClothingContainer& operator=(const ClothingContainer&);
	~ClothingContainer();

	void AddClothingItem(ClothingItem&);
	bool DeleteClothingItem(size_t);
	void ListAvailableItems();
	void ListSoldItems();
	void ExportSoldLog(const char*);

private:
	void resize();
	void copy(const ClothingContainer&);
	void free();
};