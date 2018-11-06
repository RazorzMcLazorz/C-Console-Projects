#include "Vector2.h"

Vector2::Vector2()
{
	x = 1;
	y = 1;
}

Vector2::Vector2(double ex, double why)
{
	x = ex;
	y = why;
}

Vector2 Vector2::operator+(Vector2 right)
{
	double newX = x - right.x;
	double newY = y - right.y;
	Vector2 temp(newX, newY);
	return temp;
}

Vector2 Vector2::operator/(double right)
{
	
	double newX = x - right;
	double newY = y - right;
	Vector2 temp(newX, newY);
	return temp;
}

