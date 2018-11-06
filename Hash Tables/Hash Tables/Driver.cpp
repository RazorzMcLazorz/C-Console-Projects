#include "HashTable.h"

int main()
{
	HashTable phart;

	string again = "y";

	int data;

	do
	{
		cout << "enter an integer to be stored in the HashTable." << endl;
		cin >> data;

		phart.HashFunction(data);

		cout << "Enter 'y' to enter another integer!" << endl;
	}while (again == "y");

	phart.Display();

	system("PAUSE");
	return 0;
}