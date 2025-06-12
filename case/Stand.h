#pragma once
#include "Cases.h"

class Player;

class Stand : public Cases
{
private:
	std::string name;
	std::string color = "";
	int price;					//prix quand on passe sur la case
	int house_price;			//prix d'achat de la maison
	bool with_Stand = 0;
	bool with_2Stands = 0;

public:
	Stand(const std::string& name, const std::string& color, int price, int house_price);
	void do_case(std::vector<Player> players, uint8_t current) override;
	void displayStand(const std::vector<Stand*> stand);
	bool getWith_Stand();
};