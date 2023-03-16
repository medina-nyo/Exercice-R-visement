#include <iostream>
using namespace std;

int main()
{
    int choix, entier, nbr=0;
    int tab[10];
    
    do
    {
        cout << "***** Menu *****\n" << endl;
        cout << "1. Ajouter un entier\n";
        cout << "2. Afficher la listes des entiers\n";
        cout << "3. Supprimer dernier entier de la liste\n";
        cout << "4. Afficher la dernière note tapée\n";
        cout << "5. Quitter\n";
        cout << endl;

        cout << "Entre un choix : ";
        cin >> choix;
        
        switch (choix)
        {
            case 1:
                
                cout << "\nEntre un entier : ";
                cin >> entier;
                
                if(nbr < 10)
                {
                    tab[nbr] = entier;
                    ++nbr;
                    cout << "Votre entier a bien été ajouté.\n" << endl;
                }
                else{
                    cout << "Impossible le tableau est plein.\n" << endl;
                }
                break;
                
            case 2:
                if(nbr != 0)
                {
                    cout << "\nVoici la liste des entiers : ";
                    for(int i=0; i<nbr; i++)
                    {
                        cout << tab[i] << " ";
                    }
                    cout << endl << endl;
                }
                else
                {
                    cout << "\nImpossible tableau vide.\n" << endl;
                }
               
                break;
                
            case 3:
                if(nbr != 0)
                {
                    --nbr;
                    cout << "\nLe dernier entier a bien été supprimé.\n" << endl;
                }
                else
                {
                    cout << "\nImpossible tableau vide.\n" << endl;
                }
                break;
                
            case 4:
                if(nbr != 0)
                {
                    cout << "\nLa derniére note saissie est : " << tab[nbr-1] << endl;
                }
                else{
                    cout << "\nImpossible tableau vide.\n" << endl;
                }
                
                break;
                
            case 5:
                exit(5);
                break;
        }
    }while (choix != 5);
   

    return 0;
}
