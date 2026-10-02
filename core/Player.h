#pragma once
#include <string>
#include <vector>
#include <iostream>

#ifndef PLAYER_H
#define PLAYER_H

class Cases;
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
	void addPosition(int coordonnees, std::vector<Player>& players, int current);
	int getMoney();
	void addMoney(int sum);
	void setDe(int de);
	int getDe();
};

#endif