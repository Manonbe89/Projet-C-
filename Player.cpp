#include "Player.h"


Player::Player(std::string name, int sum, int nb_stands)
	:name(name), money(money), nb_stands(nb_stands)
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

void Player::displayStand(const std::vector<Stand> stand)
{
	if (nb_stands == 0) {
		std::cout << "You don't have a stand yet." << std::endl;
	}
	else {
		std::cout << "You have " << nb_stands << " stands";
		for (int i = 0; i < nb_stands; i++) {
			//std::cout << stand[i].name;
		}
	}
}

void Player::addMoney(int sum) {
	money += sum;
}

void Player::setPosition(int coordonnées)
{
	position += coordonnées;
}
