#include <iostream>
#include <string>

#include "plante.h"
#include "plante.cpp"
#include "botaniste.h"
#include "botaniste.cpp"

using namespace std;

int main(){
    Plante ibiscus("Ibiscus");
        
        ibiscus.afficherEtat();
        ibiscus.arroser();

        return 0;
}