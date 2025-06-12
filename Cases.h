#pragma once
#include <iostream>
#include <memory>
#include <vector>
#include "Monopoly.h"
#include "Player.h"


class Cases
{
private : 

	std::vector<std::unique_ptr<Cases>> cases;

public:
	virtual void do_case(std::vector<Player> players, uint8_t current) = 0;
	void defCases(std::vector<std::unique_ptr<Cases>> cases);
	virtual ~Cases() = default; // Destruction via pointeur
};