#ifndef Arbre_HPP_
#define Arbre_HPP_

#include <iostream>
//#include "Foret.hpp"

using namespace std;

enum Etat {EnVie, EnFeu, EnCendre};

class Foret;

class Arbre {

	
public:
	Etat etat;
	virtual void propage(Foret &foret, int ligne, int colonne);
	void brule();
	virtual string getImage();
	virtual ~Arbre();
	Arbre clone();
//	Etat getEtat();
};

#endif /* Arbre_HPP_ */
