#pragma once
#include <iostream>

using namespace std;

class Item
{
private:
	string name;
	int price;

public:
	Item(string n, int p);
	string GetName();
	int GetPrice();
};

