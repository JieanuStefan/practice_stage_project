#include "Shape.h"
#ifndef Point_HEADER
#define Point_HEADER

class Point : private Shape
{
	double x, y;
public:
	Point();
	Point(double,double);
	~Point();
	double getX();
	double getY();
	void setX(double);
	void setY(double);
	void draw();
};
#endif

