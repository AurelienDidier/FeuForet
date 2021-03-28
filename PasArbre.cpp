#include "PasArbre.hpp"
#include <iostream>

using namespace std;

PasArbre::PasArbre() {
	etat=Etat::EnVie;
}

PasArbre::~PasArbre(){
}
string PasArbre::getImage() {
	return "   ";
}

void PasArbre::propage(Foret &foret, int ligne, int colonne){
	etat=Etat::EnVie;
}
