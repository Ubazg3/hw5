#include "Circle.h"


//////////////////////////////////////////////////////////////////////////////
// Canvas and Cimg cannot be used on Linux, 								//
// please make sure to leave it commented if you want test to run on GitLab //
// You can remove comments when you run your exercise locally on Windows .  //
//////////////////////////////////////////////////////////////////////////////

 void Circle::draw(const Canvas& canvas)
 {
 	canvas.draw_circle(getCenter(), getRadius());
 }

 void Circle::clearDraw(const Canvas& canvas)
 {
 	canvas.clear_circle(getCenter(), getRadius());
 }

 Circle::Circle(Point center, double radius, std::string type, std::string name) : Shape(name, type)
 {
     if (radius <= 0)
     {
         exit(1);
     }
     this->radius = radius;
     this->center = center;
 }

 Circle::~Circle()
 {
 }

 Point Circle::getCenter()
 {
     return this->center;
 }

 double Circle::getRadius()
 {
     return this->radius;
 }

 double Circle::getArea()
 {
     return PI * this->radius * this->radius ;
 }

 double Circle::getPerimeter()
 {
     return 2 * PI * this->radius;
 }

 void Circle::move(Point other)
 {
     this->center += other;
 }
