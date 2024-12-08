#pragma once

#include "Shape.h"
#include "Point.h"

#define PI 3.14

class Circle : public Shape
{
public:

	// Constructor
	Circle(Point center, double radius, std::string type, std::string name);

	// Destructor
	~Circle();

	// Getters
	Point getCenter();
	double getRadius();
	double getArea();
	double getPerimeter();
	void move(Point other);

	virtual void draw(const Canvas& canvas);
	virtual void clearDraw(const Canvas& canvas);

private:

	Point center;
	double radius;

};