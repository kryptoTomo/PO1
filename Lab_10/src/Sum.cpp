#include"Sum.h"

Sum::Sum(double val):_val(val){}
double Sum::value()const
{
  return _val;
}
void Sum::operator()(double val)
{
  _val+=val;
}
Sum sumData(const Data & buffer)
{
  Sum tmp = std::for_each(buffer._values.begin(),buffer._values.end(), Sum());
  return tmp;
}