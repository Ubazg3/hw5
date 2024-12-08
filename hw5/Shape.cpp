#include "Shape.h"

Shape::Shape(std::string name, std::string type)
{
	this->_name = name;
	this->_type = type;
}

Shape::~Shape()
{
}

std::string Shape::getType()
{
	return this->_type;
}

std::string Shape::getName()
{
	return this->_name;
}

void Shape::printDetails()
{
	std::cout << this->_name << this->_type << std::endl;
}
