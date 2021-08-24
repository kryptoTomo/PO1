#include"Character.h"

Character::Character(HP health,std::string title):
_hp(health), _title(title)
{}
void Character::print(std::ostream & os)const
{
  os<<_title<<", ma: ["<<_hp.getH()<<" HP]";
}
std::string Character::hp()const
{
  return "[" + std::to_string(_hp.getH()) +" HP]";
}