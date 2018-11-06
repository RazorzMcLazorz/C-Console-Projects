#include "Hay.h"
class Stack
{
private:
	Hay* Head;
public:
	Stack();
	void Push(char);
	char Peak();
	void Pop();
};