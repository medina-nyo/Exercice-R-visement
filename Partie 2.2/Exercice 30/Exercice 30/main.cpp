#include <iostream>
using namespace std;

void supprime_Voyelle(string &chaine)
{
    string voyelle{"aeiouy"};
    char entier = '0', temp;
    
    for(char i=0; i<chaine.size(); i++)
    {
        for(char j=0; j<voyelle.size(); j++)
        {
            if(chaine[i] == voyelle[j])
            {
                chaine[i] = '0';
            }
        }
    }
    
   
    for(char i=0; i<=chaine.size(); i++)
    {
        for(char j=i+1; j<chaine.size(); j++)
        {
            if(entier == chaine[i])
            {
                temp = chaine[i];
                chaine[i] = chaine[j];
                chaine[j] = temp;
            }
        }
    }
    
    for(char i=chaine.size(); i>0; i--)
    {
        if(entier == chaine[i])
        {
            chaine.resize(chaine.size()-1);
        }
    }
    cout << chaine << endl;
}

int main()
{
    string chaine;
    cout << "Entre une chaine de caractére : ";
    cin >> chaine;
    supprime_Voyelle(chaine);
   
}
