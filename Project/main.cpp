#include <iostream>
#include <unistd.h>
#include <math.h>
#include "EngineGlut.h"
#include "Line.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Plane.h"

#define PI 3.1415

void drawSinus()
{
    EngineGlut e;

    //x from (-400,+400)
    //y = 100*sin(x)
    for (float i=0; i<360; i+=1)
    {
	float x = 180-i;
	float y = 100*sin(i/180*PI);
	e.drawPoint(x, y);
    }
}

void drawLineAnimation()
{
    EngineGlut e;

    for (int i=-200; i<0; i+=10)
    {
	    e.drawClear();
	    e.drawLine(i,0,i+300,200);
	    usleep(500000);
    }
}

void testLine()
{
    Line line(-200, 0, 200, 100);
    line.draw();
}

void testTriangle()
{
    Triangle tr(-100, 10, 60, 50, 70, 20, false);
    tr.draw();
}

void testRectangle()
{
    Rectang rect(-50, 10, true);
    rect.draw();
}

int main(int argc, char ** argv)
{
    //init
    initEngineGlut(argc, argv);


    // Testing the shapes
    testLine();
    testTriangle();
    testRectangle();

    Plane plane();
    // Tried to draw the plane but it gives an error when calling the draw function
    // plane.draw();

    std::cin.ignore();
}
