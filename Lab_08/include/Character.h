#pragma once
#include"GameObj.h"
#include"HP.h"
///klasa opisujaca postac
class Character : public virtual GameObj
{
  public:
  Character(HP health,std::string title);
  ///nadpisanie metody wirtualnej opisujacej obiekt
  void print(std::ostream & os)const override;
  std::string hp()const;
  protected:
  ///ilosc zycia które posiada bohater
  HP _hp;
  ///nazwa bohatera
  std::string _title;
};