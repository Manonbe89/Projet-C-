#include "Board.h"

void Board::move_player(Player player, int number_of_cases)
{
	player.changePosition(number_of_cases);
}