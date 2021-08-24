#pragma once
#include<iostream>

class Link
{
  public:
  Link(std::string name);
  virtual void print(unsigned space,std::ostream & os)const = 0;
  virtual Link * get(std::string name)=0;
  virtual ~Link(){}
  virtual std::string getName()const;
  protected:
  std::string _name;
};
std::ostream & operator<<(std::ostream & os,const Link & buffer);