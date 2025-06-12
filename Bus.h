#pragma once
#include "Cases.h"
class Bus : public Cases
{
	void do_case(std::vector<Player> players, uint8_t current) override;
};

