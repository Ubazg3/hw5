#include "Menu.h"
#include <iostream>

Menu::Menu() {}

Menu::~Menu() {}
/*
    this function is printing the first menu
*/
void Menu::printMenu()
{
    std::cout << "Enter 0 to add a new shape.\n"
        << "Enter 1 to modify or get information from a current shape.\n"
        << "Enter 2 to delete all of the shapes.\n"
        << "Enter 3 to exit.\n" << std::endl;
}
/*
    this function is printing what shape to draw
*/
void Menu::printMenuOption0()
{
    std::cout << "Enter 0 to add a circle.\n"
        << "Enter 1 to add an arrow.\n"
        << "Enter 2 to add a triangle.\n"
        << "Enter 3 to add a rectangle.\n" << std::endl;
}
/*
    this function is printing the actions you can do with a cirtein shape
*/
void Menu::printMenuOption1()
{
    std::cout << "0. Move the shape\n"
        << "1. Get shape details\n"
        << "2. Delete the shape\n" << std::endl;
}
