#include <iostream>
#include <string>
#include <vector>

#include "plante.h"
#include "plante.cpp"
#include "botaniste.h"
#include "botaniste.cpp"
#include "fleur.h"
#include "fleur.cpp"

using namespace std;

int main(){
    Plante ibiscus("Ibiscus");
    Botaniste greenhand ("Greenhand");
    vector<Plante> jardin(Plante ibiscus);

        ibiscus.afficherEtat();
        ibiscus.arroser();
        greenhand.acheterPlante();


    return 0;
}