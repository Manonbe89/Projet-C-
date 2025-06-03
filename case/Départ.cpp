#include "Départ.h"

void Départ::do_case(std::vector<Player> players, uint8_t current)
{
	players[current].addMoney(2);
}
