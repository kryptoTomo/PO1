#pragma once
#include<cstdlib>
///szablon klasy reprezentujaca tablice typu T
template<typename T>
class RangeArray
{
  public:
  ///konstruktor inicjalizajacy rozmiar na podstawie granic z klasy PairOfNumbers<int,double>
  RangeArray(const PairOfNumbers<int,double> pair);
  ///konstruktor kopiujący
  RangeArray(const RangeArray & buffer);
  ///destruktor
  ~RangeArray();
  ///metoda zwracająca rozmiar tablicy
  const int Size()const;
  ///przeciązenie operatora [], nie const
  T & operator[](const int num);
  ///przeciązenie operatora [], const
  const T & operator[](const int num)const;
  ///metoda zwracjące element o podanym indeksie
  const T At(const int num)const;
  private:
  ///początek indeskowania tablicy
  int _min;
  ///koniec indeksowania tablicy
  int _max;
  ///rozmiar tablicy
  int _size;
  ///wskaźnik na tablice typu T
  T * _array=nullptr;
};
/////////////////////////////////////////////////
template<typename T>
RangeArray<T>::RangeArray(const PairOfNumbers<int,double> pair)
{
  _min=static_cast<T>(pair.first);
  _max=static_cast<T>(pair.second);
  _size=abs(_min)+abs(_max);
  _array = new T[_size];
}
template<typename T>
RangeArray<T>::RangeArray(const RangeArray & buffer)
{
  _min=buffer._min;
  _max=buffer._max;
  _size=buffer._size;
  _array = new T[_size];
  for(int i = 0;i<_size;i++)
    _array[i]=buffer._array[i]; 
}
template<typename T>
RangeArray<T>::~RangeArray()
{
  delete []_array;
}
template<typename T>
const int RangeArray<T>::Size()const
{
  return _size;
}
template<typename T>
T & RangeArray<T>::operator[](const int num)
{
  return _array[num-_min];
}
template<typename T>
const T & RangeArray<T>::operator[](const int num)const
{
  return _array[num-_min];
}
template<typename T>
const T RangeArray<T>::At(const int num)const
{
  return _array[num-_min];
}