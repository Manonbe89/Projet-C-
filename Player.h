#pragma once
#include <string>
#include <vector>
#include <iostream>

class Stand; 

class Player
{
private:
	std::string name;
	uint8_t position;
	int money;
	int nb_stands = 0;
	std::vector<Stand*> stand;

public:
	Player(std::string name, int money, int nb_stands);
	std::string getName();
	int getPosition();
	void setPosition(int coordonnées);
	int getMoney();
	void addMoney(int sum);
	void displayStand(const std::vector<Stand*> stand);
};

