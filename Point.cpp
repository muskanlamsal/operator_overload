#include<iostream>
#include "Point.h"
using namespace std;
Point::Point()
{
    setX(0);
    setY(0);
}

Point::Point(int x, int y)
{
    setX(x);
    setY(y);
}

int Point::getX()
{
    return x;
}

void Point::setX(int x)
{
    this->x=x;
}

int Point::getY()
{
    return y;
}

void Point::setY(int y)
{
    this->y=y;
}

void Point::setXY(int x, int y)
{
    this->x=x;
    this->y=y;
}
void Point::print()
{
    cout<<"("<<x<<","<<y<<")";
}
Point Point::operator+(Point point)const{
    Point point1;
    point1.x=this->x+ point.x; //this->x assigns the value of p1 and b.x assigns the value of p2.
    point1.y=this->y+ point.y; //this->y assigns the value of p1 and b.y assigns the value of p2.
    return point1;
}

