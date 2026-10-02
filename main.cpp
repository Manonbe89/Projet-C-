#include <vector>
#include "Player.h"
#include "Monopoly.h"
#include "Cases.h"
#include "Board.h"

int main(void) {
	std::srand(static_cast<unsigned int>(std::time(nullptr)));

	//Initialisation 
	std::vector <Player> players;
	Monopoly monopoly(players);
	std::vector<std::unique_ptr<Cases>> cases;
	Board board(cases);

	//Déroulement du jeu
	monopoly.start(players, monopoly);
	std::cout << "Debut du jeu" << std::endl << std::endl;
	Cases::defCases(cases);											//car méthode static donc appel différent
	while (monopoly.check_end(players, monopoly.getNumberCurrentPlayer()) != 0) {
		board.play_turn(monopoly, players);
	}
	std::cout << "Fin du jeu" << std::endl;
}