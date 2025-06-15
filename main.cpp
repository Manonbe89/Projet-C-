#include <iostream>
#include <string>
#include <ranges>

#include "Dice.hpp"
#include "GameState.hpp"
#include "Board.hpp"
#include "Case.hpp"



int main()
{
	int player_count;
	std::cout << "Enter the number of players: ";
	std::cin >> player_count;
	std::cin.ignore();

	while (player_count < 2 || player_count > 4) {
		std::cout << "Invalid number of players. Please enter a number between 2 and 4: ";
		std::cin >> player_count;
		std::cin.ignore();
	}

	GameState gs{static_cast<uint8_t>(player_count)};

	for (int i : std::views::iota(0, player_count))
	{
		std::string name;
		std::cout << "Enter the name of player " << (i + 1) << ": ";
		std::getline(std::cin, name);
		gs.players[i] = std::make_unique<Player>(name, player_count > 2 ? 10 : 15);
	}

	gs.current_player = 0;
	uint8_t max = roll_die();

	for (int i : std::views::iota(0, player_count - 1)) {
		if (roll_die() > max) {
			max = roll_die();
			gs.current_player = i + 1;
		}
	}

	std::cout << "Player " << gs.players[gs.current_player]->get_name() << " starts first with a roll of " << +max << ".\n";



	while (gs.players.size() == gs.player_count)
	{
		auto* const p = gs.get_player();
		const auto& name = p->get_name();

		std::cout << '\n' << name << "'s turn. Current position: " << +p->get_position() << ", Money: " << p->get_money() << "\n";
		std::cout << "Press Enter to roll the die...";
		std::cin.ignore();
		
		uint8_t roll = roll_die();
		std::cout << name << " rolled a " << +roll << ".\n";
		uint8_t old_position = p->get_position();

		if (old_position + roll > 31) {
			p->increment_money(2);
			std::cout << name << " passed the start case and received 2 money.\n";
		}
		p->set_position((old_position + roll) % 32);


		auto& c = gs.board.get_case(p->get_position());
		std::cout << name << " landed on case " << c.get_name() << ".\n";
		c.execute(gs);

		if (p->get_money() <= 0) {
			std::cout << name << " has run out of money and is eliminated from the game.\n";
			gs.players.erase(gs.players.begin() + gs.current_player);
			// Reset to first player if current player is out of bounds
			if (gs.current_player >= gs.players.size()) {
				gs.current_player = 0;
			}
		}
		else {
			std::cout << name << " now has " << p->get_money() << " money.\n";
			// Move to the next player
			gs.current_player = (gs.current_player + 1) % gs.players.size();
		}
	}

	// Announce the winner 
	int16_t max_money = gs.players[0]->get_money();
	Player* winner = gs.players[0].get();

	for (const auto& player : gs.players) {
		if (player->get_money() > max_money) {
			max_money = player->get_money();
			winner = player.get();
		}
	}

	std::cout << "The game is over! The winner is " << winner->get_name() << " with " << max_money << " money!\n";
	return 0;
}