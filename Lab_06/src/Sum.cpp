#include"Sum.h"

#include<iostream>

Sum::Sum(Primitive & a,Primitive & b) : _a(a), _b(b){}
double Sum::Print()const
{
  std::cout<<"(";
  double a = _a.Print();
  std::cout<<"+";
  double b = _b.Print();
  std::cout<<")";
  return a+b;
}
void Sum::PrintWithValue()const
{
  std::cout<<"(";
  double a = _a.Print();
  std::cout<<"+";
  double b = _b.Print();
  std::cout<<") = "<<a+b<<std::endl;
}
