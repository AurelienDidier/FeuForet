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
#include <unistd.h>
using namespace std;

int main() {
 	int ligne = 50;
	int colonne= 50;
	Foret foret(ligne, colonne, 40, 40, 40);
	Foret copy(ligne, colonne);
	copy.copieEtat(foret);
	foret.arbres[ligne/2][colonne/2]->brule();
	for (int count=0; count<100;count++) {

		for (int i=0;i<foret.colonne; i++) {
			for (int j=0;j<foret.ligne; j++) {
				foret.arbres[i][j]->propage(copy, i, j);
			}
		}
		foret.afficheForet();
		foret.copieEtat(copy);
		sleep(1);
	}
}
#endif /* SkillTree_VosInitiales_HPP_ */
