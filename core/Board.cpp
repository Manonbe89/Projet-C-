#include "Board.h"
#include "Monopoly.h"
#include "Player.h"
#include "../Interraction.h"


void Board::play_turn(Monopoly &monopoly, std::vector <Player>& players, std::vector<Case>& cases, Cases plateau)
{;
	Interraction interraction;
	std::string current_player = monopoly.getNameCurrentPlayer();
	int number_current_player = monopoly.getNumberCurrentPlayer(); 
	std::cout << "Tour du joueur " << current_player << std::endl;
	int de = monopoly.dice_roll(players, number_current_player);
	
	monopoly.displayInfos(players, number_current_player);
	interraction.waitForSpace();
	this->move_player(players, monopoly, de, number_current_player);							//this permet d'�viter de cr�er une instance de board (beaucoup plus simple)
	std::cout << "Vous avez atterri sur la case " << plateau.getName(cases, players, monopoly) << std::endl;
	plateau.do_case(players, monopoly, number_current_player);
	std::cout << "Fin de votre tour" << std::endl << std::endl;
	interraction.waitForSpace();
	this->SetNextPlayer(monopoly, players, number_current_player);
}

void Board::move_player(std::vector<Player>& players, Monopoly& monopoly, int number_of_cases, int number_current_player)
{
	std::cout << "Vous avancez de " << number_of_cases << " cases" << std::endl;
	players[number_current_player].addPosition(number_of_cases, players, monopoly, number_current_player);
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