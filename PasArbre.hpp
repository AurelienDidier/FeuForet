/*
 * Arbre.hpp
 *
 *  Created on: 23 mars 2021
 *      Author: GAME1.1
 */

#ifndef PasArbre_HPP_
#define PasArbre_HPP_

#include <iostream>
#include "Arbre.hpp"

using namespace std;

class Arbre;
class Foret;

class PasArbre: public Arbre {

public:
	PasArbre();
	void propage(Foret &foret, int ligne, int colonne) override;
	string getImage() override;
};



#endif /* PasArbre_HPP_ */
