#include "Cases.h"
#include "case/Bus.h"
#include "case/Cafe.h"
#include "case/Chance.h"
#include "case/Depart.h"
#include "case/Feu_d_artifice_dauphins.h"
#include "case/Fortune.h"
#include "case/Stand.h"
#include "case/Train.h"

Cases::Cases()
{
}

void Cases::defCases()
{
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
}

std::vector<struct_case> &Cases::getCases() {
	return cases;
}

std::string Cases::getName(std::vector<Player>& players, Monopoly& monopoly)
{
	int nb_case = players[ monopoly.getNumberCurrentPlayer()].getPosition();
    return cases[nb_case].name;
}

void Cases::setStateCase(std::vector<Player> &players, Monopoly &monopoly)
{
	cases[players[monopoly.getNumberCurrentPlayer()].getPosition()].stand ++;
}

void Cases::do_case(std::vector<Player> &players, Monopoly &monopoly, uint8_t current)
{
	std::string name_case = cases[players[monopoly.getNumberCurrentPlayer()].getPosition()].name;
	std::string color_case = cases[players[monopoly.getNumberCurrentPlayer()].getPosition()].color;
	int price = cases[players[monopoly.getNumberCurrentPlayer()].getPosition()].price;
	bool state = cases[players[monopoly.getNumberCurrentPlayer()].getPosition()].stand;
	if (name_case == "Bus"){
		Bus bus;
		bus.do_case(players, monopoly, current);
	}
	else if (name_case == "Cafe"){
		Cafe cafe;
		cafe.do_case(players, monopoly, current);
	}
	else if (name_case == "Chance"){
		Chance chance;
		chance.do_case(players, monopoly, current);
	}
	else if (name_case == "Depart"){
		Depart depart;
		depart.do_case(players, monopoly, current);
	}
	else if (name_case == "Feu_d_artifice_dauphins"){
		Feu_d_artifice_dauphins feu_d_artifice_dauphins;
		feu_d_artifice_dauphins.do_case(players, monopoly, current);
	}
	else if (name_case == "Fortune"){
		Fortune fortune;
		fortune.do_case(players, monopoly, current);
	}
	else if (color_case != ""){
		Stand stand(name_case, color_case, price, state);
		stand.do_case(players, monopoly, current);
	}
	else if (name_case == "Train"){
		Train train;
		train.do_case(players, monopoly, current);
	}
};
