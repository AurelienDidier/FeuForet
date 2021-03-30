/*
 * Sapin.cpp
 *
 *  Created on: 30 mars 2021
 *      Author: GAME1.1
 */

#include "Sapin.hpp"
#include <iostream>

Sapin::Sapin(){
	etat= Etat::enVie;
}

void Sapin::propage(Foret &foret, int ligne, int colonne){
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
		foret.arbres[ligne][colonne]->etat = Etat::enCendre;
	}
}

string Sapin::getImage(){
	if (etat==Etat::enVie){
		return " S ";
	}
	if (etat==Etat::enFeu){
		return " * ";
	}
	if (etat==Etat::enCendre){
		return " # ";
	}
	return "   ";
}



