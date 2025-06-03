#pragma once
#include "../core/Monopoly.h"
#include "../core/Player.h"


class Cases
{
public:
	virtual void do_case(std::vector<Player> players, uint8_t current) = 0;
};