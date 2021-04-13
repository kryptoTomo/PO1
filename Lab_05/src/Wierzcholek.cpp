#include"Wierzcholek.h"
#include<iostream>
Wierzcholek::Wierzcholek(const double x,const double y):_x(x),_y(y)
{}
double Wierzcholek::getX()const
{
    return _x;
}
double Wierzcholek::getY()const
{
    return _y;
}
std::ostream & operator<<(std::ostream & os,const Wierzcholek & buffer)
{
    return os<<"("<<buffer.getX()<<", "<<buffer.getY()<<")";
}