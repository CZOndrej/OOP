#include "Person.h"

Person::Person(Address* add, string name)
{
	this->address = add;
	this->name = name;
}

Person::~Person()
{
	delete this->address;
}

string Person::GetName()
{
	return this->name;
}

Address* Person::GetAddress()
{
	return this->address;
}
