#pragma once
#include "Cases.h"

#ifndef CAFE_H
#define CAFE_H

class Cafe : public Cases
{
public:
	void do_case(std::vector<Player>& players, uint8_t current) override;
	std::string getName() override;
};

#endif