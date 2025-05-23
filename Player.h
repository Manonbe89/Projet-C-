#pragma once
#include <string>
#include <vector>
#include "Stand.h"
class Player
{
private:
	std::string name;
	uint8_t position;
	int money;
	std::vector<Stand> stand;

public: 
	Player(std::string name);
	void getName();
	void getPosition();
	void getMoney();

	
};

