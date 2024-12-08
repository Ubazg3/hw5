#include "Polygon.h"
#include <string>
#define FIRST_POINT 0
#define SECOND_POINT 1
#define THIRD_POINT 2
class Triangle : public Polygon
{
public:

	// Constructor
	Triangle(Point a, Point b, Point c, std::string type, std::string name);

	// Destructor
	~Triangle();
	double getArea();
	virtual void draw(const Canvas& canvas);
	virtual void clearDraw(const Canvas& canvas);
};