#include"Figura.h"
#include<cmath>
Figura::Figura(std::string name):_name(name)
{
    std::cout<<"Jestem nową figurą "<<_name<<std::endl;
}
Figura & Figura::operator+=(Wierzcholek buffer)
{

    return dodajW(buffer);
}
Figura & Figura::dodajW(Wierzcholek buffer)
{
    _apex.push_back(buffer);
    return *this;
}
std::string Figura::nazwa()const
{
    return _name;
}
const double Figura::pole()const
{
    if(_apex.size()!=4)
        return 0;
    double a=sqrt(pow(_apex[0].getX()-_apex[1].getX(),2)+pow(_apex[0].getY()-_apex[1].getY(),2));
    double b=sqrt(pow(_apex[2].getX()-_apex[3].getX(),2)+pow(_apex[2].getY()-_apex[3].getY(),2));
    return a*b;
}
bool Figura::operator==(Figura & buffer)
{
    if(_apex.size()==buffer._apex.size())
        return true;
    return false;
}
std::vector<Wierzcholek> Figura::getApex()const
{
    return _apex;
}