
#include<string>
#include<iostream>

class Rectangle
{
protected:
	double length, width;
public:
	void setValues(double, double);

	double areaRectangle();
	
	friend void Duplicate(Rectangle box);
	
	
};