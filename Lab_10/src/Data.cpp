#include"Data.h"

Data::Data(std::string title,std::initializer_list<double> val): _title(title)
{
  _values.insert(_values.begin(),val);
}
void showData(const double val)
{ 
  std::cout<<"\t"<<val; 
}
void Data::print() const
{
  std::cout<<_title<<":\t";
  std::for_each(_values.begin(),_values.end(),showData)
  ;
  std::cout<<std::endl;
}
std::vector<double> Data::getVal()const
{
  return _values;
}