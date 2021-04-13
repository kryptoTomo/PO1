#include"KontenerFigur.h"

void KontenerFigur::operator+=(Figura * buffer)
{
    _figure.push_back(buffer);
}
std::vector<Figura *>  KontenerFigur::getFigure()const
{
    return _figure;
}
std::ostream & operator<<(std::ostream & os,const KontenerFigur & buffer)
{
    for(unsigned i = 0;i<buffer.getFigure().size();i++)
    {
        os<<"Figura "<<buffer.getFigure()[i]->nazwa()<<":"<<std::endl;
        for(unsigned j=0;j<buffer.getFigure()[i]->getApex().size();j++)
            os<<buffer.getFigure()[i]->getApex()[j];
        os<<std::endl;
    }
    return os;
}