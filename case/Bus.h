#pragma once
#include "../Cases.h"
#include "Fortune.h"

#ifndef BUS_H
#define BUS_H
class Bus : public Cases
{
public:
	virtual void do_case(std::vector<Player>& players, Monopoly& monopoly, uint8_t current);
};

#endif