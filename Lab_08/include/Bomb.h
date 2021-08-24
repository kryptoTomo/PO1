#pragma once
#include"Hurting.h"
#include"HP.h"
///klasa opisujaca bombe
class Bomb : public virtual Hurting
{
  public:
  ///konstruktor dwu-argumentowy
  Bomb(HP health,std::string iden);
  ///nadpisanie metody wirtualnej opisujacej obiekt
  void print(std::ostream & os)const override;
};