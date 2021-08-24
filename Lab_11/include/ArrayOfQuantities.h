#pragma once
#include<vector>
#include<string>
#include"QuantityType.h"
/* @brief - klasa będąca kontenerem dla Quantity Type<Type>
*/
class ArrayOfQuantities
{
  public:
  /* @brief - konstruktor jednoargumentowy
  * @param maxSize - maksymalna ilość przechowywanych elementów
  */
  ArrayOfQuantities(const unsigned maxSize);
  /* @brief - Destruktor klasy
  */
  ~ArrayOfQuantities();
  /* @brief - szablon metody tworzącej i dodającej element do kontenera
  * @param val - wartosc dodawana
  */
  template<typename Type>
  QuantityType<Type>* CreateAndAdd(const std::string title,Type val);
  /* @brief - metoda wypisujaca kontener
  */
  void Print()const;
  private:
  /* @param _maxSize - maksymalny rozmiar kontenera
  */
  unsigned _maxSize;
  /* @param _array - wektor przechowujacy elementy 
  */
  std::vector<QuantityBase*> _array;

};
/////////////////////////////
template<typename Type>
QuantityType<Type>* ArrayOfQuantities::CreateAndAdd(const std::string title,Type val)
{
  if(_maxSize<_array.size())
    return nullptr;
  QuantityType<Type> * tmp = new QuantityType<Type>(title,val);
  _array.push_back(tmp);
  return tmp;
}