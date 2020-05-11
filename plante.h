#ifndef PLANTE_CPP
#define PLANTE_CPP

#include <iostream>
#include <string>


class Plante
{
public:
    Plante(std::string nom);
    void arroser();
    void tailler();
    void donnerEngrais();
    void afficherEtat();
    void pousser();
    std::string getNom();

private:
    int a_hydratation;
    std::string a_nom;
    int a_sante;
    int a_taille;
    bool a_enVie;
};

#endif