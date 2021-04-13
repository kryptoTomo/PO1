#pragma once
#include<cmath>

class Sinus
{
public:

  Sinus(const double a,const double b);
  double operator()(double x)const;
private:
  double _a{0};
  double _b{0};
};
class PierwiastekKwadratowy
{
  public:
  double operator()(double x)const;
};
class Liniowa
{
  public:
  Liniowa(const double a,const double b);
  double operator()(double x)const;
  private:
  double _a{0};
  double _b{0};
};
