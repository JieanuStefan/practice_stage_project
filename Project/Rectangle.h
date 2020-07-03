#include "Point.h"
class Rectang : public Shape
{
	Point A, B, C, D;
	bool shapeFill;
	void drawLines();
	void drawShape();

public:
	Rectang();
	Rectang(double, double, bool);
	~Rectang();

	bool getFill();
	void draw();
};

