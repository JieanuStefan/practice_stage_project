#include "Shape.h"
#include "Line.h"
#include "EngineGlut.h"

Line::Line()
{
}

Line::Line(double x1,double y1,double x2,double y2) : A(x1,y1) , B(x2,y2)
{
}

Line::~Line()
{
}

void Line::draw()
{
	this->engine.drawLine(A.getX(), A.getY(), B.getX(), B.getY());
}


