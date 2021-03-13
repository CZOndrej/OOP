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
	Address(string str, int h, string city, int pc);
	string GetStreet();
	int GetHouse();
	string GetCity();
	int GetPostalCode();
};

