#pragma once
#include "KeyValue.h"
#include <iostream>

class KeyValues
{
private:
	KeyValue** keyValues;
	int count;

public:
	KeyValues(int n);
	~KeyValues();
	KeyValue* CreateObject(int k, double v);
	KeyValue* SearchObject(int k);
	KeyValue* RemoveObject(int k);
	int GetCount();
};

