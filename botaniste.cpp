#ifndef BOTANISTE_CPP
#define BOTANISTE_CPP

#include "botaniste.h"
#include "plante.h"

using namespace std;

Botaniste::Botaniste(string nom): p_nom(nom)
{

};

string Botaniste::getNomBotaniste(){
    return p_nom;
};


#endif