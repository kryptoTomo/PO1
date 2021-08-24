#pragma once
#include<string>
/* @brief - wirtualna klasa bazowa
*/
class QuantityBase
{
  public:
  /* @brief - wirtualny destruktor
  */
  virtual ~QuantityBase(){}
  /* @brief - deklaracja virtualnej wypisującej metody
  */
  virtual void Print()const=0;
  protected:
  /* @param _title - przechowujący nazwe parametru
  */
  std::string _title;
};
