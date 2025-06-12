#include "Fortune.h"

void Fortune::do_case(std::vector<Player> players, uint8_t current)
{
	players[current].addMoney(money_case);
}

void Fortune::add_money_case(int money)
{
	money_case += money;
}
