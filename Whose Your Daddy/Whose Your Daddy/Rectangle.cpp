#include"Rectangle.h"

void Rectangle::setValues(double w, double l)
{
	width = w, length = l;
}
double Rectangle::areaRectangle()
{
	length = 1; width = 2;
	return (length * width);
}
