#pragma once
#include <vector>
#include "core/Player.h"

class Chance_Cards
{
private:
	unsigned int current;
public:
	void do_action(std::vector<Player> players, unsigned int current);
};

