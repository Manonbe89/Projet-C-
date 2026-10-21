#pragma once
#include "../Cases.h"

class Depart : public Cases
{
public:
	void do_case(std::vector<Player>& players, Monopoly& monopoly, uint8_t current) override;
	std::string getName();
};

