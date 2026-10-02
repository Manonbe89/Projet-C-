#include "Stand.h"


Stand::Stand(const std::string& name, const std::string& color, int price, int house_price)
	:name(name), color(color), price(price), house_price(house_price)
{
}

void Stand::do_case(std::vector<Player>& players, uint8_t current)
{
	if (with_2Stands == true) {
		std::cout << "Vous avez atterri sur une case contenant deja 2 stands" << std::endl;
		std::cout << "Vous payez 2 euros" << std::endl;
		players[current].addMoney(-2);		//Appelle le jouer actuel dans le tableau de joueurs 
	}
	else if (with_Stand == true) {
		std::cout << "Vous avez atterri sur une case contenant deja 1 stand, vous achetez le 2e stand" << std::endl;
		std::cout << "Vous payez " << price << " euros" << std::endl;
		players[current].addMoney(-price);
	}
	else
		std::cout << "Vous avez atterri sur une case sans stand, vous achetez un stand" << std::endl;
		std::cout << "Vous payez " << house_price << " euros" << std::endl;
		players[current].addMoney(-house_price);
}

std::string Stand::getName()
{
	std::string name_case = "Stand";
	return name_case;
}
