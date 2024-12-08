#include "Point.h"

Point::Point()
{
	this->x = 0;
	this->y = 0;
}

Point::Point(double x, double y)
{
	this->x = x;
	this->y = y;
}

Point::~Point()
{
}

Point Point::operator+(const Point& other) const
{
	return Point(x + other.x, y + other.y);
}

Point& Point::operator+=(const Point& other)
{
	this->x += other.getX();
	this->y += other.getY();
	return *this;
}
double Point::getX() const
{
	return this->x;
}
double Point::getY() const
{
	return this->y;
}
double Point::distance(Point& other)
{
	return std::sqrt((this->x - other.getX()) * (this->x - other.getX()) + (this->y - other.getX()) * (this->y - other.getY()));
}
