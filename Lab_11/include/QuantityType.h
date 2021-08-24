#pragma once
#include"QuantityBase.h"
#include<iostream>
/* @brief - szablon klasy przechowujący parametr, dziedziczy z QuantityBase
*/
template<typename Type>
class QuantityType : public QuantityBase
{
  public:
  /* @brief - konstruktor 2 argumentowy
  * @param  title - tytuł parametru
  * @param val - wartość parametru
  */
  QuantityType<Type>(const std::string title,Type val);
  /* @brief - metoda wypisujaca zawartosc klasy
  */
  void Print()const override;
  /* @brief - metoda zmieniająca wartość parametru
  */
  void SetValue(Type val);
  protected:
  /* @param _val - parametr przechowywany przez klase
  */
  Type _val;
};
//////////////////////////////////////////
template<typename Type>
QuantityType<Type>::QuantityType(const std::string title,Type val):_val(val)
{
  _title = title;
}
template<typename Type>
void QuantityType<Type>::Print()const
{
  std::cout<<_title<<": "<<_val<<std::endl;
}
template<typename Type>
void QuantityType<Type>::SetValue(Type val)
{
  _val=val;
}