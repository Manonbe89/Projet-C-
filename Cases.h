#pragma once
#include "Monopoly.h"

class Player;

class Cases
{
public:
	virtual void do_case(std::vector<Player> players, uint8_t current);
};