#include"Product.h"

#include<iostream>

Product::Product(Primitive & a,Primitive & b) : _a(a), _b(b){}
double Product::Print()const
{
  std::cout<<"(";
  double a = _a.Print();
  std::cout<<"*";
  double b = _b.Print();
  std::cout<<")";
  return a*b;
}
void Product::PrintWithValue()const
{
  std::cout<<"(";
  double a = _a.Print();
  std::cout<<"*";
  double b = _b.Print();
  std::cout<<") = "<<a*b<<std::endl;
}
