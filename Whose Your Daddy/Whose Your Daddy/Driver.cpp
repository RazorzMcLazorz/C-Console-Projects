#include <iostream>
#include <string>

#include "Prism.h"


using namespace std;
void Duplicate(Rectangle box)
{
	double answer = ((box.width * 2) + (box.length * 2));
	cout << "Double the Perimeter is " << answer << endl;
}
void Duplicate(Triangle box)
{
	double answer = ((box.height * 2));
	cout << "Double the Perimeter is " << answer << endl;
}
int main()
{
	Triangle box;
	box.setValues(4);
	Rectangle bix;
	bix.setValues(1, 2);


	Prism head;
	
	cout << "The volume of the Prism in cublic feet is " << head.volumePrism() << endl;
	cout << "The area of the Triangle in square feet is " << box.areaTriangle() << endl;
	cout << "The area of the Rectangle in square feet is " << bix.areaRectangle() << endl;
	cout << endl;
	
	Duplicate(box);
	Duplicate(bix);

	system("PAUSE");
	return 0;
}