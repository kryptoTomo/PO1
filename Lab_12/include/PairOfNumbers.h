#pragma once
#include<iostream>

///szablon klasy, która przechowuje dwa elementy typu T1 i T2
template<typename T1,typename T2>
class PairOfNumbers
{
  public:
  ///konstruktor dwu_argumentowy inicjalizujacy wartosci
  PairOfNumbers(T1 & firstNum,T2 & secondNum);
  ///domyślny destruktor
  ~PairOfNumbers()=default;
  ///metoda zwracający obiekt który ma zamienione wartosci
  PairOfNumbers<T2,T1> Swapped()const;
  ///metoda wypisujaca zawartosc klasy
  void Print()const;
  ///dodaje wartość val do jednego i drugiego argumentu 
  void Add(int val);
  ///mnoży jeden i drugi argument klasy przez val
  void Scale(int val);
  ///metoda wypisujaca że jest nie const
  void Info();
  ///metoda wypisujaca ze jest const
  void Info()const;
  ///pierwszy argument klasy
  T1 & first;
  ///drugi argument klasy
  T2 & second;
};
///////////////////////////
template<typename T1,typename T2>
PairOfNumbers<T1,T2>::PairOfNumbers(T1 & firstNum,T2 & secondNum):
first(firstNum), second(secondNum)
{
}
template<typename T1,typename T2>
PairOfNumbers<T2,T1> PairOfNumbers<T1,T2>::Swapped()const
{
  return PairOfNumbers<T2,T1>(second,first);
}
template<typename T1,typename T2>  
void PairOfNumbers<T1,T2>::Print()const
{
  std::cout<<"Print method: "<<first<<" "<<second<<std::endl;
}
template<typename T1,typename T2>
void PairOfNumbers<T1,T2>::Add(int val)
{
  first+=static_cast<T1>(val);
  second+=static_cast<T1>(val);
}
template<typename T1,typename T2>  
void PairOfNumbers<T1,T2>::Scale(int val)
{
  first*=static_cast<T1>(val);
  second*=static_cast<T1>(val);
}
template<typename T1,typename T2>  
void PairOfNumbers<T1,T2>::Info()
{
  std::cout<<"This is NON-const pair of numbers"<<std::endl;
}
template<typename T1,typename T2>  
void PairOfNumbers<T1,T2>::Info()const
{
  std::cout<<"This is const pair of numbers"<<std::endl;
}  
