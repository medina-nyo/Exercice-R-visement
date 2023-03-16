#include "Menu.h"
#include <iostream>

using namespace std;

int choix ()
{
    int i;
    
    cout << "\n***** MENU *****\n" << endl;
    cout << "1. Modifier la largeur\n";
    cout << "2. Modifier la hauteur\n";
    cout << "3. Calcul du perimetre\n";
    cout << "4. Calcul de la surface\n";
    cout << "5. Affichage\n";
    cout << "6.Quitter\n" << endl;
    
    cout << "Entre ton choix : ";
    cin >> i;
    
    cout << endl;
    
    return i;
}

bool traiter_Choix(Rectangle &r, int i)
{
    bool fini = false;
    
    switch (i)
    {
        case 1:
            double l;
            cout << "Entre une largeur : ";
            cin >> l;
            r.setLargeur(l);
            break;
            
        case 2:
            double h;
            cout << "Entre une hauteur : ";
            cin >> h;
            r.setHauteur(h);
            break;
        
        case 3:
            cout << "Périmetre : " << r.perimetre() << endl;

            break;
            
        case 4:
            cout << "Surface : " << r.surface() << endl;
           
            break;
            
        case 5:
            int largeur, hauteur;
            largeur = r.getLargeur();
            hauteur = r.getHauteur();
            
            if(largeur == 0 && hauteur == 0)
            {
                cout << "Aucun rectangle." << endl;
            }
            else{
                
                for(int i=0; i<largeur; i++)
                {
                    for(int j=0; j<hauteur; j++)
                    {
                        cout << "*" ;
                    }
                    cout << endl;
                }
            }
        
            break;
            
        case 6:
            fini = true;
            break;
    }
    return fini;
}

void menu(Rectangle &r)
{
    bool fini;
    int i;
    
    do{
        i = choix();
        fini = traiter_Choix(r, i);
        
    }while(fini == false);
}
