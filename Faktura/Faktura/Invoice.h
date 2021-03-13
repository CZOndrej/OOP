#pragma once
#include "Person.h"
#include "Item.h"

class Invoice
{
private:
	int number;
	int countItem;
	int itemsLength;
	Item** items;
	Person* person;
	void ReAllocateItems();

public:
	Invoice(int num, Person* person);
	~Invoice();
	int GetTotal();
	int GetNumber();
	Person* GetPerson();
	void AddItem(Item* item);
	int GetItemsCount();

};

