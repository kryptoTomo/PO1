#pragma once
#include"QuantityType.h"

/* @brief - szablon klasy reprezentujacej parametr z jednostką , dziedziczy po QuantityType
*/
template<typename Type>
class QuantityWithUnits : public QuantityType<Type>
{
  public:
  /* @brief - konstruktor 3-argumentowy
  * @param title - tytuł parametru
  * @param val - wartość przechowywana
  * @param unit - jednostka wartości
  */
  QuantityWithUnits(const std::string title,Type val,const std::string unit);
  /* @brief - metoda wypisująca zawartość klasy
  */
  void Print()const;
  private:
  /* @param _unit - przechowuje nazwe jednostki
  */
  std::string _unit;
};
///////////////////////////////
template<typename Type>
QuantityWithUnits<Type>::QuantityWithUnits(const std::string title,Type val,const std::string unit):
QuantityType<Type>(title,val), _unit(unit)
{}
template<typename Type>
void QuantityWithUnits<Type>::Print()const
{
  std::cout<<QuantityType<Type>::_title<<": "<<QuantityType<Type>::_val<<" ["<<_unit<<"]"<<std::endl;
}
