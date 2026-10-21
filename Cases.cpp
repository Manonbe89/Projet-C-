/*#include "Cases.h"
#include "case/Depart.h"
#include "case/Chance.h"
#include "case/Stand.h"
#include "case/Train.h"
#include "case/Feu_d_artifice_dauphins.h"
#include "case/Cafe.h"
#include "case/Fortune.h"
#include "case/Bus.h"

void Cases::defCases(std::vector<std::unique_ptr<Cases>>& cases)
{
	cases.push_back(std::make_unique<Depart>());				//permet d'�viter fuites memoires et creer une instance d'une classe virtuelle
	cases.push_back(std::make_unique<Chance>());
	cases.push_back(std::make_unique<Stand>("Jeu de ballons", "Dark Blue", 1, 1));
	cases.push_back(std::make_unique<Stand>("Barbe a papa", "Dark Blue", 1, 1));
	cases.push_back(std::make_unique<Chance>());
	cases.push_back(std::make_unique<Train>());
	cases.push_back(std::make_unique<Stand>("Theatre de marionnettes", "White", 2, 2));
	cases.push_back(std::make_unique<Stand>("Spectacle de magie", "White", 2, 2));
	cases.push_back(std::make_unique<Feu_d_artifice_dauphins>());
	cases.push_back(std::make_unique<Chance>());
	cases.push_back(std::make_unique<Cafe>());
	cases.push_back(std::make_unique<Stand>("Manege", "Pink", 2, 2));
	cases.push_back(std::make_unique<Stand>("Pedalos", "Pink", 2, 2));
	cases.push_back(std::make_unique<Train>());
	cases.push_back(std::make_unique<Stand>("Toboggan aquatique", "Orange", 3, 3));
	cases.push_back(std::make_unique<Stand>("Mini-golf", "Orange", 3, 3));
	cases.push_back(std::make_unique<Fortune>());
	cases.push_back(std::make_unique<Chance>());
	cases.push_back(std::make_unique<Stand>("Jeux video", "Red", 3, 3));
	cases.push_back(std::make_unique<Stand>("La maison hantee", "Red", 3, 3));
	cases.push_back(std::make_unique<Chance>());
	cases.push_back(std::make_unique<Train>());
	cases.push_back(std::make_unique<Stand>("Promenade en helicoptere", "Yellow", 4, 4));
	cases.push_back(std::make_unique<Stand>("Promenade a poney", "Yellow", 4, 4));
	cases.push_back(std::make_unique<Feu_d_artifice_dauphins>());
	cases.push_back(std::make_unique<Chance>());
	cases.push_back(std::make_unique<Bus>());
	cases.push_back(std::make_unique<Stand>("Autos tamponeuses", "Green", 4, 4));
	cases.push_back(std::make_unique<Stand>("Grande roue", "Green", 4, 4));
	cases.push_back(std::make_unique<Train>());
	cases.push_back(std::make_unique<Stand>("Grand huit", "Light_blue", 5, 5));
	cases.push_back(std::make_unique<Stand>("Montagnes russes", "Light_blue", 5, 5));
}*/

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
};
