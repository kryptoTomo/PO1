#pragma once
#include"Link.h"
#include<vector>
class Dir : public Link
{
  public:
  Dir(std::string name);
  ~Dir();
  void operator+=(Link * buffer);
  void print(unsigned space,std::ostream & os)const override;
  void add(Link * buffer);
  Dir * findDir(std::string name);
  Link * get(std::string name) override;
  private:
  std::vector<Link *> _sources;
};
