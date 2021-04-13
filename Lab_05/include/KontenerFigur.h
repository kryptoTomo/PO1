#pragma once
#include<vector>
#include<ostream>
#include"Figura.h"
class KontenerFigur
{
    public:
    void operator+=(Figura * buffer);
    std::vector<Figura *>  getFigure()const;
    private:
    std::vector<Figura *> _figure;
};
std::ostream & operator<<(std::ostream & os,const KontenerFigur & buffer);