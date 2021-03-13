#include "Invoice.h"
#include "Item.h"
#include "Person.h"
#include <iostream>

using namespace std;


Invoice::Invoice(int num, Person* person)
{
	this->number = num;
	this->person = person;
	this->countItem = 0;
	this->itemsLength = 10;
	this->items = new Item * [this->itemsLength];
}

Invoice::~Invoice()
{
	for (int i = 0; i < countItem; i++)
	{
		delete this->items[i];
	}
	delete[] this->items;
}

int Invoice::GetTotal()
{
	int total = 0;

	for (int i = 0; i < this->countItem; i++)
	{
		total += this->items[i]->GetPrice();
	}

	return total;
}

int Invoice::GetNumber()
{
	return this->number;
}

Person* Invoice::GetPerson()
{
	return this->GetPerson();
}

void Invoice::AddItem(Item* item)
{
	if (this->countItem == this->itemsLength)
	{
		ReAllocateItems();
	}
	this->items[this->countItem] = item;
	this->countItem++;
}

int Invoice::GetItemsCount()
{
	return this->countItem;
}

void Invoice::ReAllocateItems()
{
	Item** newItems = new Item * [itemsLength + 10];
	
	for (int i = 0; i < this->itemsLength; i++)
	{
		newItems[i] = this->items[i];
		delete this->items[i];
	}
	this->itemsLength += 10;
	this->items = newItems;
}


