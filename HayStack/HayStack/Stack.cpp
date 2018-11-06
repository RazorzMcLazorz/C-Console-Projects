#include "Stack.h"
Stack::Stack()
{
	Head = NULL;
}
void Stack::Push(char l)
{
	Hay* newTop = new Hay();
	newTop->letter = l;
	if (Head != NULL)
	{
		newTop->knowd = Head;
	}
		Head = newTop;
}
char Stack::Peak()
{
	if (Head == NULL)
	{
		cout << "\nNothing in the Stack\n" << endl;
		return ' ';
	}
	else if(Head->letter == 'H')
	{
		return 'a';
	}
	else if(Head->letter == 'Y')
	{
		return 'e';
	}
	else
	{
		return Head->letter;
	}
}
void Stack::Pop()
{
	if (Head == NULL)
	{
		cout << "Nothing in the Stack" << endl;
	}
	else
	{
		Hay *temp = Head;
		Head = Head->knowd;
		delete temp;
	}
}
