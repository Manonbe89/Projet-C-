#pragma once
#include "Cases.h"
class Cafe : public Cases
{
public:
	void do_case(std::vector<Player> players, uint8_t current) override;
};

