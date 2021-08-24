#pragma once
#include<iostream>
#include<vector>
#include<algorithm>
#include"Sum.h"
class Sum;
///klasa przechowujaca nazwe tygodnia oraz wartosci listy inicjalizacyjnej
class Data
{
  public:
  ///konstrukotr 2 argumentowy z nazwa tygodnia i lista inicjajlizacyjna
  Data(std::string title,std::initializer_list<double> val);
  ///metoda wypisujaca
  void print() const;
  std::vector<double> getVal()const;
  ///zaprzyjaźnienie funkcji sumData
  friend Sum sumData(const Data & buffer);
  private:
  ///nazwa tygodnia
  std::string _title;
  ///wektor przechowujacy wartosci
  std::vector<double> _values;
};