#include "Point.h"

int Point::getX()
{
	return x;
}

int Point::getY()
{
	return y;
}

void Point::setX(int _x)
{
	x = _x;
}

void Point::setY(int _y)
{
	y = _y;
}

int Point::multiply()
{
	return x * y;
}
