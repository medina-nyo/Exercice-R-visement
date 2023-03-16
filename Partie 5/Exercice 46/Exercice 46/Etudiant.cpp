#include "Etudiant.h"
#include <iostream>

using namespace std;

void Etudiant::saisie()
{
    cout << "Entre les informations de l'étudiant.\n" << endl;
    cout << "Nom : ";
    cin >> nom;
    
    cout << "Prénom : ";
    cin >> prenom;
    
    for(int i=0; i<10; i++)
    {
        cout << "note " << i+1 << " : ";
        cin >> tab_Notes[i];
    }
    cout << endl;
}

void Etudiant::affichage()
{
    cout << "Nom : " << nom << endl;
    cout << "Prénom : " << prenom << endl;
    
    cout << "Notes de l'étudiant : ";
    for(int i=0; i<10; i++)
    {
        cout << tab_Notes[i] << " ";
    }
    cout << endl;
}

float Etudiant::moyenne()
{
    float moyenne = 0;
    
    for(int i=0; i<10; i++)
    {
        moyenne += tab_Notes[i];
    }
    
    return moyenne /= max_notes;
}

int Etudiant::admis()
{
    if(moyenne()>= 0)
    {
        return 1;
    }
    return 0;
}

int Etudiant::exae_quo(Etudiant e)
{
    if(moyenne() == e.moyenne())
    {
        return 1;
    }
    return 0;
}
