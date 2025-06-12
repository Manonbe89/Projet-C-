#pragma once
#include <vector>
#include "Cases.h"
#include "Player.h"

class Board
{
public:
	Board();
	void play_turn();
	void move_player(Player player, int number_of_cases);
};
