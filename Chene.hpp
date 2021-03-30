/*
 * Arbre.hpp
 *
 *  Created on: 23 mars 2021
 *      Author: GAME1.1
 */

#ifndef Chene_HPP_
#define Chene_HPP_

#include <iostream>
#include "Arbre.hpp"
#include "Foret.hpp"

using namespace std;

class Arbre;
class Foret;

class Chene: public Arbre {

public:
	Chene();
	void propage(Foret &foret, int ligne, int colonne) override;
	string getImage() override;
};



#endif /* Chene_HPP_ */
