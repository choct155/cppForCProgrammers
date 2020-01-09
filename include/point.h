#include <iostream>

class Point {
private:
    double x, y;
public:
    double getX() { return x; }
    void setX( double newX ) { x = newX; }
    double getY() { return y; }
    void setY( double newY ) { y = newY; }
    Point( double x0, double y0 );
    ~Point( void );
};

Point operator + (Point& p1, Point& p2);