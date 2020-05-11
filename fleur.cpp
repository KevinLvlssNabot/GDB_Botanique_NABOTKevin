#ifndef FLEUR_H
#define FLEUR_H

#include "fleur.h"
#include "plante.h"
#include "plante.cpp"

using namespace std;

Fleur::Fleur(string nom, int jourPasses) : Plante(nom){

};

void Plante::pousser(){
    if (a_sante > 50)
    {
        a_taille += 5;
    }
    else if (a_sante <= 50)
    {
        a_taille += 2;
    }
    else if (a_sante <= 0)
    {
        cout << a_nom << " est morte.." << endl;
        a_enVie = 0;
    }
    if (a_taille >= 100)
    {
        cout << a_nom << " est arrivée à maturité." << endl;
        a_valeur = 100;
    }
    a_jourPasses ++;
        if (a_jourPasses == 3)
        {
            cout << a_nom << " est fannée " << endl;
            a_valeur = 1;
        }
        
};

#endif