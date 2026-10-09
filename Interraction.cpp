//Classe pas faite par moi
#include "Interraction.h"
#include <iostream>
#include <conio.h> // pour _getch()

void Interraction::waitForSpace() {
    std::cout << "Appuyez sur ESPACE pour continuer..." << std::endl;
    while (true) {
        char key = _getch(); // lit une touche sans attendre Entree
        if (key == ' ') {
            break; // touche espace detectee
        }
    }
}

bool Interraction::waitForEscape() {
    while (true) {
        int key = _getch(); 
        if (key == 27) {
            return 0; 
        }
    }
}