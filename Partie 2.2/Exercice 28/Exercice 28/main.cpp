#include <iostream>
using namespace std;

bool suite_De_Chiffre(string chaine, int &entier_E)
{
    bool suiteChiffre = true;
    int compteur=0;
    
    for(int i=0; i<chaine.size(); i++)
    {
        if(i==0 && chaine[i] == '0')
        {
            suiteChiffre = false;
            break;
        }
        else if(!isdigit(chaine[i]))
        {
            suiteChiffre = false;
            break;
        }
        else
        {
            suiteChiffre = true;
            ++compteur;
        }
    }
    
    if(compteur == chaine.size())
    {
        entier_E = stoi(chaine);
    }
    return suiteChiffre;
}

int main()
{
    bool valide;
    string chaine;
    int entier_E = 0;
    
    cout << "Entre une chaine de caractere : ";
    cin >> chaine;
    valide = suite_De_Chiffre(chaine, entier_E);
   
    if(!valide)
    {
        cout << boolalpha << valide << endl;
    }
    else
    {
        cout << entier_E << endl;
    }
    

    return 0;
}
