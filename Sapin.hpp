/*
 * Arbre.hpp
 *
 *  Created on: 23 mars 2021
 *      Author: GAME1.1
 */

#ifndef Sapin_HPP_
#define Sapin_HPP_

#include <iostream>
#include "Arbre.hpp"
#include "Foret.hpp"

using namespace std;

class Arbre;

class Sapin: public Arbre {

public:
	Sapin();
	void propage(Foret &foret, int ligne, int colonne) override;
	string getImage() override;
};



#endif /* Sapin_HPP_ */
