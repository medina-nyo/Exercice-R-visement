#ifndef Eleves_h
#define Eleves_h

#include <iostream>

struct Eleves
{
    char nom[10];
    char prenom[10];
    double note_ds, note_ex, moyenne;
    int coef_ds;
};

void saisir_Information(Eleves &e, int &coef_ex);
void moyenne(Eleves &e, int coef_ex);
void affichage(Eleves &e,int coef_ex);

#endif
