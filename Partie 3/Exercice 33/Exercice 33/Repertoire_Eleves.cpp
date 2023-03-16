#include "Repertoire_Eleves.h"
#include <iostream>

using namespace std;

void initialise_Repertoire (Repertoire_Eleves &r)
{
    r.nbr = 0;
}

void ajoute_Eleves (Repertoire_Eleves &r, Eleves const &e)
{
    if(r.nbr <= max_Eleves)
    {
        r.repertoire[r.nbr] = e;
        ++ r.nbr;
    }
    else {
        cout << "Répertoire complet." << endl;
    }
}

void affichage_Repertoire (Repertoire_Eleves &r, int coef_ex)
{
    if(r.nbr == 0)
    {
        cout << "Répertoire vide." << endl;
    }
    else
    {
        for(int i=0; i<r.nbr; i++)
        {
            affichage(r.repertoire[i], coef_ex);
        }
    }
}
