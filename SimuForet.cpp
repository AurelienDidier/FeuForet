#ifndef SkillTree_HPP_
#define SkillTree_HPP_

#include <iostream>
#include <vector>
#include "Arbre.hpp"
//#include "Foret.hpp"
#include "Foret.cpp"
#include "Bouleau.hpp"
#include "Chene.hpp"
#include "PasArbre.hpp"
using namespace std;

int main() {
 	int ligne = 3;
	int colonne= 3;
	Foret foret(ligne, colonne, 30, 20, 20);
	Foret copy=foret;
	foret.arbres[ligne/2][colonne/2]->brule();
	for (int count=0; count<100;count++) {
		for (int i=0;i<foret.colonne; i++) {
			for (int j=0;j<foret.ligne; j++) {
				Arbre *p=foret.arbres[i][j];
				p->propage(copy, i, j);
			}
		}
		foret.afficheForet();
		foret=copy;
	}
}
#endif /* SkillTree_VosInitiales_HPP_ */
