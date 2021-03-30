/*
 * Arbre.hpp
 *
 *  Created on: 23 mars 2021
 *      Author: GAME1.1
 */

#ifndef Bouleau_HPP_
#define Bouleau_HPP_

#include <iostream>
#include "Arbre.hpp"
#include "Foret.hpp"

using namespace std;

class Arbre;
class Foret;

class Bouleau: public Arbre {

public:
	Bouleau();
	void propage(Foret &foret, int ligne, int colonne) override;
	string getImage() override;
};



#endif /* Bouleau_HPP_ */
