#pragma once
#include <memory>
#include <vector>
#include "Player.h"

class Cases;
class Monopoly;

#ifndef BOARD_H
#define BOARD_H

class Board
{
private:
	std::string current_player = "";
	std::vector<Player> players;
	int number_current_player = 0;
	std::vector<std::unique_ptr<Cases>>& cases;
	std::string current_case;

public:
	Board(std::vector<std::unique_ptr<Cases>>& cases);	//jsp trop pk mais sinon ca marche pas
	void play_turn(Monopoly& monopoly, std::vector <Player>& players);
	void move_player(std::vector<Player>& players, int number_of_cases, int number_current_player);
	void SetNextPlayer(Monopoly& monopoly, std::vector<Player>& players, int number_current_player);
	std::string getNameCurrentCase(std::vector<Player> &players, std::vector<std::unique_ptr<Cases>>& cases, int number_current_player);
};

#endif