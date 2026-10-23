#include "Train.h"

void Train::do_case(std::vector<Player>& players, Monopoly& monopoly, uint8_t current)
{
	Board board;
	Interraction interraction;
	Cases plateau;
	std::cout << "avant_train" << std::endl;
	board.play_turn(monopoly, players, interraction, Cases::getCases(), plateau);
	std::cout << "apres_train" << std::endl;
}