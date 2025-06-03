#include "Player.h"


Player::Player(std::string name, int money, int nb_stands)
	:name(name), money(money), nb_stands(nb_stands), position(0)
{
}

std::string Player::getName()
{
	return name;
}

int Player::getPosition()
{
	return position;
}

int Player::getMoney()
{
	return money;
}

void Player::addMoney(int sum) {
	money += sum;
}

void Player::addPosition(int coordonnées)
{
	position += coordonnées;
}
