#include "Polygon.h"

Polygon::Polygon(std::string type, std::string name) : Shape(type,name)
{
}

Polygon::~Polygon()
{
}

std::vector<Point> Polygon::getPoints()
{
	return this->_points;
}

double Polygon::getPerimeter()
{
	double perimeter = 0;
	for (int i = 1; i < this->_points.size(); i++)
	{
		perimeter += this->_points[i].distance(this->_points[i - 1]);
	}
	return perimeter;
}
