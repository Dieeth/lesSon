#pragma once

class Point {
private:
	int x, y;
public:
	int getX();
	int getY();
	void setX(int _x);
	void setY(int _y);
	int multiply();

	Point(int _x, int _y) {
		this->x = _x;
		this->y = _y;
	}
};
