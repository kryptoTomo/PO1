#include"Dir.h"

Dir::Dir(std::string name): Link(name){}
Dir::~Dir()
{
  std::cout<<"Deleting Dir: "<<_name<<std::endl;
  for(unsigned i=0;i < _sources.size();i++)
  {
    std::cout<<"About to delete "<<_sources[i]->getName()<<std::endl;
    delete _sources[i];
  }
}
void Dir::operator+=(Link * buffer)
{
  _sources.push_back(buffer);
}
void Dir::print(unsigned space,std::ostream & os)const
{
  for(unsigned i =0;i<space;i++)
    os<<"  ";

  os<<_name<<" (DIR)"<<std::endl;

  for(unsigned i =0;i<_sources.size();i++)
    _sources[i]->print(space+1,os);
}
void Dir::add(Link * buffer)
{
  (*this)+=buffer;
}
Dir * Dir::findDir(std::string name)
{
  return dynamic_cast<Dir *>(get(name));
}
Link * Dir::get(std::string name)
{
  if(_name == name)
    return this;
  for(unsigned i=0;i < _sources.size();i++)
  {
    Link * tmp = _sources[i]->get(name);
    if(tmp)
      return tmp;
  }
  return nullptr;
}
