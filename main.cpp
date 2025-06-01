#include "Player.h"

int main(void) {
	std::cout << "Start of the game" << std::endl; 
	std::cout << "How many players are you ?" << std::endl;
	int nb_players;
	std::cin >> nb_players;

	std::cout << "What are your names ?";
	for (int i = 0; i < nb_players; i++) {
		std::string name;
		std::cin >> name;
		Player player[i];
		player[i].setName(name);
	}
}