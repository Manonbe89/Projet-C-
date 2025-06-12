#include "Cases.h"
#include "Depart.h"
#include "Chance.h"
#include "Stand.h"
#include "Train.h"
#include "Feu_d_artifice_dauphins.h"
#include "Cafe.h"
#include "Fortune.h"
#include "Bus.h"

void Cases::defCases(std::vector<Cases> cases)
{
	Depart depart;
	Chance chance;
	Stand dark_blue_stand1, dark_blue_stand2;
	Train train;
	Stand white_stand1, white_stand2;
	Feu_d_artifice_dauphins feu_d_artifice;
	Cafe cafe;
	Stand pink_stand1, pink_stand2;
	Stand orange_stand1, orange_stand2;
	Fortune fortune;
	Stand red_stand1, red_stand2;
	Stand yellow_stand1, yellow_stand2;
	Feu_d_artifice_dauphins dauphins;
	Bus bus;
	Stand green_stand1, green_stand2;
	Stand light_blue_stand1, light_blue_stand2;

	cases[1] = depart ;     //ou Depart cases[1]
	cases[2] = chance;
	cases[3] = dark_blue_stand1;
	cases[4] = dark_blue_stand2;
	cases[5] = chance;
	cases[6] = train;
	cases[7] = white_stand1;
	cases[8] = white_stand2;
	cases[9] = feu_d_artifice;
	cases[10] = chance;
	cases[11] = cafe;
	cases[12] = pink_stand1;
	cases[13] = pink_stand2;
	cases[14] = train;
	cases[15] = orange_stand1;
	cases[16] = orange_stand2;
	cases[17] = fortune;
	cases[18] = chance;
	cases[19] = red_stand1;
	cases[20] = red_stand2;
	cases[21] = chance;
	cases[22] = train;
	cases[23] = yellow_stand1;
	cases[24] = yellow_stand2;
	cases[25] = dauphins;
	cases[26] = chance;
	cases[27] = bus;
	cases[28] = green_stand1;
	cases[29] = green_stand2;
	cases[30] = train;
	cases[31] = light_blue_stand1;
	cases[32] = light_blue_stand2;
}