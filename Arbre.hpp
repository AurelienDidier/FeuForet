#ifndef Arbre_HPP_
#define Arbre_HPP_

#include <iostream>
//#include "Foret.hpp"

using namespace std;

enum Etat {EnVie, EnFeu, EnCendre};

class Foret;

class Arbre {

protected:
	Etat etat;
	
public:
	virtual void propage(Foret &foret, int ligne, int colonne);
	void brule();
	virtual string getImage();
	virtual ~Arbre();
//	Etat getEtat();
};

#endif /* Arbre_HPP_ */
