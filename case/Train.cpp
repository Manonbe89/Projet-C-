#include "Train.h"

void Train::do_case(std::vector<Player>& players, uint8_t current)
{
	Monopoly monopoly(players);
	monopoly.dice_roll(players, current);
}

std::string Train::getName() {
	std::string name_case = "Train";
	return name_case;
}