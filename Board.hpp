#pragma once
#include <list>
#include <vector>
#include <memory>

class Case;
class Card;


class Board
{
private:
	std::vector<std::unique_ptr<Case>> cases;
	std::list<std::unique_ptr<Card>> cards;
public:
	Board();
	Case& get_case(uint8_t index) const { return *cases.at(index); }
	auto& get_deck() { return cards; }
};