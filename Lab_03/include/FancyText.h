#pragma once
#include<iostream>
class FancyText
{
public:
  FancyText();
  FancyText(const char * buffer);
  FancyText(FancyText && buffer);
  ~FancyText();
  friend std::ostream & operator<<(std::ostream & os,FancyText & buffer);
  void operator+=(const char *buffer);
  void operator+=(FancyText && buffer);
  void operator=(FancyText && buffer);
  FancyText fragment(const unsigned num)const;
  char *str()const;
  unsigned size()const;
  unsigned fragments()const;
private:
  static unsigned _size;
  static unsigned _fragments;
  char * _str=nullptr;
  FancyText *_next=nullptr;
};
std::ostream & operator<<(std::ostream & os,FancyText & buffer);