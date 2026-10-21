#include "Train.h"

void Train::do_case(std::vector<Player>& players, Monopoly& monopoly, uint8_t current)
{
	std::cout << "avant_train" << std::endl;
	monopoly.dice_roll(players, current);
	std::cout << "apres_train" << std::endl;
}