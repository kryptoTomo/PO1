#include"Link.h"

Link::Link(std::string name):_name(name){}
std::ostream & operator<<(std::ostream & os,const Link & buffer)
{
  buffer.print(0,os);
  return os;
}
std::string Link::getName()const
{
  return _name;
}
