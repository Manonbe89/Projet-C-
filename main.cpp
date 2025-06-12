#include "Player.h"
#include "Monopoly.h"

int main(void) {
	std::cout << "Start of the game" << std::endl;
	std::cout << "How many players are you ?" << std::endl;
	int nb_players;
	std::cin >> nb_players;

	std::vector<Player> player;
	std::cout << "What are your names ?" << std::endl;
	for (int i = 0; i < nb_players; i++) {
		std::string name;
		std::cin >> name;
		if (nb_players == 2) {
			player.emplace_back(name, 31, 15);
		}
		else {
			player.emplace_back(name, 31, 10);
		}
		
	}
}