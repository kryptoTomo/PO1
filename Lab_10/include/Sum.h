#pragma once
#include"Data.h"
class Data;
///klasa reprezentuje sume
class Sum
{
  public:
  ///konstruktor jedno-argumentowy
  Sum(double val = 0);
  ///zwraca wartosc sumy
  double value()const;
  ///przeciazenie operatora () dodaje element do sumy
  void operator()(double val);
  private:
  ///wartosc sumy
  double _val;
};
///funkcja inicjalizujaca obiekt Sum
Sum sumData(const Data & buffer);