#include "Player.h"
#include "case/Depart.h"


Player::Player(std::string name, int money, int nb_stands, int de)
	:name(name), money(money), nb_stands(nb_stands), current_case(0), player_de(0)
{
}

std::string Player::getName() const
{
	return name;
}

int Player::getPosition()
{
	return current_case;
}

int Player::getMoney()
{
	return money;
}

void Player::addMoney(int sum) {
	money += sum;
}

void Player::setDe(int de)
{
	player_de = de;
}

int Player::getDe()
{
	return player_de;
}

void Player::addPosition(int coordonn�es, std::vector<Player>& players, int current)
{
	if (players[current].getPosition() + coordonn�es > 32) {
		current_case = players[current].getPosition() + coordonn�es - 32;
	}
	else
		current_case += coordonn�es;

	if (players[current].getPosition() <= 0 && (players[current].getPosition() + coordonn�es) > 0) {
		Depart depart;
		depart.do_case(players, current);
	}
}
