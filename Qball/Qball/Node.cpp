#include "Node.h"

Node::Node()
{
	hero = "";
	link = NULL;
}

Node::Node(string h)
{
	hero = h;
	link = NULL;
}

Node::Node(string h, Node* l)
{
	hero = h;
	link = l;
}