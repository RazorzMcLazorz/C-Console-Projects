#include <iostream>
#include <string>
#pragma once
using namespace std;

struct Node
{
	string hero;
	Node* link;

	Node();

	Node(string);
	Node(string, Node*);
};