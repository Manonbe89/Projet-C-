#pragma once
#include <string>
#include <vector>
#include "Stand.h"
#include <iostream>
class Player
{
private:
	std::string name;
	uint8_t position;
	int money;
	int nb_stands = 0;
	std::vector<Stand> stand;

public:
	Player(std::string name);

	std::string getName();
	void setName(std::string name_player); 
	int getPosition();
	void setPosition(int coordonnées);
	int getMoney();
	void setMoney(int sum);
	void addMoney(int sum);
	void setNb_Stands(int nb);
	void displayStand(const std::vector<Stand> stand);
};

