#include "EngineGlut.h"
#ifndef Shape_HEADER
#define Shape_HEADER


class Shape
{
protected:
	EngineGlut engine;

public:
	virtual void draw();
};
#endif

