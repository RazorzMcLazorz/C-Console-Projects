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

Vector2 Vector2::minus(Vector2 right)
{
	
	double newX = x - right.x;
	double newY = y - right.y;
	return Vector2(newX, newY);
}

Vector2 Vector2::operator-(Vector2 right)
{
	double newX = x - right.x;
	double newY = y - right.y;
	return Vector2(newX, newY);
}