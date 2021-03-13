#pragma once
#include <iostream>

using namespace std;

class Item
{
private:
	string name;
	int price;

public:
	string GetName();
	int GetPrice();
};

