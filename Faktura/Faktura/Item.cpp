#include "Item.h"

Item::Item(string n, int p)
{
	this->name = n;
	this->price = p;
}

string Item::GetName()
{
	return this->name;
}

int Item::GetPrice()
{
	return this->price;
}
