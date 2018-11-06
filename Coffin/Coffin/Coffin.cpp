#include <Coffin.h>

Coffin::Coffin()
{
	width = 0;
	length = 0;
	depth = 0;
}
void Coffin::setWidth(int w)
{
	width = w;

}
void Coffin::setLength(int l)
{
	length = l;
}
void Coffin::setDepth(int d)
{
	depth = d;
}

void Coffin::getWidth(int w)
{
	return width;

}
void Coffin::getLength(int l)
{
	return length;
}
void Coffin::getDepth(int d)
{
	return depth;
}