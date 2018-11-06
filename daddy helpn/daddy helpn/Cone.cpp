#include "Cone.h"

void Cone::setLines(double d, double h)
{
	diameter = d;
	height = h;
}

double Cone::volumeCone()
{
	return (3.14 / 2 * (diameter / 2) * (height / 3));
}