#pragma once
#include"Link.h"

class File : public Link
{
  public:
  File(std::string name);
  ~File()=default;
  void print(unsigned space,std::ostream & os)const override;
  Link * get(std::string name)override;
};