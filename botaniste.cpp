#ifndef BOTANISTE_CPP
#define BOTANISTE_CPP

#include "botaniste.h"
#include "plante.h"
#include "plante.cpp"
#include "vector"


using namespace std;

Botaniste::Botaniste(string nom) : p_nom(nom), a_nbrePlantes(1), a_argent(0), a_engrais(0){

                                                                              };

string Botaniste::getNomBotaniste()
{
    return p_nom;
};

void Botaniste::arroser(Plante &cible)
{
    cible.arroser();
    cout << p_nom + " arrose " + cible.getNom() << endl;
};

void Botaniste::tailler(Plante &cible)
{
    cible.tailler();
    cout << p_nom + " taille " + cible.getNom() << endl;
};

void Botaniste::donnerEngrais(Plante &cible)
{
    cible.donnerEngrais();
    a_engrais -= 1;
    cout << p_nom + " donne de l'engrais à " + cible.getNom() << endl;
};

void Botaniste::acheterPlante()
{
    string nom;
    a_argent -= 10;
    a_nbrePlantes++;
    cout << "Comment voulez-vous appeler cette plante ?" << endl;
    cin >> nom;
    new Plante(nom);
    jardin.push_back(nom);
};

void Botaniste::vendrePlante(Plante &cible)
{
    a_argent += cible.getValeur();
    a_nbrePlantes -= 1;
    cout << "Vous vendez " << cible.getNom() << endl;
    jardin.pop_back(Plante &cible);
};

void Botaniste::dormir(Plante &cible){
        for (int i = 0; i < jardin.size(); i++)
        {
            cible.pousser();
        }
        
};

#endif