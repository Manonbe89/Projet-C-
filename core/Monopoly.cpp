#include "Monopoly.h"
#include "Board.h"
#include "../Interraction.h"

Monopoly::Monopoly(std::vector<Player> players)
	:FirstPlayerToPlay(FirstPlayerToPlay)
{
}

bool Monopoly::check_end(std::vector<Player>& players, int current)
{
	bool result;
	Interraction interraction;
	if (players[current].getMoney() <= 0) {
		std::cout << "La partie est terminee" << std::endl << "Le joueur " << players[current].getName() << " a perdu tout son argent" << std::endl;
		result = 0;
	}
	else if (interraction.waitForEscape() == 0){
		std::cout << "Vous quittez la partie" << std::endl;
		result = 0;
	}
	else {
		result = 1;
	}
	return result;
}


void Monopoly::start(std::vector<Player>& players, Monopoly &monopoly)
{
	//Initialisation des valeurs
	int nb_players;

	std::cout << "Debut du jeu" << std::endl;

	//Determiner le nb de joueurs et leurs noms
	std::cout << "Combien de joueurs etes vous ?" << std::endl;
	std::cin >> nb_players;
	while (nb_players == 1) {
		std::cout << "Nombre de joueurs incorrect, essayez encore" << std::endl;
		std::cout << "Combien de joueurs etes vous ?" << std::endl;
		std::cin >> nb_players;
	}

	std::cout << "Quels sont vos noms ?" << std::endl;
	for (int i = 0; i < nb_players; i++) {
		std::cout << "Joueur " << i + 1 << ":" << std::endl;
		std::string name;
		std::cin >> name;
		if (nb_players == 2) {
			players.emplace_back(name, 31, 15, 0);
		}
		else {
			players.emplace_back(name, 31, 10, 0);
		}
	}


	//Determiner qui commence
	int de = 0;
	std::cout << "Vous allez lancer les des pour determiner qui commence" << std::endl << std::endl;

	for (int i = 0; i < players.size(); i++) {
		players[i].setDe(monopoly.dice_roll(players, i));
		if (players[i].getDe() > de) {
			winner_de = players[i].getName();
			de = players[i].getDe();
			numberFirstPlayer = i;
		}
	}
	monopoly.setNumberCurrentPlayer(numberFirstPlayer);
	monopoly.setNameCurrentPlayer(winner_de);
	std::cout << "Le joueur " << winner_de << " commence" << std::endl;
}

int Monopoly::dice_roll(const std::vector<Player> &players, int current)
{
	std::cout << "Vous lancez les des" << std::endl;
	int valeur = rand() % 6 + 1;
	std::cout << "Le joueur " << players[current].getName() << " a obtenu un " << valeur << std::endl << std::endl;
	return valeur;
}

void Monopoly::setNameCurrentPlayer(std::string winner_de)
{
	FirstPlayerToPlay = winner_de;
}

std::string Monopoly::getNameCurrentPlayer()
{
	return FirstPlayerToPlay;
}

void Monopoly::setNumberCurrentPlayer(int number)
{
	numberFirstPlayer = number;
}

int Monopoly::getNumberCurrentPlayer()
{
	return numberFirstPlayer;
}

void Monopoly::displayInfos(std::vector<Player> players, int current)
{
	std::cout << "Vos infos" << std::endl;
	std::cout << "Argent : " << players[current].getMoney() << std::endl;
}
