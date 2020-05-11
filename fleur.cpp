#ifndef FLEUR_H
#define FLEUR_H

#include "fleur.cpp"
#include "plante.h"
#include "plante.cpp"

using namespace std;

Fleur::Fleur(int hydratation , string nom, int taille, bool enVie) : Plante(hydratation, nom, taille, enVie){};


#endif