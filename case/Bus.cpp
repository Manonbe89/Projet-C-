#include "Bus.h"

void Bus::do_case(std::vector<Player> players, uint8_t current)
{
	players[current].addMoney(-3);
	Fortune fortune;
	fortune.add_money_case(3);
	players[current].addPosition(16);
}
