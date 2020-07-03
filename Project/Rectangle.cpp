#include "Shape.h"
#include "Rectangle.h"
#include "EngineGlut.h"

Rectang::Rectang()
{
}

Rectang::Rectang(double x, double y, bool _shapeFill) : A(x, y), B(-x, y), C(-x, -y), D(x, -y)
{
	shapeFill = _shapeFill;
}

Rectang::~Rectang()
{
}

void Rectang::drawLines() {

	engine.drawLine(A.getX(), A.getY(), B.getX(), B.getY());
	engine.drawLine(B.getX(), B.getY(), C.getX(), C.getY());
	engine.drawLine(C.getX(), C.getY(), D.getX(), D.getY());
	engine.drawLine(D.getX(), D.getY(), A.getX(), A.getY());

}

void Rectang::drawShape()
{
	engine.drawSurface(A.getX(), A.getY(), B.getX(), B.getY(), C.getX(), C.getY());
	engine.drawSurface(A.getX(), A.getY(), D.getX(), D.getY(), C.getX(), C.getY());
}

bool Rectang::getFill()
{
	return shapeFill;
}

void Rectang::draw() {
	if (shapeFill)
		drawShape();
	else
		drawLines();
}
