#include "Player.h"


Player::Player(std::string name)
	:name(name)
{
}

std::string Player::getName()
{
	return name;
}

void Player::setName(std::string name_player)
{
	name = name_player;
}

int Player::getPosition()
{
	return position;
}

int Player::getMoney()
{
	return money;
}

void Player::displayStand(const std::vector<Stand> stand)
{
	if (nb_stands == 0) {
		std::cout << "You don't have a stand yet." << std::endl;
	}
	else {
		std::cout << "You have " << nb_stands << " stands";
		for (int i = 0; i < nb_stands; i++) {
			std::cout << stand[i].name;
		}
	}
}

void Player::setMoney(int sum)
{
	money = sum;
}

void Player::addMoney(int sum) {
	money += sum;
}

void Player::setNb_Stands(int nb)
{
	nb_stands = nb;
}

void Player::setPosition(int coordonnées)
{
	position += coordonnées;
}
