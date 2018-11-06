#include "Rectangle.h"
#include "Triangle.h"

class Prism: public Rectangle, public Triangle
{
protected:
	
public:

	void setValues(double, double, double);

	double volumePrism();
};