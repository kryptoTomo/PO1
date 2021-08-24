#pragma once
#include<iostream>

///wirtualna klasa będąca podstawa, baza dla pozostałych klas
class GameObj
{
  public:
  GameObj()=default;
  GameObj(std::string iden);
  virtual ~GameObj()=default;
  std::string id()const;
  virtual void print(std::ostream & os)const=0;
  protected:
  //identyfikator obiektu
  std::string _id;
};
std::ostream & operator<<(std::ostream & os,const GameObj & buffer);



