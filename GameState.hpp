#pragma once
#include <cstdint>
#include <vector>
#include <memory>
#include "player.hpp"
#include "Board.hpp"




// struct since we're only holding data
struct GameState
{
	const uint8_t player_count;
	uint8_t current_player;
	std::vector<std::unique_ptr<Player>> players;
	int16_t fortune_amount;
	Board board;

	GameState(uint8_t player_count)
		: player_count(player_count), current_player(0), players(player_count), fortune_amount(0) {}


	// some helper function
	Player* get_player() {
		return players.at(current_player).get();
	}

};