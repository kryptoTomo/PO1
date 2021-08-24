#pragma once
#include"Primitive.h"

class Product : public Primitive
{
  public:
  Product(Primitive & a,Primitive & b);
  void PrintWithValue()const;
  double Print()const override;
  private:
  Primitive & _a;
  Primitive & _b;
};