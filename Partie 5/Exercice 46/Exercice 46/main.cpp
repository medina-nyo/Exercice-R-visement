#include <iostream>
#include "Etudiant.h"

using namespace std;

int main()
{
    int admis, exae_quo;
    float moyenne;
    Etudiant e, a;
    
    e.saisie();
    e.affichage();
    moyenne = e.moyenne();
    cout << "Moyenne : " << moyenne << endl;
    
    admis = e.admis();
    cout << "Admis : " << admis << endl << endl;
    
    a.saisie();
    exae_quo = e.exae_quo(a);
    cout << "Deux élèves ont t'il la même moyenne : " << exae_quo << endl;
    
    return 0;
}
