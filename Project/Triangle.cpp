#include "Shape.h"
#include "Triangle.h"
#include "EngineGlut.h"

Triangle::Triangle()
{
}

Triangle::Triangle(double x1, double y1, double x2, double y2, double x3, double y3, bool _shapeFill) : A(x1, y1), B(x2, y2), C(x3, y3)
{
	shapeFill = _shapeFill;
}
Triangle::~Triangle() {

}

void Triangle :: drawLines() {
	engine.drawLine(A.getX(), A.getY(), B.getX(), B.getY());
	engine.drawLine(B.getX(), B.getY(), C.getX(), C.getY());
	engine.drawLine(C.getX(), C.getY(), A.getX(), A.getY());

}

void Triangle::drawShape()
{
	engine.drawSurface(A.getX(), A.getY(), B.getX(), B.getY(), C.getX(), C.getY());
}

bool Triangle::getFill()
{
	return shapeFill;
}

void Triangle::draw() {
	if (shapeFill)
		drawShape();
	else
        drawLines();
}

