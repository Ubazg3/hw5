#include "Polygon.h"
/*
   c'tor
*/
Polygon::Polygon(std::string type, std::string name) : Shape(type,name)
{
}
/*
   d'tor
*/
Polygon::~Polygon()
{
}
/*
	getter
 */
std::vector<Point> Polygon::getPoints()
{
	return this->_points;
}
/*
  this function is calculating the perimeter of a basic polygon
  input: none
  output: the perimeter
*/
double Polygon::getPerimeter()
{
	double perimeter = 0;
	for (int i = 1; i < this->_points.size(); i++)
	{
		perimeter += this->_points[i].distance(this->_points[i - 1]);
	}
	return perimeter;
}
/*
   this function is moving the polygon
   input: the point to add to all the points
   output: none
*/
void Polygon::move(Point& other) 
{	
	for (int i = 0; i < this->_points.size(); i++)
	{
		this->_points[i] += other;
	}
}
