#pragma once
#include"GameObj.h"
#include"HP.h"

///klasa opisujaca zadanie obrażeń
class Hurting : public virtual GameObj
{
  public:
  Hurting(HP health);
  ///nadpisanie metody wirtualnej opisujacej obiekt
  void print(std::ostream & os)const override;
  ///zwraca ilosc zycia które zadaje
  std::string hp()const;
  protected:
  ///ilosc życia które zadaje
  HP _hp;
};