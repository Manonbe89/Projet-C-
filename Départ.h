#pragma once
#include "Cases.h"
class Départ : public Case
{
public:
	void do_case(std::vector<Player> players, uint8_t current) override;
};

