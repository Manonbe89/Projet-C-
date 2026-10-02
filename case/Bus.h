#pragma once
#include "../Cases.h"
#include "Fortune.h"

#ifndef BUS_H
#define BUS_H
class Bus : public Cases
{
public:
	void do_case(std::vector<Player>& players, uint8_t current) override;
	std::string getName() override;
};

#endif