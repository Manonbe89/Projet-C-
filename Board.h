#pragma once
#include <vector>
#include "Cases.h"
#include "Player.h"

class Board
{
private:
	std::vector<int> cases;

public:
	Board();
	void play_turn();
	void move_player(Player player, int number_of_cases);
};
