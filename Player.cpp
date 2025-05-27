#include <iostream>
#include "Player.h"


Player::Player(std::string name)
	:name(name)
{
}

void Player::getName()
{
	std::cout << "name :" << name;
}

void Player::getPosition()
{
	std::cout << "position :" << position;
}

void Player::getMoney()
{
	std::cout << "money :" << money;
}
