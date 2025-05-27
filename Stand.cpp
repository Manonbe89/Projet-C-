#include "Stand.h"

void Stand::do_case(std::vector<Player> players, uint8_t current)
{
	if (with_2Stands == true) {
		money -= 2 * price;
	}
	else if (with_Stand == true) {
		money -= price;
	}
	else
		money -= house_price;

}

void Stand::determine_price() {
	if (color == "dark_blue") {
		price = 1;
	}
	else if (color == "white" || color == "pink") {
		price = 2;
	}
	else if (color == "orange" || color == "red") {
		price = 3;
	}
	else if (color == "yellow" || color == "green") {
		price = 4;
	}
	else
		price = 5;
}