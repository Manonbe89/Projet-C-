#pragma once
#include "Cases.h"

class Stand : public Case
{
private:
	std::string name;
	std::string color = '\0';
	unsigned int price;
	unsigned int house_price;
	bool with_Stand;
	bool with_2Stands;

public:
	void do_case(std::vector<Player> players, uint8_t current) override;
	void determine_price();
};

