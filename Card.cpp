#include <iostream>
#include "Card.hpp"
#include "Dice.hpp"
#include "GameState.hpp"
#include "Case.hpp"

void CardFreeStand::execute(GameState& gs) {
	auto* const player = gs.get_player();
	player->add_free_stand(color);
	std::cout << "Player " << player->get_name() << " got a free " << color_to_string(color) << " stand.\n";
}

void CardGoTo::execute(GameState& gs) {
	auto* const player = gs.get_player();
	auto name = player->get_name();

	if (price) {
		std::cout << name << " must pay " << price << " to go to " << pos_name << ".\n";
		player->increment_money(-price);
		gs.fortune_amount += price;
	}

	if (position < player->get_position()) {
		std::cout << name << " passed the start case and received 2 money.\n";
		player->increment_money(2);
	}

	player->set_position(position);
	auto& c = gs.board.get_case(player->get_position());
	std::cout << name << " landed on case " << c.get_name() << ".\n";
	c.execute(gs);
}

void CardTakeTrain::execute(GameState& gs) {
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

