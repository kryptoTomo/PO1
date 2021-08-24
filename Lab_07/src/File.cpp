#include"File.h"

File::File(std::string name) : Link(name){}
void File::print(unsigned space,std::ostream & os)const
{
  for(unsigned i =0;i<space;i++)
    os<<"  ";

  os<<_name<<" (FILE)"<<std::endl;
}
Link * File::get(std::string name)
{
  if(_name==name)
    return this;
  return nullptr;
}