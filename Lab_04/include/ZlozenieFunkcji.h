#pragma once
#include<vector>
#include<functional>
class ZlozenieFunkcji
{
public:
  void insert(std::function<double(double)> buffer);
  double wynik(double x);
  double operator[](const unsigned num);
private:
  std::vector<std::function<double(double)>> f;
  double mem_x{0};
};