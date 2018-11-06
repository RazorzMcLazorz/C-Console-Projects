#include <iostream>
#include <string>

#include "Cone.h"


using namespace std;

void Duplicate(Circle K)
{
	double answer = (K.diameter * 2);
	cout << "Double the diameter is " << answer << endl;
}


int main()
{
	Circle K;

	Cone head;
	head.setLines(3, 4);
	cout << "The volume of the Cone in cublic feet is " << head.volumeCone() << endl;

	system("PAUSE");
	return 0;
}