#include "Cases.h"
#include "Depart.h"
#include "Chance.h"
#include "Stand.h"
#include "Train.h"
#include "Feu_d_artifice_dauphins.h"
#include "Cafe.h"
#include "Fortune.h"
#include "Bus.h"

void Cases::defCases(std::vector<std::unique_ptr<Cases>> cases)
{
	cases.push_back(std::make_unique<Depart>());				//permet d'éviter fuites memoires et creer une instance d'une classe virtuelle
	cases.push_back(std::make_unique<Chance>());
	cases.push_back(std::make_unique<Stand>("Jeu de ballons", "Dark Blue", 1, 1));
	cases.push_back(std::make_unique<Stand>("Barbe à papa", "Dark Blue", 1, 1));
	cases.push_back(std::make_unique<Chance>());
	cases.push_back(std::make_unique<Train>());
	cases.push_back(std::make_unique<Stand>("Theâtre de marionnettes", "White", 2, 2));
	cases.push_back(std::make_unique<Stand>("Spectacle de magie", "White", 2, 2));
	cases.push_back(std::make_unique<Feu_d_artifice_dauphins>());
	cases.push_back(std::make_unique<Chance>());
	cases.push_back(std::make_unique<Cafe>());
	cases.push_back(std::make_unique<Stand>("Manège", "Pink", 2, 2));
	cases.push_back(std::make_unique<Stand>("Pédalos", "Pink", 2, 2));
	cases.push_back(std::make_unique<Train>());
	cases.push_back(std::make_unique<Stand>("Toboggan aquatique", "Orange", 3, 3));
	cases.push_back(std::make_unique<Stand>("Mini-golf", "Orange", 3, 3));
	cases.push_back(std::make_unique<Fortune>());
	cases.push_back(std::make_unique<Chance>());
	cases.push_back(std::make_unique<Stand>("Jeux vidéo", "Red", 3, 3));
	cases.push_back(std::make_unique<Stand>("La maison hantée", "Red", 3, 3));
	cases.push_back(std::make_unique<Chance>());
	cases.push_back(std::make_unique<Train>());
	cases.push_back(std::make_unique<Stand>("Promenade en hélicoptère", "Yellow", 4, 4));
	cases.push_back(std::make_unique<Stand>("Promenade à poney", "Yellow", 4, 4));
	cases.push_back(std::make_unique<Feu_d_artifice_dauphins>());
	cases.push_back(std::make_unique<Chance>());
	cases.push_back(std::make_unique<Bus>());
	cases.push_back(std::make_unique<Stand>("Autos tamponeuses", "Green", 4, 4));
	cases.push_back(std::make_unique<Stand>("Grande roue", "Green", 4, 4));
	cases.push_back(std::make_unique<Train>());
	cases.push_back(std::make_unique<Stand>("Grand huit", "Light_blue", 5, 5));
	cases.push_back(std::make_unique<Stand>("Montagnes russes", "Light_blue", 5, 5));
}