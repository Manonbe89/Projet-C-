#include "Cases.h"
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
	cases.push_back(std::make_unique<Stand>("Barbe � papa", "Dark Blue", 1, 1));
	cases.push_back(std::make_unique<Chance>());
	cases.push_back(std::make_unique<Train>());
	cases.push_back(std::make_unique<Stand>("The�tre de marionnettes", "White", 2, 2));
	cases.push_back(std::make_unique<Stand>("Spectacle de magie", "White", 2, 2));
	cases.push_back(std::make_unique<Feu_d_artifice_dauphins>());
	cases.push_back(std::make_unique<Chance>());
	cases.push_back(std::make_unique<Cafe>());
	cases.push_back(std::make_unique<Stand>("Man�ge", "Pink", 2, 2));
	cases.push_back(std::make_unique<Stand>("P�dalos", "Pink", 2, 2));
	cases.push_back(std::make_unique<Train>());
	cases.push_back(std::make_unique<Stand>("Toboggan aquatique", "Orange", 3, 3));
	cases.push_back(std::make_unique<Stand>("Mini-golf", "Orange", 3, 3));
	cases.push_back(std::make_unique<Fortune>());
	cases.push_back(std::make_unique<Chance>());
	cases.push_back(std::make_unique<Stand>("Jeux vid�o", "Red", 3, 3));
	cases.push_back(std::make_unique<Stand>("La maison hant�e", "Red", 3, 3));
	cases.push_back(std::make_unique<Chance>());
	cases.push_back(std::make_unique<Train>());
	cases.push_back(std::make_unique<Stand>("Promenade en h�licopt�re", "Yellow", 4, 4));
	cases.push_back(std::make_unique<Stand>("Promenade � poney", "Yellow", 4, 4));
	cases.push_back(std::make_unique<Feu_d_artifice_dauphins>());
	cases.push_back(std::make_unique<Chance>());
	cases.push_back(std::make_unique<Bus>());
	cases.push_back(std::make_unique<Stand>("Autos tamponeuses", "Green", 4, 4));
	cases.push_back(std::make_unique<Stand>("Grande roue", "Green", 4, 4));
	cases.push_back(std::make_unique<Train>());
	cases.push_back(std::make_unique<Stand>("Grand huit", "Light_blue", 5, 5));
	cases.push_back(std::make_unique<Stand>("Montagnes russes", "Light_blue", 5, 5));
}