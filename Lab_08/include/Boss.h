#pragma once

#include"HP.h"
#include"Character.h"
#include"Hurting.h"

///klasa opisujaca bosa 
class Boss : public virtual Character, public virtual Hurting 
{
  public:
  ///konstruktor wielo-argumentowy
  Boss(HP hp1,std::string title,HP hp2,std::string iden);
  ///nadpisanie metody wirtualnej opisujacej obiekt
  void print(std::ostream & os)const override;
};