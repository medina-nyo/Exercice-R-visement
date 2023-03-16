#include <iostream>
#include <numeric>
using namespace std;

int const N = 10;
int main()
{
    int tab[N];
    int entier, entierV, indice;
    
    for(int n=0; n<N; n++)
    {
        cout << "Entier " << n+1 << " : ";
        cin >> entier;
        tab[n] = entier;
    }
    
    cout << endl;
    cout << "Entier V : ";
    cin >> entierV;
    
    cout << endl;
    cout << "Entre un indice compris entre 0 et 9 : ";
    cin >> indice;
    
    
    while(indice<0 || indice > 9)
    {
        cout << "Erreur, recommence.\nEntre un indice compris entre 0 et 9 : ";
        cin >> indice;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
    }
    
    for(int i=0; i<1; i++)
    {
        for(int j= N-1; j >= indice; j--)
        {
            tab[j] = tab[j-1];
            
            if(j == indice)
            {
                tab[j] = entierV;
            }
        }
    }
    
    for(int k=0; k<N; k++)
    {
        cout << tab[k] << " ";
    }
   
    return 0;
}
