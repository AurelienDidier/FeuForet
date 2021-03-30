/*
 * Foret.cpp
 *
 *  Created on: 23 mars 2021
 *      Author: GAME1.1
 */
#include "Foret.hpp"
#include "Chene.hpp"
#include "Bouleau.hpp"
#include "Sapin.hpp"
#include "PasArbre.hpp"
#include <cstdlib>
#include <stdlib.h>
#include <time.h>

using namespace std;

void Foret::afficheForet() {
	for (int i = 0; i < ligne; i++) {
		for (int j = 0; j < colonne; j++) {
			cout << this->arbres[i][j]->getImage();
		}
		cout << endl;
	}
	cout << endl;
}

Foret::Foret(int ligneI, int colonneI, int pourcentageCheneI,
		int pourcentageBouleauI, int pourcentageSapinI) {
	arbreEnFeu=0;
	ligne = ligneI;
	colonne = colonneI;
	pourcentageChene = pourcentageCheneI;
	pourcentageBouleau = pourcentageBouleauI;
	pourcentageSapin = pourcentageSapinI;

	srand(time(NULL));
	for (int i = 0; i < ligne; i++) {
		vector<Arbre*> l;
		arbres.push_back(l);
		for (int j = 0; j < colonne; j++) {
			int proba = rand() % 100;
			if (proba < pourcentageBouleau) {
				arbres[i].push_back(new Bouleau());
			} else if (proba < pourcentageBouleau + pourcentageChene) {
				arbres[i].push_back(new Chene());
			} else if (proba < pourcentageBouleau + pourcentageChene + pourcentageSapin) {
				arbres[i].push_back(new Sapin());
			} else {
				arbres[i].push_back(new PasArbre());
			}
		}
	}

}

Foret::Foret(int ligneI, int colonneI) {
	arbreEnFeu=0;
	ligne = ligneI;
	colonne = colonneI;
	pourcentageChene = 0;
	pourcentageBouleau = 0;
	pourcentageSapin = 0;

	for (int i = 0; i < ligne; i++) {
		vector<Arbre*> l;
		arbres.push_back(l);
		for (int j = 0; j < colonne; j++) {
				arbres[i].push_back(new Arbre());
		}
	}
}

void Foret::copieEtat(Foret foret){
	for (int i = 0; i < ligne; i++) {
		for (int j = 0; j < colonne; j++) {
			this->arbres[i][j]->etat= foret.arbres[i][j]->etat;
		}
	}
}

