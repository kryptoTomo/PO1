#include"ArrayOfQuantities.h"

ArrayOfQuantities::ArrayOfQuantities(const unsigned maxSize):
_maxSize(maxSize)
{}
void ArrayOfQuantities::Print()const
{
  for(unsigned i = 0;i<_array.size();i++)
    _array[i]->Print();
}
ArrayOfQuantities::~ArrayOfQuantities()
{
  for(unsigned i = 0;i<_array.size();i++)
    delete _array[i];
  _array.clear();
}