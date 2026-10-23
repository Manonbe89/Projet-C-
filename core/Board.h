#pragma once
#include <memory>
#include <vector>
#include "Player.h"
#include "../Cases.h"

class Cases;
class Monopoly;
class Interraction;

#ifndef BOARD_H
#define BOARD_H

class Board
{
private:
	std::string current_player = "";
	int number_current_player = 0;
	std::string current_case;

public:
	Board();
	void play_turn(Monopoly &monopoly, std::vector <Player>& players, Interraction& interraction, std::vector<struct_case>& cases, Cases &plateau);
	void move_player(std::vector<Player>& players, Monopoly& monopoly, int number_of_cases, int number_current_player, Cases &plateau);
	void SetNextPlayer(Monopoly& monopoly, std::vector<Player>& players, int number_current_player);
	std::string getNameCurrentCase(std::vector<Player> &players, std::vector<Cases> &cases, int number_current_player);
};

#endif