#pragma once

class Point {
private:
	int x, y;
public:
	int getX();
	int getY();
	int multiply();

	Point(int _x, int _y) {
		this->x = _x;
		this->y = _y;
	}
};
