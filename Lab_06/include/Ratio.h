#pragma once
#include"Primitive.h"

class Ratio : public Primitive
{
  public:
  Ratio(Primitive & a,Primitive & b);
  void PrintWithValue()const;
  double Print()const override;
  private:
  Primitive & _a;
  Primitive & _b;
};