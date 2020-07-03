#include "Point.h"
#ifndef Triangle_HEADER
#define Triangle_HEADER


class Triangle : public Shape
{
	Point A, B, C;
	bool shapeFill;
	void drawLines();
	void drawShape();
public:
	Triangle();
	Triangle(double, double, double, double, double, double, bool);
	~Triangle();

	bool getFill();
	void draw();
};
#endif

