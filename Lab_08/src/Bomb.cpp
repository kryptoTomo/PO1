#include"Bomb.h"

Bomb::Bomb(HP health,std::string iden):
GameObj(iden) , Hurting(health)
{}
Hurting::Hurting(HP health):
_hp(health)
{}
void Bomb::print(std::ostream & os)const
{
  Hurting::print(os);
}