#include "Triangle.h"



void Triangle::setValues(double h)
{
	height = h;
}

double Triangle::areaTriangle()
{
	height = 4;
	double base = height * 1.15;
	return ((base * height) / 2);
}
