#include"FancyText.h"
#include<cstring>
unsigned FancyText::_size=0;
unsigned FancyText::_fragments=0;
FancyText::FancyText(){}
FancyText::FancyText(const char * buffer)
{
  _size+=strlen(buffer);
  _fragments++;
  _str = new char[strlen(buffer)+1];
  strcpy(_str,buffer);
}
FancyText::FancyText(FancyText && buffer)
{
  _str = buffer._str;
  _next = buffer._next;
  _fragments = buffer._fragments;
  _size = buffer._size;
  buffer._str =nullptr;
  buffer._next=nullptr;
}
FancyText::~FancyText()
{
  delete []_str;
  delete _next;
}
void FancyText::operator+=(const char *buffer)
{
  FancyText * temp = new FancyText(buffer);
  FancyText *help=this;
  while(help->_next)
    help=help->_next;
  help->_next = temp;
}
void FancyText::operator+=(FancyText && buffer)
{
  FancyText * temp = new FancyText(std::move(buffer));
  FancyText *help=this;
  while(help->_next)
    help=help->_next;
  help->_next = temp;
}
unsigned FancyText::size()const
{
  return _size;
}
unsigned FancyText::fragments()const
{
  return _fragments;
}
std::ostream & operator<<(std::ostream & os,FancyText & buffer)
{
  if(buffer._str)
  {
    os<<buffer._str;
    FancyText * help= &buffer;
    while(help->_next)
    {
      help=help->_next;
      os<<help->_str;
    }
  }
  return os;
}
void FancyText::operator=(FancyText && buffer)
{
  _str = buffer._str;
  _next = buffer._next;
  _fragments = buffer._fragments;
  _size = buffer._size;
  buffer._str =nullptr;
  buffer._next=nullptr;
}
FancyText FancyText::fragment(const unsigned num)const
{
  if(_fragments<num)
    return FancyText(this->_str);
  FancyText *help = _next;
  for(unsigned i =1;i<num;i++)
    help = help->_next;
  return FancyText(help->_str);
}
char * FancyText::str()const
{
  return _str;
}