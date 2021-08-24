#include"Primitive.h"
#include<iostream>
Primitive::Primitive(const double value): _val(value) {}
double Primitive::Print()const
{
  std::cout<<_val;
  return _val;
}
void Primitive::Set(const double val)
{
  _val=val;
}