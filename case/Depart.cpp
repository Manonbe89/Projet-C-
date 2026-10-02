#include "Depart.h"

void Depart::do_case(std::vector<Player>& players, uint8_t current)
{
	std::cout << "Vous recevez 2 euros" << std::endl;
	players[current].addMoney(2);
}

std::string Depart::getName()
{
	std::string name_case = "Depart";
	return name_case;
}
