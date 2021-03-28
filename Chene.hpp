#ifndef Chene_HPP_
#define Chene_HPP_

#include <iostream>
#include "Foret.hpp"
#include "Chene.hpp"

using namespace std;

class Foret;
class Arbre;

class Chene: public Arbre {
	
public:
	Chene();
	Chene(Etat etatInit);
	~Chene();
	void propage(Foret &foret, int ligne, int colonne) override ;
	virtual string getImage() override ;
	Arbre clone();

};

#endif /* Chene_HPP_ */
