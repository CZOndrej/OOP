#pragma once
#include "Address.h"

using namespace std;

class Person
{
private:
	Address* address;
	string name;

public:
	Person(Address* add, string name);
	~Person();
	string GetName();
	Address* GetAddress();
};

