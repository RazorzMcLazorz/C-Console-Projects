
#include<string>
#include<iostream>


class Triangle
{
protected:
	double height;
public:
	
	void setValues(double);

	double areaTriangle();

	friend void Duplicate(Triangle box);
	
	
};