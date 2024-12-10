#include "Shape.h"
/*
   c'tor
*/
Shape::Shape(std::string name, std::string type)
{
	this->_name = name;
	this->_type = type;
}
/*
   d'tor
*/
Shape::~Shape()
{
}
/*
	getter
 */
std::string Shape::getType()
{
	return this->_type;
}
/*
	getter
 */
std::string Shape::getName()
{
	return this->_name;
}
/*
	this function is printing the details of a shape
*/
void Shape::printDetails()
{
	std::cout << this->_name << this->_type << std::endl;
}
