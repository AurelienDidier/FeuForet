#ifndef PasArbre_HPP_
#define PasArbre_HPP_

#include <iostream>
#include "Foret.hpp"
#include "Arbre.hpp"

using namespace std;

class Foret;
class Arbre;

class PasArbre: public Arbre {
	
public:
	void propage(Foret &foret, int ligne, int colonne) override ;
	PasArbre();
	~PasArbre();
	virtual string getImage() override ;

};

#endif /* PasArbre_HPP_ */
