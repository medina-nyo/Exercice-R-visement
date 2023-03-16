#include<iostream>
using namespace std;

int main()
{
    int tab[10];
    int choix, entier, temp, compteur=0, nbr=0;
    
    do
    {
        cout << "***** Menu *****\n" << endl;
        cout << "1. Ajouter un entier\n";
        cout << "2. Afficher la listes des entiers\n";
        cout << "3. Supprimer le premier entier ayant une valeur donnée\n";
        cout << "4. Supprimer tous les entiers ayant une valeur donnée\n";
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
                    cout << "L'entier a bien été ajouté.\n" << endl;
                    
                    for(int i=0; i<nbr; i++)
                    {
                        for(int j=i+1; j<nbr; j++)
                        {
                            if(tab[i] > tab[j])
                            {
                                temp = tab[j];
                                tab[j] = tab[i];
                                tab[i] = temp;
                            }
                        }
                    }
                }
                else
                {
                    cout << "Impossible tableau complet.\n" << endl;
                }
                break;
                
            case 2:
                
                cout << "\nVoici la listes des entiers : ";
                if(nbr != 0)
                {
                    for(int i=0; i<nbr; i++)
                    {
                        cout << tab[i] << " ";
                    }
                }
                else
                {
                    cout << "Impossible tableau vide.\n" << endl;
                }
                cout << endl;
                break;
                
            case 3:
                cout << "\nTapez la valeur à supprimer : ";
                cin >> entier;
                if(nbr != 0)
                {
                    for(int i=0; i<nbr; i++)
                    {
                        if(entier == tab[i])
                        {
                            temp = tab[i];
                            tab[i] = tab[i+1];
                            tab[i+1] = temp;
                        }
                        else
                        {
                            ++compteur;
                        }
                    }
                    
                    if(compteur == nbr)
                    {
                        compteur = 0;
                        cout << "La valeur donnée n'existe pas dans le tableau.\n" << endl;
                    
                    }
                    else
                    {
                        --nbr;
                        cout << "La valeur donnée a bien été supprimé.\n" << endl;
                    }
                }else
                {
                    cout << "Impossible tableau vide.\n" << endl;
                }
                break;
                
            case 4:
                cout << "\nTapez la valeur à supprimer : ";
                cin >> entier;
                
                if(nbr!=0)
                {
                    for(int i=0; i<=nbr; i++)
                    {
                        for(int j=i+1; j<nbr; j++)
                        {
                            if(entier == tab[i])
                            {
                                temp = tab[i];
                                tab[i] = tab[j];
                                tab[j] = temp;
                            }
                            else
                            {
                                ++compteur;
                            }
                        }
                    }
                    
                    if(compteur == nbr*2)
                    {
                        compteur = 0;
                        cout << "La valeur donnée n'existe pas dans le tableau.\n" << endl;
                    
                    }
                    else
                    {
                        for(int i=nbr; i>0; i--)
                        {
                            if(entier == tab[i])
                            {
                                --nbr;
                            }
                        }
                        cout << "La valeur donnée a bien été supprimé.\n" << endl;
                    }
                }else{
                    cout << "Impossible tableau vide.\n" << endl;
                }
                            
                break;
                
            case 5:
                exit(5);
                break;
        }
    }while(choix != 5);
   
    return 0;
}
