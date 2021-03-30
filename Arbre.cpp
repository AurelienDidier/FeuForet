/*
 * Arbre.cpp
 *
 *  Created on: 30 mars 2021
 *      Author: GAME1.1
 */

#include "Arbre.hpp"

void Arbre::brule(){
	if (etat== Etat::enVie){
		etat= Etat::enFeu;
	}
}
void Arbre::propage(Foret &foret, int ligne, int colonne){

}

string Arbre::getImage(){
	if (etat==Etat::enVie){
		return " A ";
	}
	if (etat==Etat::enFeu){
		return " * ";
	}
	if (etat==Etat::enCendre){
		return " # ";
	}
	return "   ";
}



