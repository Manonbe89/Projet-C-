#include <vector>
#include "core/Player.h"
#include "core/Monopoly.h"
#include "Cases.h"
#include "core/Board.h"

int main(void) {
	std::srand(static_cast<unsigned int>(std::time(nullptr)));

	//Initialisation 
	std::vector <Player> players;
	Monopoly monopoly(players);
	std::vector<std::unique_ptr<Cases>> cases;
	Board board(cases);

	//Deroulement du jeu
	monopoly.start(players, monopoly);
	std::cout << "Debut du jeu" << std::endl << std::endl;
	Cases::defCases(cases);											//car methode static donc appel different
	std::cout << "ici1";
	while (monopoly.check_end(players, monopoly.getNumberCurrentPlayer()) != 0) {
		std::cout << "ici3";
		board.play_turn(monopoly, players);
	}
	std::cout << "Fin du jeu" << std::endl;
}