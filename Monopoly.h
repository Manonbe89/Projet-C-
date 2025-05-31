#pragma once
#include "Player.h"
#include "Board.h"
#include "Départ.h"
#include "Cases.h"
#include <string>
#include <iostream>
#include <vector>
class Monopoly
{
private:
	std::vector<Player> players;
	Board board;
	unsigned short turn;
	std::vector<int> chance_deck;
public:
	void start();
	void next_player();
	bool check_end();
	int dice_roll();
};