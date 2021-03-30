/*
 * SimuForet.cpp
 *
 *  Created on: 30 mars 2021
 *      Author: GAME1.1
 */
#include "Foret.hpp"
#include "Arbre.hpp"
#include <unistd.h>

int main() {

	int ligne = 25;
	int colonne = 25;
	Foret foret(ligne, colonne, 20, 30, 20);

	Foret copy(ligne,colonne);

	foret.arbres[0][0]->brule();
	for (int c = 0; c < 50; c++) {
		copy.copieEtat(foret);
		for (int i = 0; i < ligne; i++) {
			for (int j = 0; j < colonne; j++) {
				foret.arbres[i][j]->propage(copy, i, j);
			}
		}
		foret.afficheForet();
		foret.copieEtat(copy);
		sleep(1);
	}
}

