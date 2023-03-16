#include "Eleves.h"
#include <iostream>

using namespace std;

void saisir_Information (Eleves &e, int &coef_ex)
{
    cout << "Entre le nom : ";
    cin >> e.nom;
    
    cout << "Entre le prénom : ";
    cin >> e.prenom;
    
    cout << "Entre la note du devoir surveillé : ";
    cin >> e.note_ds;
    
    cout << "Entre le coefficient du devoir surveillé : ";
    cin >> e.coef_ds;
    
    cout << "Entre la note d'examen : ";
    cin >> e.note_ex;
    
    cout << "Entre le coefficent de la note d'examen : ";
    cin >> coef_ex;
    cout << endl;
}

void moyenne (Eleves &e, int coef_ex)
{
    e.moyenne = ((e.note_ds * e.coef_ds + e.note_ex * coef_ex) / (e.coef_ds + coef_ex));
}

void affichage (Eleves &e, int coef_ex)
{

    cout << "\nNom : " << e.nom << endl;
    cout << "Prénom : " << e.prenom << endl;
    
    moyenne(e, coef_ex);
    cout << "Moyenne : " << e.moyenne << endl;
    cout << endl;
}
