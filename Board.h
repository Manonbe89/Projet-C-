#pragma 
#include "Cases.h"
class Board
{
private : 
	std::vector<Cases> cases;

public : 
	void play_turn();
	void move_player(Player player, int number_of_cases);
};

