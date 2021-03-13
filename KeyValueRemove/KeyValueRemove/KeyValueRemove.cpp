
#include <iostream>
#include "KeyValue.h"
#include "KeyValues.h"

using namespace std;


int main()
{
	int n = 10;
	KeyValues* myKeyValues = new KeyValues(n);
	KeyValue* myKeyValue = myKeyValues->CreateObject(0, 0.5);

	cout << myKeyValues->SearchObject(0)->GetValue() << endl;

	for (int i = 1; i < n; i++)
	{
		myKeyValues->CreateObject(i, i + 0.5);
	}

	cout << myKeyValues->SearchObject(4)->GetValue() << endl;
	cout << endl;

	for (int i = 0; i < myKeyValues->GetCount(); i++)
	{
		cout << "Key: " << myKeyValues->SearchObject(i)->GetKey() << " Value: " << myKeyValues->SearchObject(i)->GetValue() << endl;
	}
	cout << myKeyValues->GetCount() << endl;
	cout << endl;

	myKeyValues->RemoveObject(3);

	for (int i = 0; i < myKeyValues->GetCount(); i++)
	{
		if (myKeyValues->SearchObject(i) != nullptr)
		{
			cout << "Key: " << i << " Value: " << myKeyValues->SearchObject(i)->GetValue() << endl;

		}
	}
	cout << myKeyValues->GetCount() << endl;

}

