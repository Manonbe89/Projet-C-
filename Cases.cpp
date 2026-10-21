#include "Cases.h"

void Cases::defCases(){
	cases = {
			{"Depart", "", 0, 0},
			{"Chance", "", 0, 0},
			{"Jeu de ballons", "Bleu foncé", 1, 0},
			{"Barbe a papa", "Bleu foncé", 1, 0},
			{"Chance", "", 0, 0},
			{"Train", "Jaune", 0, 0},
			{"Theatre de marionnettes", "Blanc", 2, 0},
			{"Spectacle de magie", "Blanc", 2, 0},
			{"Feu d artifice", "", 0, 0},
			{"Chance", "", 0, 0},
			{"Cafe", "", 0, 0},
			{"Manege", "Rose fonce", 2, 0},
			{"Pedalos", "Rose fonce", 2, 0},
			{"Train", "Vert", 0, 0},
			{"Toboggan aquatique", "Orange", 3, 0},
			{"Mini-golf", "Orange", 3, 0},
			{"Fortune", "", 0, 0},
			{"Chance", "", 0, 0},
			{"Jeux video", "Rouge", 3, 0},
			{"La maison hantee", "Rouge", 3, 0},
			{"Chance", "", 0, 0},
			{"Train", "Bleu", 0, 0},
			{"Promenade en helicoptere", "Jaune", 4, 0},
			{"Promenade a poney", "Jaune", 4, 0},
			{"Le ballet des dauphins", "", 0, 0},
			{"Chance", "", 0, 0},
			{"Bus", "", 0, 0},
			{"Autos tamponeuses", "Vert", 4, 0},
			{"Grande roue", "Vert", 4, 0},
			{"Train", "Rouge", 0, 0},
			{"Grand huit", "Bleu", 5, 0},
			{"Montagnes russes", "Bleu", 5, 0},
		};
};

std::string Cases::getName(std::vector<Case>& cases, std::vector<Player>& players, Monopoly& monopoly)
{
	int nb_case = players[ monopoly.getNumberCurrentPlayer()].getPosition();
    return cases[nb_case].name;
}
void Cases::do_case(std::vector<Player> &players, Monopoly &monopoly, uint8_t current) {
};
