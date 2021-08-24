#pragma once
#include"Primitive.h"

class Sum : public Primitive
{
  public:
  Sum(Primitive & a,Primitive & b);
  void PrintWithValue()const;
  double Print()const override;
  private:
  Primitive & _a;
  Primitive & _b;
};