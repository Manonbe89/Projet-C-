#include "Stand.h"


Stand::Stand(const std::string& name, const std::string& color, int price, bool state)
	:name(name), color(color), price(price), state(state)
{
}

void Stand::do_case(std::vector<Player>& players, Monopoly& monopoly, uint8_t current)
{
	if (state == 2) {
		std::cout << "Vous avez atterri sur une case contenant deja 2 stands, vous payez le propriétaire";
		players[current].addMoney(-price);
	}
	else if (state == 1) {
		std::cout << "Vous avez atterri sur une case contenant deja 1 stand, vous achetez le 2e stand" << std::endl;
		std::cout << "Vous payez " << price << " euros" << std::endl;
		players[current].addMoney(-price);
		Cases::setStateCase(players, monopoly);
	}
	else
		std::cout << "Vous avez atterri sur une case sans stand, vous achetez un stand" << std::endl;
		std::cout << "Vous payez " << price << " euros" << std::endl;
		players[current].addMoney(-price);
		Cases::setStateCase(players, monopoly);
}
