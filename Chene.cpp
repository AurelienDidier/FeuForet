/*
 * Chene.cpp
 *
 *  Created on: 30 mars 2021
 *      Author: GAME1.1
 */

#include "Chene.hpp"
#include <iostream>

class Foret;

Chene::Chene(){
	etat= Etat::enVie;
}

void Chene::propage(Foret &foret, int ligne, int colonne){
	if (this->etat == Etat::enFeu) {

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
	}
	foret.arbres[ligne][colonne]->etat = Etat::enCendre;


}

string Chene::getImage(){
	if (etat==Etat::enVie){
		return " C ";
	}
	if (etat==Etat::enFeu){
		return " * ";
	}
	if (etat==Etat::enCendre){
		return " # ";
	}
	return "   ";
}
