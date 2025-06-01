#pragma once
#include "Cases.h"

class Player;

class Board
{
private:
	std::vector<Cases*> cases;

public:
	Board();
	void play_turn();
	void move_player(Player player, int number_of_cases);
};
