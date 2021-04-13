#include"ZlozenieFunkcji.h"
void ZlozenieFunkcji::insert(std::function<double(double)> buffer)
{
  f.push_back(buffer);
}
double ZlozenieFunkcji::wynik(double x)
{
  mem_x=x;
  for(unsigned i = 0;i<f.size();i++)
    x=f[i](x);
  return x;
}
double ZlozenieFunkcji::operator[](const unsigned num)
{
  if(f.size()<=num)
    return 0;
  return mem_x=f[num](mem_x);
}