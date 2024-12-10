#include <iostream>
#include <vector>
#include <string>
#include "Polygon.h"
#include "Circle.h"
#include "Arrow.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Menu.h"
#define ADD_SHAPE 0
#define MODIFY_SHAPE 1
#define DELETE_ALL_SHAPES 2
#define EXIT_MENU 3
enum shapes
{
    CIRCLE,
    ARROW,
    TRIANGLE,
    RECTANGLE
};
enum actions
{
    MOVE_SHAPE,
    GET_DETAILS,
    DELETE_SHAPE

};
using std::cout;
using std::cin;
using std::endl;

std::vector<Shape*> shapes;

void addShape();
void modifyShape();
void deleteAllShapes();

int main() 
{
    int option = 0;
    do 
    {
        Menu::printMenu();
        cin >> option;
        switch (option) 
        {
        case ADD_SHAPE:
            addShape();
            break;
        case MODIFY_SHAPE:
            modifyShape();
            break;
        case DELETE_ALL_SHAPES:
            deleteAllShapes();
            break;
        case EXIT_MENU:
            break;
        default:
            break;
        }
    } while (option != EXIT_MENU);

    return 0;
}
/*
    this function is adding a shape based on the user request
    input:none
    output:none
*/
void addShape() 
{
    int shapeType;
    do
    {
        Menu::printMenuOption0();
        cin >> shapeType;
        std::string name;
        cout << "Enter the name of the shape: ";
        cin.ignore();
        std::getline(cin, name);
        switch (shapeType)
        {
        case CIRCLE:
        {
            double x = 0, y = 0, radius = 0;
            cout << "Enter X coordinate: ";
            cin >> x;
            cout << "Enter Y coordinate: ";
            cin >> y;
            cout << "Enter radius: ";
            cin >> radius;
            shapes.push_back(new Circle(Point(x, y), radius, "Circle", name));
            break;
        }
        case ARROW:
        {
            double p1x = 0, p1y = 0, p2x = 0, p2y = 0;
            std::string type = "Arrow";
            cout << "Enter the X of point number : 1\n";
            cin >> p1x;
            cout << "Enter the Y of point number: 1\n";
            cin >> p1y;
            cout << "Enter the X of point number: 2\n";
            cin >> p2x;
            cout << "Enter the Y of point number: 2\n";
            cin >> p2y;
            Point p1(p1x, p1y);
            Point p2(p2x, p2y);
            shapes.push_back(new Arrow(p1, p2, type, name));
            break;
        }
        case TRIANGLE:
        {
            double p1x = 0, p1y = 0, p2x = 0, p2y = 0, p3x = 0, p3y = 0;
            std::string type = "Triangle";
            cout << "Enter the X of point number : 1\n";
            cin >> p1x;
            cout << "Enter the Y of point number: 1\n";
            cin >> p1y;
            cout << "Enter the X of point number: 2\n";
            cin >> p2x;
            cout << "Enter the Y of point number: 2\n";
            cin >> p2y;
            cout << "Enter the X of point number: 3\n";
            cin >> p3x;
            cout << "Enter the Y of point number: 3\n";
            cin >> p3y;
            Point p1(p1x, p1y);
            Point p2(p2x, p2y);
            Point p3(p3x, p3y);
            shapes.push_back(new Triangle(p1, p2, p3, type, name));
            break;
        }
        case RECTANGLE:
        {
            double p1x = 0, p1y = 0, length = 0, width = 0;
            std::string type = "Rectangle";
            cout << "Enter the X of the top left corner:\n";
            cin >> p1x;
            cout << "Enter the Y of the top left corner:\n";
            cin >> p1y;
            cout << "Please enter the length of the shape:\n";
            cin >> length;
            cout << "Please enter the width of the shape:\n";
            cin >> width;
            Point p1(p1x, p1y);
            shapes.push_back(new myShapes::Rectangle(p1,length,width, type, name));
            break;
        }
        default:
            break;
        }
    } while (shapeType > RECTANGLE || shapeType < CIRCLE);
}
/*
    this function is modifying a shape with 3 different options based on user choice
    input:none
    output:none
*/
void modifyShape() 
{
    if (shapes.empty()) 
    {
        cout << "Press any key to continue . . ." << endl;
        return;
    }

    cout << "Select a shape to modify:\n";
    for (size_t i = 0; i < shapes.size(); ++i) 
    {
        cout <<"Enter " << i << ". " << shapes[i]->getName() << " (" << shapes[i]->getType() << ")\n";
    }
    int index;
    cin >> index;
    if (index < 0 || index > shapes.size()) 
    {
        cout << "Press any key to continue . . ." << endl;
        return;
    }

    Shape* shape = shapes[index];
    int action;
    do
    {
        Menu::printMenuOption1();
        cin >> action;
        switch (action)
        {
        case MOVE_SHAPE:
        {
            double newX, newY;
            cout << "Enter new X coordinate: ";
            cin >> newX;
            cout << "Enter new Y coordinate: ";
            cin >> newY;
            shape->move(Point(newX, newY));
            break;
        }
        case GET_DETAILS:
        {
            cout << shape->getType() << " " << shape->getName() << " " << shape->getArea() << " " << shape->getPerimeter() << "\n" << endl;
            cout << "Press any key to continue . . ." << endl;
            break;
        }
        case DELETE_SHAPE:
        {
            delete shapes[index];
            shapes.erase(shapes.begin() + (index));
            break;
        }
        default:
            break;
        }
    } while (action < MOVE_SHAPE || action > DELETE_SHAPE);
}
/*
    this function is deleting all of the shapes that has been added
    input:none
    output:none
*/
void deleteAllShapes() 
{
    for (Shape* shape : shapes) 
    {
        delete shape;
    }
    shapes.clear();
}