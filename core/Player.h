#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "Monopoly.h"

#ifndef PLAYER_H
#define PLAYER_H

class Player
{
private:
	std::string name;
	int current_case;
	int money;
	int nb_stands = 0;
	int player_de = 0;

public:
	Player(std::string name, int money, int nb_stands, int player_de);
	std::string getName() const;
	int getPosition();
	void addPosition(int coordonnees, std::vector<Player>& players, Monopoly& monopoly, int current);
	int getMoney();
	void addMoney(int sum);
	void setDe(int de);
	int getDe();
};

#endif