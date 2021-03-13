#pragma once
#include <iostream>

using namespace std;

class Address
{
private:
	string street;
	int houseNumber;
	string city;
	int postalCode;

public:
	string GetStreet();
	int GetHouse();
	string GetCity();
	int GetPostalCode();
};
