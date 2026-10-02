#include "Bus.h"

void Bus::do_case(std::vector<Player>& players, uint8_t current)
{
	players[current].addMoney(-3);
	Fortune fortune;
	std::cout << "Vous devez payer 3 euros a la case fortune" << std::endl;
	fortune.add_money_case(3);
	std::cout << "Vous etes envoye sur la case cafe" << std::endl;
	players[current].addPosition(16, players, current);
}

std::string Bus::getName()
{
	std::string name_case = "Bus";
	return name_case;
}