#pragma once
#include "Shape.h"

class Arrow : public Shape
{
public:

	// Constructor
	Arrow(Point a, Point b, std::string type, std::string name);

	// Destructor
	~Arrow();

	// Getters
	Point getSource();
	Point getDestination();

	double getArea();
	double getPerimeter();
	void move(Point other); // add the Point coordinates to all the points coordinates in the shape


private:

	Point source;
	Point destination;
};