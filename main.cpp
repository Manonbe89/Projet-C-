#include "core/Player.h"
#include "core/Monopoly.h"

int main(void) {
	Monopoly jeu;
	std::cout << "Start of the game" << std::endl;
	std::cout << "How many players are you ?" << std::endl;
	int nb_players;
	std::cin >> nb_players;

	std::cout << "What are your names ?" << std::endl;
	for (int i = 0; i < nb_players; i++) {
		std::string name;
		std::cin >> name;
			Player p(name, 31);
			jeu.add_player(p);
		
	}

	
	jeu.start();
	return 0;
}