#pragma once
#include "Board.h"
#include "Player.h"
#include <cstdint>
#include <string>
#include <iostream>
#include <vector>
#include <random>

class Cases;

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