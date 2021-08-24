#include"Boss.h"

Boss::Boss(HP hp1,std::string title,HP hp2,std::string iden) :
GameObj(iden), Character(hp1,title), Hurting(hp2)
{}

void Boss::print(std::ostream & os)const
{
  os<<"Bad guy: ";
  Character::print(os);
  os<<std::endl;
  Hurting::print(os);
}