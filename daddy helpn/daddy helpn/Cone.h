#include "Circle.h"
#include "Triangle.h"

class Cone: public Circle, public Triangle
{
protected:

public:
	void setLines(double, double);

	double volumeCone();
};