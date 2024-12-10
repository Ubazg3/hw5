#pragma once
#include "Polygon.h"
enum PLACES
{
	FIRST_PLACE,
	SECOND_PLACE,
	THIRD_PLACE,
	FORTH_PLACE
};

namespace myShapes
{
	// Calling it MyRectangle becuase Rectangle is taken by global namespace.
	class Rectangle : public Polygon
	{
	public:

		// Constructor
		// There's a need only for the top left corner 
		Rectangle(Point& a, double length, double width, std::string type, std::string name);

		// Destructor
		~Rectangle();
		double getArea();
		void move(Point p);
		void draw(const Canvas& canvas);
		void clearDraw(const Canvas& canvas);

	private:
	
		// add fields if necessary

	};
}