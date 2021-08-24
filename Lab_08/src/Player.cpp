#include"Player.h"

Player::Player(HP health,std::string title,std::string iden):
GameObj(iden) , Character(health, title){}
void Player::print(std::ostream & os)const
{
  os<<"Player ";
  Character::print(os);
}