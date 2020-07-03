#include "Point.h"

class Line : public Shape
{
	Point A, B;
public:
	Line();
	Line(double, double, double, double);
	~Line();
	void draw();
};


