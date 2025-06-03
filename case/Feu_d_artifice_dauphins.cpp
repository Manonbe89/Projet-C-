#include "Feu_d_artifice_dauphins.h"

void Feu_d_artifice_dauphins::do_case(std::vector<Player> players, uint8_t current)
{
	players[current].addMoney(-2);
}
