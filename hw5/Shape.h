#pragma once
#include "Point.h"

// Uncomment when you want to draw on Canvas and run it locally on windows
#include "Canvas.h" 
#include <string>

class Shape 
{
public:

	// Constructor
	Shape(std::string name, std::string type);

	// Destructor
	~Shape();

	// Getters
	std::string getType();
	std::string getName();

	// Methods
	virtual double getArea() = 0;
	virtual  double getPerimeter() = 0;
	virtual void move(Point other) = 0; // add the Point coordinates to all the points coordinates in the shape
	void printDetails();

private:
	std::string _name;
	std::string _type;
};