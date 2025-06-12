#pragma once
#include "Cases.h"
class Fortune : public Cases
{
private:
	int money_case = 0;
public:
	void do_case(std::vector<Player> players, uint8_t current) override;
	void add_money_case(int money);
};

