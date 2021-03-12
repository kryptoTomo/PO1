#include"V.h"
#include <utility>
#include<cmath>
V::V(const unsigned val):_dimension(val)
{
  _vect = new int[_dimension];
  for(unsigned i = 0;i<_dimension;i++)
    _vect[i]=0;
}
V::V(const V & vect):V(vect._dimension)
{
  for(unsigned i =0;i<_dimension;i++)
    _vect[i] = vect._vect[i];
}
V::V(V &&vect)
{
  _dimension = vect._dimension;
  _vect = vect._vect;
  vect._vect = nullptr;
  vect._dimension=0;
}
V::~V()
{
  delete []_vect;
}
int & V::at(unsigned  num)const
{
  return _vect[num];
}

//(2, 0, 0)
void V::print(const std::string buffer)const
{
  if(!_vect)
  {
    std::cout<<"The vector does not exist"<<std::endl;
    return;
  }
  std::cout<<buffer<<"(";
  for(unsigned i = 0;i<_dimension-1;i++)
    std::cout<<_vect[i]<<", ";
  std::cout<<_vect[_dimension-1]<<")"<<std::endl;
}
double V::dot(const V& vect_1,const V& vect_2)
{
  if(vect_1._dimension!=vect_2._dimension)
  {
    std::cout<<"Error, vectors of different dimensions!"<<std::endl;
    return V(0);
  }
  double wynik = 0;
  for(unsigned i = 0;i<vect_1._dimension;i++)
    wynik+=static_cast<double>(vect_1._vect[i]*vect_2._vect[i]);
  return wynik;
}
V V::sum(const V & vect1,const V &vect2)
{
  if(vect1._dimension!=vect2._dimension)
  {
    std::cout<<"Error, vectors of different dimensions!"<<std::endl;
    return V(0);
  }
  V temp(vect1._dimension);
  for(unsigned i = 0;i<temp._dimension;i++)
    temp._vect[i]=vect1._vect[i]+vect2._vect[i];
  return temp;
}
V V::sum(const V & vect1,const int val)
{
  V temp(vect1._dimension);
  for(unsigned i = 0;i<temp._dimension;i++)
    temp._vect[i]=vect1._vect[i]+val;
  return temp;
}
double V::norm()const
{
  double temp = 0;
  for(unsigned i =0;i<_dimension;i++)
  {
    temp += pow(_vect[i],2);
  }
  return sqrt(temp);
} 
V::operator double() const
{
  return norm();
}
