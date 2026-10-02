#include "Feu_d_artifice_dauphins.h"

void Feu_d_artifice_dauphins::do_case(std::vector<Player>& players, uint8_t current)
{
	std::cout << "Vous perdez 2 euros" << std::endl;
	players[current].addMoney(-2);
}

std::string Feu_d_artifice_dauphins::getName()
{
	std::string name_case = "Feu_d_artifice_dauphins";
	return name_case;
}

