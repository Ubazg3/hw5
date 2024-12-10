#pragma once
#include "Shape.h"
#include "Canvas.h"
#include <vector>



class Menu
{
public:

	Menu();
	~Menu();

	static void printMenu();
	static void printMenuOption0();
	static void printMenuOption1();
private: 
	Canvas _canvas;
};

