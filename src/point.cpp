#include <iostream>
#include "point.h"

Point::Point( double x0, double y0 )
{
    std::cout << "New Point @(x = " << x0 << ", y=" << y0 << ")" << std::endl;
    x = x0;
    y = y0;
}

Point::~Point( void )
{
    std::cout << "The Point @(x = " << x << ", y=" << y << ") is being deleted" << std::endl;
}

Point operator + (Point& p1, Point& p2) {
    int newX = p1.getX() + p2.getX();
    int newY = p1.getY() + p2.getY();
    return Point(newX, newY);
} 

std::ostream& operator << (std::ostream& out, Point& p) {
    out << "Point( " << p.getX() << ", " << p.getY() << " )";
    return out;
}