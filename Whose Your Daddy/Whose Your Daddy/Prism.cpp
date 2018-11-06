#include "Prism.h"

void Prism::setValues(double h, double w, double l)
{
	height = h, width = w, length = l;
}
double Prism::volumePrism()
{
	length = 5; width = 6; height = 7;
	return (length * (width * height) / 2);
}
