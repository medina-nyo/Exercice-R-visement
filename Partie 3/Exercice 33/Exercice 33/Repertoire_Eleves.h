#ifndef Repertoire_Eleves_h
#define Repertoire_Eleves_h

#include "Eleves.h"
#include <iostream>

int const max_Eleves = 18;

struct Repertoire_Eleves
{
    Eleves repertoire[max_Eleves];
    int nbr;
};

void initialise_Repertoire (Repertoire_Eleves &r);
void ajoute_Eleves (Repertoire_Eleves &r, Eleves const &e);
void affichage_Repertoire (Repertoire_Eleves  &r, int coef_ex);
#endif
