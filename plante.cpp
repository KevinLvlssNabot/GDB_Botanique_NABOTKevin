#ifndef PLANTE_H
#define PLANTE_H

#include "plante.h"


using namespace std;

Plante::Plante(string nom) : a_hydratation(100), a_nom(nom), a_sante(100), a_taille(0), a_enVie(1) {
 };

void Plante::arroser(){
    a_hydratation += 10;
        if (a_hydratation > 100)
        {
            cout << a_nom << " est trop arrosée, attention !" << endl;
            a_sante -= 20;
        }
        
};

void Plante::tailler(){
    a_sante += 10;
    a_taille -= 5;
        if (a_taille <= 0)
        {
            a_sante -= 10;
            cout << a_nom << " est trop taillée, attention !" << endl;
        }
        
};

void Plante::pousser(){
    if (a_sante > 50)
    {
        a_taille += 10;
    } else if (a_sante <= 50)
    {
        a_taille += 5;
    } else if (a_sante <= 0)
    {
        cout << a_nom << " est morte.." << endl;
        a_enVie = 0;
    }
    
    
    
};

void Plante::afficherEtat(){
    cout << a_nom << "-> ";
    cout << "Hydratation : " << a_hydratation << " ";
    cout << "Sante : " << a_sante << " ";
    cout << "Taille : " << a_taille << endl;
};

#endif