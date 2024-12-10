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
 /*
    c'tor
 */
 
 Circle::Circle(Point center, double radius, std::string type, std::string name) : Shape(name, type)
 {
     if (radius <= 0)
     {
         exit(1);
     }
     this->radius = radius;
     this->center = center;
 }
 /*
   d'tor
*/
 Circle::~Circle()
 {
 }
 /*
    getter
 */
 Point Circle::getCenter()
 {
     return this->center;
 }
 /*
    getter
 */
 double Circle::getRadius()
 {
     return this->radius;
 }
 /*
    this function is calculating the area of a circle
    input: none
    output: the area
 */
 double Circle::getArea()
 {
     return PI * this->radius * this->radius ;
 }
 /*
   this function is calculating the perimeter of a circle
   input: none
   output: the perimeter
*/
 double Circle::getPerimeter()
 {
     return 2 * PI * this->radius;
 }
 /*
    this function is moving the circle
    input: the point to add to the middle
    output: none
 */
 void Circle::move(Point other)
 {
     this->center += other;
 }
