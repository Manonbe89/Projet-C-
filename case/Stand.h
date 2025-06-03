#pragma once
#include "Cases.h"

class Player;

class Stand : public Cases
{
private:
	std::string name;
	std::string color = "";
	int price;
	int house_price;
	bool with_Stand;
	bool with_2Stands;

public:
	void do_case(std::vector<Player> players, uint8_t current) override;
	void determine_price();
	void displayStand(const std::vector<Stand*> stand);
};