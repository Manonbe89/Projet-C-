#pragma once
#include "Board.hpp"
#include "Card.hpp"
#include "Case.hpp"
#include <algorithm>
#include <random>


Board::Board() : cases(32), cards(){

    cards.push_back(std::make_unique<CardFreeStand>(Color::Orange));
    cards.push_back(std::make_unique<CardFreeStand>(Color::Orange));
    cards.push_back(std::make_unique<CardFreeStand>(Color::Red));
    cards.push_back(std::make_unique<CardFreeStand>(Color::Red));
    cards.push_back(std::make_unique<CardFreeStand>(Color::Brown));
    cards.push_back(std::make_unique<CardFreeStand>(Color::Brown));
    cards.push_back(std::make_unique<CardFreeStand>(Color::DarkBlue));
    cards.push_back(std::make_unique<CardFreeStand>(Color::DarkBlue));
    cards.push_back(std::make_unique<CardFreeStand>(Color::Green));
    cards.push_back(std::make_unique<CardFreeStand>(Color::Green));
    cards.push_back(std::make_unique<CardFreeStand>(Color::LightBlue));
    cards.push_back(std::make_unique<CardFreeStand>(Color::LightBlue));
    cards.push_back(std::make_unique<CardFreeStand>(Color::Yellow));
    cards.push_back(std::make_unique<CardFreeStand>(Color::Yellow));
    cards.push_back(std::make_unique<CardFreeStand>(Color::Pink));
    cards.push_back(std::make_unique<CardGoTo>(30, "Grand Huit"));
    cards.push_back(std::make_unique<CardGoTo>(14, "Toboggan aquatique"));
    cards.push_back(std::make_unique<CardGoTo>(10, "bus pour le cafe", 3));
    cards.push_back(std::make_unique<CardGoTo>(0, "depart"));
    cards.push_back(std::make_unique<CardGoTo>(24, "Ballet des dauphins"));
    cards.push_back(std::make_unique<CardGoTo>(8, "Feu d'artifice"));
    cards.push_back(std::make_unique<CardTakeTrain>(Color::DarkBlue));
    cards.push_back(std::make_unique<CardTakeTrain>(Color::Red));
    cards.push_back(std::make_unique<CardTakeTrain>(Color::Yellow));
    cards.push_back(std::make_unique<CardTakeTrain>(Color::Green));


    std::vector<std::unique_ptr<Card>> tmp(
        std::make_move_iterator(cards.begin()),
        std::make_move_iterator(cards.end())
    );

    std::random_device random_device;
	std::mt19937 generator(random_device());
	std::ranges::shuffle(tmp, generator);

    cards.assign(
        std::make_move_iterator(tmp.begin()),
        std::make_move_iterator(tmp.end())
    );

    
    cases[0] = std::make_unique<CaseStart>();
    cases[1] = std::make_unique<CaseLuck>(cards);
    cases[2] = std::make_unique<CaseProperty>("Jeu de ballons", 1, Color::DarkBlue);
    cases[3] = std::make_unique<CaseProperty>("Barbe a papa", 1, Color::DarkBlue);
    cases[4] = std::make_unique<CaseLuck>(cards);
    cases[5] = std::make_unique<CaseTrain>("JAUNE");
    cases[6] = std::make_unique<CaseProperty>("Theatre de marionnette", 2, Color::Brown);
    cases[7] = std::make_unique<CaseProperty>("Spectacle de magie", 2, Color::Brown);
    cases[8] = std::make_unique<CaseEntertainment>("Feu d'artifice");
    cases[9] = std::make_unique<CaseLuck>(cards);
    cases[10] = std::make_unique<CaseCoffee>();
    cases[11] = std::make_unique<CaseProperty>("Manege", 2, Color::Pink);
    cases[12] = std::make_unique<CaseProperty>("Pedalos", 2, Color::Pink);
    cases[13] = std::make_unique<CaseTrain>("VERT");
    cases[14] = std::make_unique<CaseProperty>("Toboggan aquatique", 3, Color::Orange);
    cases[15] = std::make_unique<CaseProperty>("Mini golf", 3, Color::Orange);
    cases[16] = std::make_unique<CaseBigWin>();
    cases[17] = std::make_unique<CaseLuck>(cards);
    cases[18] = std::make_unique<CaseProperty>("Jeux videos", 3, Color::Red);
    cases[19] = std::make_unique<CaseProperty>("Maison hantee", 3, Color::Red);
    cases[20] = std::make_unique<CaseLuck>(cards);
    cases[21] = std::make_unique<CaseTrain>("BLEU");
    cases[22] = std::make_unique<CaseProperty>("Promenade en helicoptere", 4, Color::Yellow);
    cases[23] = std::make_unique<CaseProperty>("Promenade a poney", 4, Color::Yellow);
    cases[24] = std::make_unique<CaseEntertainment>("Ballet des dauphins");
    cases[25] = std::make_unique<CaseLuck>(cards);
    cases[26] = std::make_unique<CaseGoToCoffee>();
    cases[27] = std::make_unique<CaseProperty>("Autos tamponneuses", 4, Color::Green);
    cases[28] = std::make_unique<CaseProperty>("Grande roue", 4, Color::Green);
    cases[29] = std::make_unique<CaseTrain>("ROUGE");
    cases[30] = std::make_unique<CaseProperty>("Grand huit", 5, Color::LightBlue);
    cases[31] = std::make_unique<CaseProperty>("Montagnes russes", 5, Color::LightBlue);
}