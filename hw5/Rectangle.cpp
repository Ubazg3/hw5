#include "Rectangle.h"
#define AMOUNT_POINT_RECTANGLE 4
//////////////////////////////////////////////////////////////////////////////
// Canvas and Cimg cannot be used on Linux, 								//
// please make sure to leave it commented if you want test to run on GitLab //
// You can remove comments when you run your exercise locally on Windows .  //
//////////////////////////////////////////////////////////////////////////////
 /*
    c'tor
 */
myShapes::Rectangle::Rectangle(Point& a, double length, double width, std::string type, std::string name) : Polygon(name, type)
{
    if (length > 0 || width > 0)
    {
        this->_points.resize(AMOUNT_POINT_RECTANGLE);
        this->_points[FIRST_PLACE] = a;
        this->_points[SECOND_PLACE] = a + Point(length, 0);
        this->_points[THIRD_PLACE] = a + Point(length, width);
        this->_points[FORTH_PLACE] = a + Point(0, width);
    }
}
/*
   d'tor
*/
myShapes::Rectangle::~Rectangle()
{
}
/*
   this function is calculating the area of a Rectangle
   input: none
   output: the area
*/
double myShapes::Rectangle::getArea()
{
	return this->_points[FIRST_PLACE].distance(this->_points[SECOND_PLACE]) * this->_points[FIRST_PLACE].distance(this->_points[FORTH_PLACE]);
}
/*
   this function is moving the rectangle
   input: the point to add to all the points
   output: none
*/
void myShapes::Rectangle::move(Point p)
{
		for (int i = 0; i < this->_points.size(); i++)
	{
		this->_points[i] += p;
	}
}

void myShapes::Rectangle::draw(const Canvas& canvas)
{
	canvas.draw_rectangle(_points[0], _points[1]);
}
void myShapes::Rectangle::clearDraw(const Canvas& canvas)
{
	canvas.clear_rectangle(_points[0], _points[1]);
}
