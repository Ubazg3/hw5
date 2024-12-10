#include "Polygon.h"
#include <string>
#define FIRST_POINT 0
#define SECOND_POINT 1
#define THIRD_POINT 2
class Triangle : public Polygon
{
public:

	// Constructor
	Triangle(const Point& a, const Point& b, const Point& c, std::string type, std::string name);

	// Destructor
	~Triangle();
	double getArea();
	void move(Point p);
	void draw(const Canvas& canvas);
	void clearDraw(const Canvas& canvas);
};