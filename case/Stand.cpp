#include "Stand.h"



Stand::Stand(const std::string& name, const std::string& color, int price, int house_price)
	:name(name), color(color), price(price), house_price(house_price)
{
}

void Stand::do_case(std::vector<Player> players, uint8_t current)
{
	if (with_2Stands == true) {
		players[current].addMoney(-2);		//Appelle le jouer actuel dans le tableau de joueurs 
	}
	else if (with_Stand == true) {
		players[current].addMoney(-price);
	}
	else
		players[current].addMoney(-house_price);
}

void Stand::displayStand(const std::vector<Stand*> stand)
{
	size_t nb_stands = stand.size();
	if (nb_stands == 0) {
		std::cout << "You don't have a stand yet." << std::endl;
	}
	else {
		std::cout << "You have " << nb_stands << " stands";
		for (int i = 0; i < nb_stands; i++) {
			//std::cout << stand[i].name;
		}
	}
}

bool Stand::getWith_Stand()
{
	if (with_Stand == true) {
		return true;
	}
	else
		return false;
	
}
