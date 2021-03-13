#include "Address.h"

Address::Address(string str, int h, string city, int pc)
{
	this->street = str;
	this->houseNumber = h;
	this->city = city;
	this->postalCode = pc;

}

string Address::GetStreet()
{
	return this->street;
}

int Address::GetHouse()
{
	return this->houseNumber;
}

string Address::GetCity()
{
	return this->city;
}

int Address::GetPostalCode()
{
	return this->postalCode;
}
