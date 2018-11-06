#include <iostream>
#include <string>

using namespace std;

struct Vector2
{
public:
	double x, y;

	Vector2();
	Vector2(double, double);

	Vector2 operator+(Vector2);

	Vector2 operator/(double);

};