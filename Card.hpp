#pragma once
#include <string>
#include <string_view>
#include <cstdint>
#include "Color.hpp"

struct GameState;

class Card
{
private:
	const std::string name;

public:
	Card(std::string name) : name(std::move(name)) {}
	std::string_view get_name() const { return name; }
	virtual void execute(GameState& gs) = 0;
};



class CardFreeStand : public Card
{
private:
	const Color color;
public:
	CardFreeStand(Color color) : Card("Free " + std::string(color_to_string(color)) + " stand"), color(color) {}
	void execute(GameState& gs) override;
};


class CardGoTo : public Card
{
private:
	uint8_t position;
	const std::string pos_name;
	int16_t price;
public:
	CardGoTo(uint8_t position, std::string n, int16_t price = 0)
		: Card("Go to " + n), position(position), pos_name(n), price(price) {}
	void execute(GameState& gs) override;
};



class CardTakeTrain : public Card
{
private:
	const std::string color;
public:
	CardTakeTrain(Color color) : Card("Take the " + std::string(color_to_string(color)) + " train"), color(color_to_string(color)) {}
	void execute(GameState& gs) override;
};