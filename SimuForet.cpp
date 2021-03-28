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
 	int ligne = 10;
	int colonne= 10;
	Foret foret(ligne, colonne, 30, 20, 20);
	Foret copy=foret;
	foret.arbres[0][0]->brule();
	for (int count=0; count<100;count++) {
		for (int i=0;i<foret.colonne; i++) {
			for (int j=0;j<foret.ligne; j++) {
				foret.arbres[i][j]->propage(copy, i, j);
			}
		}
		foret.afficheForet();
//		copy.afficheForet();
		foret.copieEtat(copy);
	}
}
#endif /* SkillTree_VosInitiales_HPP_ */
