#include "Arbre.hpp"
#include <iostream>

using namespace std;

//class Foret;

void Arbre::brule() {
	if (etat==Etat::EnVie) {
		etat=Etat::EnFeu;
	}
}

Arbre::~Arbre() {
}
string Arbre::getImage() {
	if (etat == Etat::EnVie) {
		return " A ";
	} else if (etat == Etat::EnFeu) {
		return " * ";
	} else if (etat == Etat::EnFeu) {
		return " # ";
	}
	return"   ";
}


void Arbre::propage(Foret &foret, int ligne, int colonne){
}

//Etat getEtat(){
//	return this.etat;
//}
