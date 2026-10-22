#include <iostream>
#include <vector>
#include "core/Monopoly.h"
#include "core/Player.h"

#ifndef CASES_H
#define CASES_H

struct struct_case{
			std::string name;
			std::string color;
			int price;
			bool stand;
		};
		
class Cases
{
	private : 
		std::vector<struct_case> cases;

	public :
		Cases();
		void defCases();
		std::vector<struct_case>& getCases();
		std::string getName(std::vector<struct_case>& cases, std::vector<Player>& players, Monopoly& monopoly);
		virtual void do_case(std::vector<Player>& players, Monopoly& monopoly, uint8_t current);
		 virtual ~Cases() = default;		// Destruction via pointeur
};

#endif