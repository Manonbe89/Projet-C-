#pragma once
#include <iostream>
#include <cstdint>
#include <ctime>
#include "Player.h"

#ifndef MONOPOLY_H
#define MONOPOLY_H

class Board;

class Monopoly
{
private:
	int current = 0;
	std::vector<int> chance_deck;
	std::string winner = "";
	std::string winner_de = "";
	std::string FirstPlayerToPlay;
	int numberFirstPlayer = 0;

public:
	Monopoly(std::vector<Player> players);
	void start(std::vector<Player>& players, Monopoly& monopoly);
	bool check_end(std::vector<Player>& players, int current);
	int dice_roll(const std::vector<Player> &players, int current);	//evite de copier tt le vecteur a chaque appel
	void setNameCurrentPlayer(std::string winner_de);
	std::string getNameCurrentPlayer();
	void setNumberCurrentPlayer(int number);
	int getNumberCurrentPlayer();
	void displayInfos(std::vector<Player> players, int current);
};

#endif