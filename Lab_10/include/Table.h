#pragma once
#include"Data.h"
#include<functional>
///klasa przechowujaca Data
class Table
{
  public:
  ///przeciazenie operatora +=
  void operator+=(const Data t);
  ///indeks najmniejszego wiersza
  unsigned minRow{sizeof(unsigned)*4};
  ///metoda sortujaca Table
  Table & sort(const unsigned num);
  ///metoda wypisujaca
  void print()const;
  ///metoda sortujaca według schematu
  Table & sortBy(std::function<bool(const Data& a, const Data& b)> check);
  private:
  ///tabela obiektówa Data
  std::vector<Data> _table;
};