#include"HP.h"

HP::HP(int health): _health(health){}
int HP::getH()const
{
  return _health;
}