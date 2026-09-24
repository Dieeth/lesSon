#include <iostream>
#include "Point.h"

using namespace std;

int main()
{
	Point* MyPoint = new Point(5, 3);

	cout << MyPoint->getX() << endl;
	cout << MyPoint->getY() << endl;
	cout << MyPoint->multiply() << endl;
}
