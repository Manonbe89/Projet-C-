#pragma once
#include <iostream>
#include <memory>
#include <vector>
#include "Monopoly.h"
#include "Player.h"

#ifndef CASES_H
#define CASES_H

class Cases
{
private :           
	uint8_t current = 0;

public:
	virtual void do_case(std::vector<Player>& players, uint8_t current) = 0;
	static void defCases(std::vector<std::unique_ptr<Cases>>& cases);		//comme classe virtuelle doit être static pour être utilisable
	virtual std::string getName() = 0;
	virtual ~Cases() = default; // Destruction via pointeur
};

#endif