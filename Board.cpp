#include "Board.h"
#include "Monopoly.h"
#include "Player.h"
#include "Cases.h"
#include "Interraction.h"


Board::Board(std::vector<std::unique_ptr<Cases>>& cases)	//I don't know
	:number_current_player(0), cases(cases)
{
}

void Board::play_turn(Monopoly &monopoly, std::vector <Player>& players)
{;
	Interraction interraction;
	std::string current_player = monopoly.getNameCurrentPlayer();
	int number_current_player = monopoly.getNumberCurrentPlayer();
	std::cout << "Tour du joueur " << current_player << std::endl;
	int de = monopoly.dice_roll(players, number_current_player);
	
	monopoly.displayInfos(players, number_current_player);
	interraction.waitForSpace();
	this->move_player(players, de, number_current_player);							//this permet d'éviter de créer une instance de board (beaucoup plus simple)
	std::cout << "Vous avez atterri sur la case " << this->getNameCurrentCase(players, cases, number_current_player) << std::endl;
	cases[players[number_current_player].getPosition()]->do_case(players, number_current_player);
	std::cout << "Fin de votre tour" << std::endl << std::endl;
	interraction.waitForSpace();
	this->SetNextPlayer(monopoly, players, number_current_player);
}

void Board::move_player(std::vector<Player>& players, int number_of_cases, int number_current_player)
{
	std::cout << "Vous avancez de " << number_of_cases << " cases" << std::endl;
	players[number_current_player].addPosition(number_of_cases, players, number_current_player);
}

void Board::SetNextPlayer(Monopoly& monopoly, std::vector<Player>& players,  int number_current_player)
{
	if (number_current_player + 1 >= players.size()) {
		monopoly.setNumberCurrentPlayer(0);
		monopoly.setNameCurrentPlayer(players[0].getName());
	}
	else {
		monopoly.setNumberCurrentPlayer(number_current_player + 1);
		monopoly.setNameCurrentPlayer(players[number_current_player + 1].getName());
	}
}

std::string Board::getNameCurrentCase(std::vector<Player>& players, std::vector<std::unique_ptr<Cases>>& cases, int number_current_player)
{
	for (int i = 0; i < 32; i++) {
		if (i == players[number_current_player].getPosition()) {
			current_case = cases[i]->getName();
		}
	}
	return current_case;
}