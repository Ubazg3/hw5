#include "Arrow.h"

//////////////////////////////////////////////////////////////////////////////
// Canvas and Cimg cannot be used on Linux, 								//
// please make sure to leave it commented if you want test to run on GitLab //
// You can remove comments when you run your exercise locally on Windows .  //
//////////////////////////////////////////////////////////////////////////////
/*
	c'tor
*/
Arrow::Arrow(Point a, Point b, std::string type, std::string name): Shape(name, type)
{
	this->source = a;
	this->destination = b;
	if (this->destination.distance(this->source) == 0)
	{
		exit(1);
	}
}
/*
	d'tor
*/
Arrow::~Arrow()
{
}
/*
	getter
*/
Point Arrow::getSource()
{
	return this->source;
}
/*
	getter
*/
Point Arrow::getDestination()
{
	return this->destination;
}
/*
	the function is calculating the area of the arrow
*/
double Arrow::getArea()
{
	return 0;
}
/*
	the function is calculating the perimeter of an arrow
*/
double Arrow::getPerimeter()
{
	return this->destination.distance(this->source);
}
/*
	this function is adding to the arrow an x and y of a point
	input: the point
	output: none
*/
void Arrow::move(Point p)
{
	this->source += p;
	this->destination += p;
}
