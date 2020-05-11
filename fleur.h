#ifndef FLEUR_CPP
#define FLEUR_CPP

#include <iostream>
#include <string>
#include "plante.h"
#include "plante.cpp"

class Fleur : public Plante
{
public:
    Fleur(std::string a_nom, int a_jourPasses);

private:
    std::string a_nom;
    int a_hydratation;
    int a_taille;
    bool a_enVie;
    int a_valeur;
    int a_jourPasses;
};

#endif