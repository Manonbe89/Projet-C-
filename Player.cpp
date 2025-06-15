#include "Player.hpp"
#include "Case.hpp"

bool Player::has_group(Color color) const {
	uint8_t count = 0;

	for (const auto& property : properties)
		if (property->get_color() == color)	count++;

	return count == 2;
}

void Player::add_property(CaseProperty* property) {
	if (property) {
		properties.push_back(property);
	}
}