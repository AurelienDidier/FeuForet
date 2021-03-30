/*
 * Arbre.hpp
 *
 *  Created on: 23 mars 2021
 *      Author: GAME1.1
 */

#ifndef ARBRE_HPP_
#define ARBRE_HPP_

#include <iostream>


using namespace std;

enum Etat { enVie, enFeu, enCendre};

class Foret;
class Arbre {

public:
	Etat etat;
	void brule();
	virtual void propage(Foret &foret, int ligne, int colonne);
	virtual string getImage();
};



#endif /* ARBRE_HPP_ */
