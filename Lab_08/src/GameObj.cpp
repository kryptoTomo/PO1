#include"GameObj.h"

GameObj::GameObj(std::string iden): _id(iden)
{}
std::ostream & operator<<(std::ostream & os,const GameObj & buffer)
{
  buffer.print(os);
  return os;
}
std::string GameObj::id()const
{
  return _id;
}

