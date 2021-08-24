#pragma once


///odzwierciedla ilosc zycia które mozna zadac/odebrac
class HP
{
  public:
  ///konstrukot jedno-argumentowy
  HP(int health);
  int getH()const;
  private:
  ///ilosc zycia 
  int _health;
};