#pragma once
#include <iostream>
#include <cstdint>
#include <ctime>
#include <vector>

#ifndef MONOPOLY_H
#define MONOPOLY_H

class Board;
class Player;

class Monopoly
{
private:
	int current = 0;
	std::string winner = "";
	std::string winner_de = "";
	std::string FirstPlayerToPlay;
	int numberFirstPlayer = 0;
	std::vector<Player> players;

public:
	Monopoly();
	void start(std::vector<Player>& players);
	bool check_end(std::vector<Player>& players, int current);
	int dice_roll(const std::vector<Player> &players, int current);	//evite de copier tt le vecteur a chaque appel
	void setNameCurrentPlayer(std::string winner_de);
	std::string getNameCurrentPlayer();
	void setNumberCurrentPlayer(int number);
	int getNumberCurrentPlayer();
	void displayInfos(std::vector<Player> players, int current);
};

#endif