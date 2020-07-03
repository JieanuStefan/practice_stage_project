#include "Triangle.h"
#include "Plane.h"
#include "Rectangle.h"
#include "Line.h"
#include "Point.h"

Plane::Plane()
{
}

void Plane::draw()
{
    Triangle tr(-100, 10, 60, 50, 10, 100, true);
    tr.draw();
}
