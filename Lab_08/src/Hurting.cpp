#include"Hurting.h"

void Hurting::print(std::ostream & os)const
{
  os<<"Jego uderzenie odbiera: ["<<_hp.getH()<<" HP]";
}
std::string Hurting::hp()const
{
  return "[" + std::to_string(_hp.getH()) +" HP]";
}