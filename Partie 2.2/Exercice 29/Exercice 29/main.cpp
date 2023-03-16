#include <iostream>

using namespace std;

void transformation_Chaine (string &chaine)
{
    int compteur=0;
   
    for(char i=0; i<chaine.size(); i++)
    {
        if(isdigit(chaine[i]))
        {
            ++compteur;
        }
        else if(chaine[i] >= 'a' && chaine[i] <= 'z' )
        {
            chaine[i] = chaine[i] + ('A'-'a');
        }
    }
    
    if(compteur == chaine.size())
    {
        cout << "Impossible de transformer la chaine de chiffre en une chaine de caractere en majuscule." << endl;
    }
    else{
        cout << "Voici la phrase en majuscule : " << chaine << endl;
    }
    
}

int main()
{
    string chaine;
    cout << "Entre une chaine de caractére : ";
    cin >> chaine;
   
    transformation_Chaine(chaine);

    return 0;
}
