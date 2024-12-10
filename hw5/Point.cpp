#include "Point.h"
/*
   c'tor
*/
Point::Point()
{
	this->x = 0;
	this->y = 0;
}
/*
   c'tor
*/
Point::Point(double x, double y)
{
	this->x = x;
	this->y = y;
}
/*
   d'tor
*/
Point::~Point()
{
}
/*
	this function making the operator + avilable by adding 2 points together
	input: the point to add
	output: new point with both combined
*/
Point Point::operator+(const Point& other) const
{
	return Point(x + other.x, y + other.y);
}
/*
	this function making the operator =+ avilable by adding point to this point
	input: the point to add
	output: the current point but with the other point added
*/
Point& Point::operator+=(const Point& other)
{
	this->x += other.getX();
	this->y += other.getY();
	return *this;
}
/*
	getter
 */
double Point::getX() const
{
	return this->x;
}
/*
	getter
 */
double Point::getY() const
{
	return this->y;
}
/*
	this function is calculating the distance between 2 points
	input: the point to calculate the distance with
	output: the distance
*/
double Point::distance(Point& other)
{
	return std::sqrt((this->x - other.getX()) * (this->x - other.getX()) + (this->y - other.getY()) * (this->y - other.getY()));
}
