#include "Depart.h"

void Depart::do_case(std::vector<Player>& players, Monopoly& monopoly, uint8_t current)
{
	std::cout << "Vous recevez 2 euros" << std::endl;
	players[current].addMoney(2);
}