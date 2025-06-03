#include "Board.h"

Board::Board()
{
}

void Board::play_turn()
{
}

void Board::move_player(Player player, int number_of_cases)
{
	player.addPosition(number_of_cases);
}