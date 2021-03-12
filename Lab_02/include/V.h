#pragma once

#include<iostream>
/*
* @brief - klasa opakowujaca wektor
*/
class V
{
  public:
/*
* @brief - konstruktor z jednym parametrem
* @param val -wymiar wektora
*/
  explicit V(const unsigned val);
/*
* @brief - konstruktor kopiujący
*/
  V(const V & vect);
/*
* @brief - konstruktor przenoszący
*/
  V(V &&vect);
/*
* @brief - destruktor
*/
  ~V();
  operator double() const;
  int & at(unsigned num)const;
  void print(const std::string buffer)const;
  static double dot(const V& vect_1,const V& vect_2); 
  static V sum(const V & vect1,const V &vect2);
  static V sum(const V & vect1,const int val);
/*
* @brief - metoda wyliczająca norme
*/
 double norm()const;
  private:
/*
* @param _vect - tablica przechowujaca wartosci wektora
*/
  int * _vect=nullptr;
  /*
* @param _vect - wymiar wektora
*/
  unsigned  _dimension = 0;
};
