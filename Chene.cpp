#include "Chene.hpp"
#include <iostream>

using namespace std;

Chene::Chene() {
	etat = Etat::EnVie;
}

Chene::Chene(Etat etatInit) {
	etat = etatInit;
}


Chene::~Chene() {
}

string Chene::getImage() {
	if (etat == Etat::EnVie) {
		return " C ";
	} else if (etat == Etat::EnFeu) {
		return " * ";
	} else if (etat == Etat::EnCendre) {
		return " # ";

	}
	return "   ";
}

void Chene::propage(Foret &foret, int ligne, int colonne) {
	if (this->etat == Etat::EnFeu) {

		if (ligne < foret.arbres.size()-1) {
			foret.arbres[ligne + 1][colonne]->brule();
		}
		if (ligne > 0) {
			foret.arbres[ligne - 1][colonne]->brule();
		}
		if (colonne > 0) {
			foret.arbres[ligne][colonne - 1]->brule();
		}
		if (colonne < foret.arbres[0].size()-1) {
			foret.arbres[ligne][colonne + 1]->brule();
		}
		this->etat = Etat::EnCendre;
	}
}

Arbre Chene::clone(){
	return Chene();
}
