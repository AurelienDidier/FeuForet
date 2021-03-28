#include "Bouleau.hpp"
#include <iostream>

using namespace std;

Bouleau::Bouleau() {
	etat = Etat::EnVie;
}
Bouleau::Bouleau(Etat etatInit) {
	etat = etatInit;
}

Bouleau::~Bouleau() {
}

string Bouleau::getImage() {
	if (etat == Etat::EnVie) {
		return " B ";
	} else if (etat == Etat::EnFeu) {
		return " * ";
	} else if (etat == Etat::EnCendre) {
		return " # ";

	}
	return "   ";
}

void Bouleau::propage(Foret &foret, int ligne, int colonne) {
	if (this->etat == Etat::EnFeu) {
		if (ligne < foret.arbres.size() - 1
				and colonne < foret.arbres[0].size() - 1) {
			foret.arbres[ligne + 1][colonne + 1]->brule();
		}
		if (ligne < foret.arbres.size() - 1) {
			foret.arbres[ligne + 1][colonne]->brule();
		}
		if (ligne < foret.arbres.size() - 1 and colonne > 0) {
			foret.arbres[ligne + 1][colonne - 1]->brule();
		}
		if (ligne > 0 and colonne < foret.arbres[0].size() - 1) {
			foret.arbres[ligne - 1][colonne + 1]->brule();
		}
		if (ligne > 0) {
			foret.arbres[ligne - 1][colonne]->brule();
		}
		if (ligne > 0 and colonne > 0) {
			foret.arbres[ligne - 1][colonne - 1]->brule();
		}
		if (colonne > 0) {
			foret.arbres[ligne][colonne - 1]->brule();
		}
		if (colonne < foret.arbres[0].size() - 1) {
			foret.arbres[ligne][colonne + 1]->brule();
		}
		foret.arbres[ligne][colonne]->etat = Etat::EnCendre;
	}

}

Arbre Bouleau::clone(){
	return Bouleau();
}


