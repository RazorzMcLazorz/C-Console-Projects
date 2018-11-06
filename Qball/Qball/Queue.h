#include <iostream>
#include <string>
#include "Node.h"

class Queue
{
private:
	Node* Head;
public:
	Queue();

	void push(string);
	void pop();
	void Display();
};