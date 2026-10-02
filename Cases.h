#pragma once
#include <iostream>
#include <memory>
#include <vector>
#include "core/Monopoly.h"
#include "core/Player.h"

#ifndef CASES_H
#define CASES_H

class Cases
{
private :           
	uint8_t current = 0;

public:
	virtual void do_case(std::vector<Player>& players, uint8_t current) = 0;
	static void defCases(std::vector<std::unique_ptr<Cases>>& cases);		//comme classe virtuelle doit �tre static pour �tre utilisable
	virtual std::string getName() = 0;
	virtual ~Cases() = default; // Destruction via pointeur
};

#endif