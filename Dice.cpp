#include "Dice.hpp"
#include <random>



uint8_t roll_die() {
	static std::random_device rd;
	static std::mt19937 engine(rd());
	std::uniform_int_distribution<int> distribution(1, 6);
	return static_cast<uint8_t>(distribution(engine));
}