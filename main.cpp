#include <vector>
#include "core/Player.h"
#include "core/Monopoly.h"
#include "Cases.h"
#include "core/Board.h"
#include "Interraction.h"

int main(void) {
	std::srand(static_cast<unsigned int>(std::time(nullptr)));

	//Initialisation 
	std::vector <Player> players;
	Monopoly monopoly(players);
	std::vector<std::unique_ptr<Cases>> cases;
	Board board(cases);
	Interraction interraction;

	//Deroulement du jeu
	monopoly.start(players, monopoly);
	std::cout << "Debut du jeu" << std::endl << std::endl;
	Cases::defCases();		
	std::cout << "Appuyez sur ESPACE pour continuer..." << std::endl;									//car methode static donc appel different

	while (monopoly.check_end(players, monopoly.getNumberCurrentPlayer()) != 0) {
		if (interraction.waitForEscape()){
			std::cout << "Vous quittez la partie" << std::endl;
			break;
		}
		else {
			board.play_turn(monopoly, players);
		}
	}
	std::cout << "Fin du jeu" << std::endl;
}