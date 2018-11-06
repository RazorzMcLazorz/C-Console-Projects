#include <iostream>
#include <string>

using namespace std;

class HashTable
{
private:
	int tags[20];


public:
	HashTable();

	void HashFunction(int);

	string Collision(int, int);

	void Display();
};