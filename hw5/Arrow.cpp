#include "Arrow.h"

//////////////////////////////////////////////////////////////////////////////
// Canvas and Cimg cannot be used on Linux, 								//
// please make sure to leave it commented if you want test to run on GitLab //
// You can remove comments when you run your exercise locally on Windows .  //
//////////////////////////////////////////////////////////////////////////////

Arrow::Arrow(Point a, Point b, std::string type, std::string name): Shape(name, type)
{
	this->source = a;
	this->destination = b;
	if (this->destination.distance(this->source) == 0)
	{
		exit(1);
	}
}

Arrow::~Arrow()
{
}

Point Arrow::getSource()
{
	return this->source;
}

Point Arrow::getDestination()
{
	return this->destination;
}

double Arrow::getArea()
{
	return 0;
}

double Arrow::getPerimeter()
{
	return this->destination.distance(this->source);
}

void Arrow::move(Point other)
{
	this->source += other;
	this->destination += other;
}
