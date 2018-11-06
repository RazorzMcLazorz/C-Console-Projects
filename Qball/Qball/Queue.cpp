#include <iostream>
#include "Queue.h"

Queue::Queue()
{
	Head = NULL;
}

void Queue::push(string h)
{
	Node*back = new Node();
		back->hero = h;
	
		if (Head == NULL)
		{
			Head = back;
		}
		else
		{
			Node* temp = Head;
			while (temp->link != NULL)
			{
				temp = temp->link;
			}
			temp->link = back;
	}
}

void Queue::pop()
{
	if (Head == NULL)
	{
		cout << "UnderFlow, You Idiot" << endl;
	}
	else
	{
		Node* temp = Head;
		if (Head->link = NULL)
		{
			Head = NULL;
		}
		else
		{
			Head = Head->link;
		}
		delete temp;
	}
}

void Queue::Display()
{
	if (Head == NULL)
	{
		cout << "\nNothing to Display\n" << endl;
	}
	else
	{
		Node* temp = Head;
			while (temp != NULL)
			{
				cout << temp->hero << endl;
				temp = temp->link;
			}
	 }
}

