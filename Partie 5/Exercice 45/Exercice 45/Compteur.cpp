#include "Compteur.h"
#include <iostream>

using namespace std;

Compteur::Compteur()
{
    valeur_compteur = 0;
}

int Compteur::getValeurCompteur()
{
    return valeur_compteur;
}
void Compteur::incrementation()
{
    valeur_compteur += 1;
}

void Compteur::decrementation()
{
    
    if(valeur_compteur > 0)
    {
        valeur_compteur -= 1;
    }
}

