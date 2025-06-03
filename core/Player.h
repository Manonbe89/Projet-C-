#pragma once
#include <string>
#include <vector>
#include <iostream>

class Player
{
private:
	std::string name;
	uint8_t position;
	int money;
	int nb_stands = 0;

public:
	Player(std::string name, int money, int nb_stands);
	std::string getName();
	int getPosition();
	void addPosition(int coordonnées);
	int getMoney();
	void addMoney(int sum);
};

