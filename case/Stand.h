#pragma once
#include "../Cases.h"

class Stand : public Cases
{
private:
	std::string name;
	std::string color = "";
	int price;					//prix quand on passe sur la case
	int state;
	bool with_Stand = 0;
	bool with_2Stands = 0;

public:
	Stand(const std::string& name, const std::string& color, int price, int state);
	void do_case(std::vector<Player>& players, Monopoly& monopoly, uint8_t current) override;
};