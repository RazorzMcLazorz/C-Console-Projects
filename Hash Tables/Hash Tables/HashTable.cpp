#include "HashTable.h"

HashTable::HashTable()
{
	for (int i = 0; i < 20; i++)
		tags[i] = -1000;
}

void HashTable::HashFunction(int data)
{
	int hash = data % 20;
	if (tags[hash] == -1000)
	{
		tags[hash] = data;
		cout << "\nInsertion Successful!" << endl;
	}
	else
	{
		cout << "\nCollision Detected" << endl;
		string message = Collision(hash, data);
		cout << message;
	}
}

string HashTable::Collision(int hash, int data)
{
	int probe = hash + 1;
	do
	{
		if (probe == 20)
			probe = 0;
		if(tags[probe] == -1000)
		{
			tags[probe] = data;
			return "\nProbe Successful!";
		}
		probe++;
	} while (probe != hash);

	return "\nHashTable Full";
}

void HashTable::Display()
{
	cout << "\nIndex\tData" << endl;
	for (int i = 0; i < 20; i++)
		cout << i << "\t" << tags[i] << endl;
}