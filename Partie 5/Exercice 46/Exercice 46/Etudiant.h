#ifndef Etudiant_h
#define Etudiant_h

#include <iostream>
using namespace std;

int const max_notes = 10;
class Etudiant
{
    private:
    string nom, prenom;
    float tab_Notes[max_notes];
    
    public:
    void saisie();
    void affichage();
    float moyenne();
    int admis();
    int exae_quo(Etudiant e);
};

#endif
