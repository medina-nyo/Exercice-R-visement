#include "Menu.h"
#include <iostream>

using namespace std;

int choix()
{
    int i;
    
    cout << "***** MENU *****\n" << endl;
    cout << "1. Ajouter un élèves " << endl;
    cout << "2. Afficher le répertoire" << endl;
    cout << "3. Quitter\n" << endl;
    
    cout << "Entre ton choix : ";
    cin >> i;
    
    cout << endl;
    return i;
}

bool traiter_choix(Repertoire_Eleves &r, int i)
{

    Eleves e;
    int coef_ex;
    bool fini = false;
    
    switch(i)
    {
        case 1:
            saisir_Information(e, coef_ex);
            ajoute_Eleves(r, e);
           
            break;
        case 2:
            affichage_Repertoire(r,coef_ex);
            break;
        case 3:
            fini = true;
            break;
    }
    
    return fini;
}

void menu(Repertoire_Eleves &r)
{
    bool fini; int i;
    
    do
        {
            i = choix();
            fini = traiter_choix(r, i);
    
        }while(fini==false);
}
