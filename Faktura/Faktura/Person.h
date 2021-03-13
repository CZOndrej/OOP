#pragma once
#include "Address.h"

using namespace std;

class Person
{
private:
	Address* address;
	string name;

public:
	string GetName();
	Address* GetAddress();
};

