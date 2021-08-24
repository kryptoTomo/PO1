#pragma once
#include"Character.h"
#include"HP.h"


///klasa opisujaca gracza
class Player : public virtual Character
{
  public:
  Player(HP health,std::string title,std::string iden);
  ///nadpisanie metody wirtualnej opisujacej obiekt
  void print(std::ostream & os)const override;
};