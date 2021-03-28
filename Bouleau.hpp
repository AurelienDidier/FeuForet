#ifndef Bouleau_HPP_
#define Bouleau_HPP_

#include <iostream>
#include "Foret.hpp"
#include "Arbre.hpp"

using namespace std;

class Foret;
class Arbre;

class Bouleau: public Arbre {
	
public:
	void propage(Foret &foret, int ligne, int colonne) override ;
	Bouleau();
	Bouleau(Etat etatInit);
	~Bouleau();
	virtual string getImage() override ;
	Arbre clone();
};

#endif /* Bouleau_HPP_ */
