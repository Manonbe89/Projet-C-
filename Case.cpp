#include <iostream>
#include "Case.hpp"
#include "GameState.hpp"
#include "Dice.hpp"


void CaseCoffee::execute(GameState& gs) {
	auto* const player = gs.get_player();
	std::cout << player->get_name() << " is resting himself while drinking some coffee.\n";
}

void CaseLuck::execute(GameState& gs) {
	auto* const player = gs.get_player();

	auto card = std::move(deck.front());
	deck.pop_front();

	std::cout << player->get_name() << " drew a card: " << card->get_name() << ".\n";
	
	card->execute(gs);
	deck.push_back(std::move(card));

}

void CaseProperty::execute(GameState& gs) {
	auto* const player = gs.get_player();
	auto name = player->get_name();


	if (owner == player) {
		std::cout << name << " already owns this property: " << get_name() << ".\n";
		return;
	}

	if (is_owned()) {
		std::cout << "This property is owned by " << owner->get_name() << ".\n";

		if (owner->has_group(color)) {
			std::cout << "You own " << price*2 << " to " << owner->get_name() << ".\n";
			player->increment_money(-price * 2);
			owner->increment_money(price * 2);
		}
		else {
			std::cout << "You own " << price << " to " << owner->get_name() << ".\n";
			player->increment_money(-price);
			owner->increment_money(price);
		}

		return;
	} 

	std::cout << name << " is trying to buy the property: " << get_name() << ".\n";
	if (player->get_money() < price) {
		std::cout << "You don't have enough money to buy this property.\n";
		return;
	}

	auto& fstands = player->get_free_stands();

	for (auto it = fstands.begin(); it != fstands.end();)
	{
		if (*it == color) {
			std::cout << "Do you want to buy this property for free using a free stand? (y/n): ";
			std::string choice;
			std::getline(std::cin, choice);
			if (choice == "y" || choice == "Y") {
				owner = player;
				player->add_property(this);
				it = fstands.erase(it);
				std::cout << name << " bought the property: " << get_name() << ".\n";
			}

			break;
		}
		else {
			++it;
		}
	}



	if (!player->get_nb_stands()) {
		std::cout << "You don't have any stands left to buy this property.\n";
		return;
	}

	std::cout << "Do you want to buy this property for " << price << "? (y/n): ";
	std::string choice;
	std::getline(std::cin, choice);
	if (choice == "y" || choice == "Y") {
		player->increment_money(-price);
		owner = player;
		player->add_property(this);
		player->decrement_nb_stands();
		std::cout << name << " bought the property: " << get_name() << ".\n";
	}
	else {
		std::cout << name << " decided not to buy the property: " << get_name() << ".\n";
	}
}

void CaseGoToCoffee::execute(GameState& gs) {
	auto* const player = gs.get_player();
	std::cout << player->get_name() << " is paying 3 going to the coffee case.\n";
	player->set_position(10);
	player->increment_money(-3);
}

void CaseTrain::execute(GameState& gs) {
	auto* const player = gs.get_player();
	
	uint8_t roll = roll_die();
	std::cout << player->get_name() << " rolled a " << +roll << ".\n";

	uint8_t old_position = player->get_position();

	if (old_position + roll > 31) {
		player->increment_money(2);
		std::cout << player->get_name() << " passed the start case and received 2 money.\n";
	}

	player->set_position((old_position + roll) % 32);

	auto& c = gs.board.get_case(player->get_position());
	std::cout << player->get_name() << " landed on case " << c.get_name() << ".\n";
	c.execute(gs);
}

void CaseBigWin::execute(GameState& gs) {
	auto* const player = gs.get_player();
	std::cout << player->get_name() << " won the big win and received " << gs.fortune_amount << " money.\n";
	player->increment_money(gs.fortune_amount);
}

void CaseEntertainment::execute(GameState& gs) {
	auto* const player = gs.get_player();
	std::cout << player->get_name() << " is enjoying some entertainment.\n";
	player->increment_money(-2);
}

void CaseStart::execute(GameState& gs) {
	auto* const player = gs.get_player();
	std::cout << player->get_name() << " is on the starting case and received 2 money.\n";
	player->increment_money(2);
}