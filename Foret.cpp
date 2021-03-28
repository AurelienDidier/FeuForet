#include "Foret.hpp"
#include "Arbre.hpp"
#include "Bouleau.hpp"
#include "PasArbre.hpp"
#include "Chene.hpp"
#include <iostream>
#include <random>
#include <vector>

using namespace std;

inline Foret::Foret(int ligneInit, int colonneInit, int pourcentagePeuplierInit,
		int pourcentageCheneInit, int pourcentageBouleauInit) {
	ligne = ligneInit;
	colonne = colonneInit;
	pourcentageBouleau = pourcentageBouleauInit;
	pourcentageChene = pourcentageCheneInit;
	pourcentagePeuplier = pourcentagePeuplierInit;
	int arbreEnFeu = 0;

//	vector<vector<Arbre>> arbres(ligne, vector<Arbre>(colonne, PasArbre()));

	for (int i = 0; i < ligne; i++) {
		vector<Arbre*> ligne;
		arbres.push_back(ligne);
		for (int j = 0; j < colonne; j++) {
			int proba = rand() % 100;
			if (proba < pourcentageChene) {
				arbres[i].push_back(new Chene());
			} else if (proba < pourcentageBouleau + pourcentagePeuplier) {
				arbres[i].push_back(new Bouleau());
			} else {
				arbres[i].push_back(new PasArbre());
			}
		}
	}
}
inline int Foret::getNbArbreEnFeu() {
	return 0;
}
inline Foret::Foret(Foret &foret) {
	ligne = foret.ligne;
	colonne = foret.colonne;
	pourcentageBouleau = foret.pourcentageBouleau;
	pourcentageChene = foret.pourcentageChene;
	pourcentagePeuplier = foret.pourcentagePeuplier;
	int arbreEnFeu = 0;

	for (int i=0; i < ligne; i++) {
		vector<Arbre*> ligne;
		arbres.push_back(ligne);
		for (int j=0; j < colonne; j++) {
		    auto copyArbre = foret.arbres[i][j]->clone();
				arbres[i].push_back(&copyArbre);
		}
	}
}
inline Foret::~Foret() {
}
inline void Foret::afficheForet() {
	for (int i = 0; i < ligne; i++) {
		for (int j = 0; j < colonne; j++) {
			cout << this->arbres[i][j]->getImage();
		}
		cout << endl;
	}
}

inline void Foret::copieEtat(Foret foret){
	for (int i=0; i < ligne; i++) {
		for (int j=0; j < colonne; j++) {
		    this->arbres[i][j]->etat= foret.arbres[i][j]->etat;
		}
	}
}
