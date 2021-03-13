#pragma once
#include "Person.h"
#include "Item.h"

class Invoice
{
private:
	int number;
	Item** items;
	Person* person;

public:
	int GetTotal();
	int GetNumber();
	int GetPerson();

};

