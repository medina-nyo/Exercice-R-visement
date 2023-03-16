#ifndef Menu_h
#define Menu_h

#include "Repertoire_Eleves.h"
#include <iostream>

int choix();
bool traiter_choix(Repertoire_Eleves &r, int i);
void menu(Repertoire_Eleves &r);

#endif
