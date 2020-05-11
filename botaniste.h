#ifndef BOTANISTE_H
#define BOTANISTE_H

#include <iostream>
#include <string>
#include "plante.h"

class Botaniste
{
    public:
        Botaniste(std::string nom);
        void arroser(Plante &cible);
        void tailler(Plante &cible);
        void donnerEngrais(Plante &cible);
        std::string getNomBotaniste();
    
    private:
        std::string p_nom;
        int a_engrais;
};

#endif