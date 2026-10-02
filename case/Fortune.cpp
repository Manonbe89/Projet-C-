#include "Fortune.h"

void Fortune::do_case(std::vector<Player>& players, uint8_t current)
{
	std::cout << "Vous gagnez le contenu de la case fortune soit : " << money_case  << " euros" << std::endl;
	players[current].addMoney(money_case);
}

void Fortune::add_money_case(int money)
{
	money_case += money;
}

std::string Fortune::getName()
{
	std::string name_case = "Fortune";
	return name_case;
}
