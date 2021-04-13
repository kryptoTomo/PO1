#pragma once
#include<vector>
#include<ostream>
class Wierzcholek
{
    public:
    Wierzcholek(const double x,const double y);
    double getX()const;
    double getY()const;
    private:
    double _x;
    double _y;
};
std::ostream & operator<<(std::ostream & os,const Wierzcholek & buffer);