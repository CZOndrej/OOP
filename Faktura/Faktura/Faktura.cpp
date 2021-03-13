#include "Address.h"
#include "Invoice.h"
#include "Item.h"
#include "Person.h"
#include <iostream>

using namespace std;

int main()
{
	Person* monika = new Person(new Address("CSA", 25, "Stbk", 78501), "Monika Bláhová");
	
	Invoice* invoice = new Invoice(032021, monika);

	invoice->AddItem(new Item("item1", 250));
	invoice->AddItem(new Item("item2", 150));
	invoice->AddItem(new Item("item3", 280));
	invoice->AddItem(new Item("item4", 550));
	invoice->AddItem(new Item("item5", 750));
	invoice->AddItem(new Item("item6", 950));
	invoice->AddItem(new Item("item7", 1150));
	invoice->AddItem(new Item("item8", 2250));
	invoice->AddItem(new Item("item9", 250));
	invoice->AddItem(new Item("item10", 2550));
	invoice->AddItem(new Item("item11", 250));
	invoice->AddItem(new Item("item12", 200));
	invoice->AddItem(new Item("item13", 50));
	invoice->AddItem(new Item("item14", 950));

	cout << invoice->GetTotal() << endl;
	cout << invoice->GetItemsCount() << endl;

	cin.get();
}

