#include "Rectangle.h"

//////////////////////////////////////////////////////////////////////////////
// Canvas and Cimg cannot be used on Linux, 								//
// please make sure to leave it commented if you want test to run on GitLab //
// You can remove comments when you run your exercise locally on Windows .  //
//////////////////////////////////////////////////////////////////////////////

myShapes::Rectangle::Rectangle(Point a, double length, double width, std::string type, std::string name) : Polygon(name, type)
{
	if (length <= 0 || width <= 0)
	{
		exit(1);
	}
	this->_points[FIRST_PLACE] = a;
	this->_points[SECOND_PLACE] = a + Point(length,0);
	this->_points[THIRD_PLACE] = a + Point(length, width);
	this->_points[FORTH_PLACE] = a + Point(0, width);
}

myShapes::Rectangle::~Rectangle()
{
}

double myShapes::Rectangle::getArea()
{
	return this->_points[FIRST_PLACE].distance(this->_points[SECOND_PLACE]) * this->_points[FIRST_PLACE].distance(this->_points[FORTH_PLACE]);
}

void myShapes::Rectangle::draw(const Canvas& canvas)
{
	canvas.draw_rectangle(_points[0], _points[1]);
}
void myShapes::Rectangle::clearDraw(const Canvas& canvas)
{
	canvas.clear_rectangle(_points[0], _points[1]);
}
