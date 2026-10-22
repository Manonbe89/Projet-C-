#include <vector>
#include "core/Player.h"
#include "core/Monopoly.h"
#include "Cases.h"
#include "core/Board.h"
#include "Interraction.h"

int main(void) {

	//Initialisation
	std::vector <Player> players;
	Monopoly monopoly;
	Cases plateau;
	std::vector<struct_case> cases;
	Interraction interraction;
	Board board;

	//Deroulement du jeu
	monopoly.start(players);
	std::cout << "Debut du jeu" << std::endl << std::endl;
	plateau.defCases();	
	cases = plateau.getCases();	
	std::cout << "Appuyez sur ESPACE pour continuer..." << std::endl;									

	while (monopoly.check_end(players, monopoly.getNumberCurrentPlayer()) != 0) {
		if (interraction.waitForEscape()){
			std::cout << "Vous quittez la partie" << std::endl;
			break;
		}
		else {
			std::cout << cases.size() << std::endl;
			board.play_turn(monopoly, players, interraction, cases, plateau);
		}
	}
	std::cout << "Fin du jeu" << std::endl;
}