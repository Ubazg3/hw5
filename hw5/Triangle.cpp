#include "Triangle.h"
#define AMOUNT_POINT_TRIANGLE 3

//////////////////////////////////////////////////////////////////////////////
// Canvas and Cimg cannot be used on Linux, 								//
// please make sure to leave it commented if you want test to run on GitLab //
// You can remove comments when you run your exercise locally on Windows .  //
//////////////////////////////////////////////////////////////////////////////
 /*
	c'tor
 */
Triangle::Triangle(const Point& a, const Point& b, const Point& c, std::string type, std::string name): Polygon(name, type)
{
    if (a.getX() != b.getX() && a.getX() != c.getX() && b.getX() != c.getX() &&
        a.getY() != b.getY() && a.getY() != c.getY() && b.getY() != c.getY())
    {
        this->_points.resize(AMOUNT_POINT_TRIANGLE);
        this->_points[FIRST_POINT] = a;
        this->_points[SECOND_POINT] = b;
        this->_points[THIRD_POINT] = c;
    }
}
/*
   d'tor
*/
Triangle::~Triangle()
{
}
/*
   this function is calculating the area of a Triangle
   input: none
   output: the area
*/
double Triangle::getArea()
{
	double hight = 0;
	hight = std::sqrt(std::pow(this->_points[FIRST_POINT].distance(this->_points[SECOND_POINT]), 2) - std::pow(this->_points[SECOND_POINT].distance(this->_points[THIRD_POINT]) / 2, 2));
	return hight * this->_points[SECOND_POINT].distance(this->_points[THIRD_POINT]) / 2;
}
/*
   this function is moving the Triangle
   input: the point to add to all the points
   output: none
*/
void Triangle::move(Point p) 
{
	for (int i = 0; i < this->_points.size(); i++)
	{
		this->_points[i] += p;
	}
}

void Triangle::draw(const Canvas& canvas)
{
	canvas.draw_triangle(_points[0], _points[1], _points[2]);
}

void Triangle::clearDraw(const Canvas& canvas)
{
	canvas.clear_triangle(_points[0], _points[1], _points[2]);
}
