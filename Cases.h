#pragma once
#include <iostream>
#include "Monopoly.h"
#include "Player.h"


class Cases
{
private : 
	std::vector<Cases> cases[32];
public:
	virtual void do_case(std::vector<Player> players, uint8_t current) = 0;
	void defCases(std::vector<Cases> cases);
};