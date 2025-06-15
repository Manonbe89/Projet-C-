#pragma once
#include <string>
#include <cstdint>
#include <vector>
#include <string_view> 
#include "Color.hpp"


class CaseProperty;

class Player
{
private:
	const std::string name;
	uint8_t position;
	int16_t money;
	uint8_t nb_stands;
	std::vector<CaseProperty*> properties;

public:
	Player(const std::string& name, uint8_t nb_stands, int16_t money = 31)
		: name(name), position(0), money(money), nb_stands(nb_stands) {
	}
	std::string_view get_name() const { return name; }
	uint8_t get_position() const { return position; }
	void set_position(uint8_t new_position) { position = new_position; }
	// Callee responsible for wrapping around the board if needed
	void increment_position(uint8_t increment) { position += increment; }

	int16_t get_money() const { return money; }
	void set_money(int16_t new_money) { money = new_money; }
	void increment_money(int16_t increment) { money += increment; }
	bool has_group(Color color) const;
	void add_property(CaseProperty* property);

	uint8_t get_nb_stands() const { return nb_stands; }
	void decrement_nb_stands() { if (nb_stands > 0) nb_stands--; }
};