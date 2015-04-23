#include<iostream>
using namespace std;

#ifndef POINT_H
#define POINT_H

class Point

{
    private:
        int x;
        int y;

    public:
        Point();
        Point (int,int);
        int getX();
        void setX(int);
        int getY();
        void setY(int);
        void setXY(int,int);
        void print();
        Point operator+(Point)const;
};
#endif // POINT_H
