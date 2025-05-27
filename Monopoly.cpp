#include "Monopoly.h"
bool Monopoly::check_end()
{
	bool test_fin = false;
	for (auto it = players.begin(); it < players.end(); ++it)
	{
		test_fin = false;
		if (it->getMoney() == 0) {
			test_fin = true;
			std::cout << "le joueur" << it->getName() << "n'a plus d'argent" << std::endl;
		}
		else {
			std::cout << "le joueur" << it->getName() << "a encore" << it->getMoney() << "€" << std::endl;
		}
	}
}


void Monopoly::next_player()
{

}

void Monopoly::start()
{

}