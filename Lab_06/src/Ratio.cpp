#include"Ratio.h"

#include<iostream>

Ratio::Ratio(Primitive & a,Primitive & b) : _a(a), _b(b){}
double Ratio::Print()const
{
  std::cout<<"(";
  double a = _a.Print();
  std::cout<<"/";
  double b = _b.Print();
  std::cout<<")";
  return a/b;
}
void Ratio::PrintWithValue()const
{
  std::cout<<"(";
  double a = _a.Print();
  std::cout<<"/";
  double b = _b.Print();
  std::cout<<") = "<<a/b<<std::endl;
}
