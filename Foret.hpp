#ifndef Foret_HPP_
#define Foret_HPP_

#include <iostream>
#include <vector>
#include "Arbre.hpp"
#include "Bouleau.hpp"
#include "Chene.hpp"
#include "PasArbre.hpp"

using namespace std;

class Foret{

private:
	int pourcentagePeuplier;
	int pourcentageChene;
	int pourcentageBouleau;
	int arbreEnFeu;

public:
	int ligne;
	int colonne;
	vector<vector<Arbre*>> arbres;
	Foret(int ligne, int colonne, int pourcentagePeuplier, int pourcentageChene, int pourcentageBouleau);
	Foret(int ligne, int colonne);
	int getNbArbreEnFeu();
	void afficheForet();
	void copieEtat(Foret foret);
	~Foret();
};

#endif /* Foret_VosInitiales_HPP_ */
