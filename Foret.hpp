/*
 * Foret.hpp
 *
 *  Created on: 23 mars 2021
 *      Author: GAME1.1
 */

#ifndef FORET_HPP_
#define FORET_HPP_


#include <vector>
#include "Arbre.hpp"
#include "Sapin.hpp"
#include "Bouleau.hpp"
#include "Chene.hpp"
//#include "Arbre.hpp"
//#include "Arbre.hpp"

using namespace std;


class Foret {

private:
	int pourcentageChene;
	int pourcentageBouleau;
	int pourcentageSapin;
	int ligne;
	int colonne;

	int arbreEnFeu;

public:
	vector<vector<Arbre*>> arbres;
	Foret(int ligne, int colonne, int pourcentageChene,int pourcentageBouleau,int pourcentageSapin);
	Foret(int ligne, int colonne);
	void afficheForet();
	void copieEtat(Foret foret);
};


#endif /* FORET_HPP_ */
