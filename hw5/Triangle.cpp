#include "Triangle.h"


//////////////////////////////////////////////////////////////////////////////
// Canvas and Cimg cannot be used on Linux, 								//
// please make sure to leave it commented if you want test to run on GitLab //
// You can remove comments when you run your exercise locally on Windows .  //
//////////////////////////////////////////////////////////////////////////////

Triangle::Triangle(Point a, Point b, Point c, std::string type, std::string name) : Polygon(name, type)
{
	if (a.getX() == b.getX() && a.getX() == b.getX() || a.getY() == b.getY() && a.getY() == b.getY())
	{
		exit(1);
	}
	else if (a.distance(b) == 0 || a.distance(c) == 0 || b.distance(c) == 0)
	{
		exit(0);
	}
	this->_points[FIRST_POINT] = a;
	this->_points[SECOND_POINT] = b;
	this->_points[THIRD_POINT] = c;
}

Triangle::~Triangle()
{
}

double Triangle::getArea()
{
	double hight = 0;
	hight = std::sqrt(std::pow(this->_points[FIRST_POINT].distance(this->_points[SECOND_POINT]), 2) - std::pow(this->_points[SECOND_POINT].distance(this->_points[THIRD_POINT]) / 2, 2));
	return hight * this->_points[SECOND_POINT].distance(this->_points[THIRD_POINT]) / 2;
}

void Triangle::draw(const Canvas& canvas)
{
	canvas.draw_triangle(_points[0], _points[1], _points[2]);
}

void Triangle::clearDraw(const Canvas& canvas)
{
	canvas.clear_triangle(_points[0], _points[1], _points[2]);
}
