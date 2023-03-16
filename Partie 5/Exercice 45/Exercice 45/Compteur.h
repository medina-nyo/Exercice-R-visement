#ifndef Compteur_h
#define Compteur_h

#include <iostream>

class Compteur
{
    private :
    int valeur_compteur;
    
    public :
    Compteur();
    int getValeurCompteur();
    void incrementation();
    void decrementation();
};
#endif
