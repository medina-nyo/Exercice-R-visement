#include <iostream>
using namespace std;

int const N = 10;
int main()
{
    int tab[N];
    int entier, comptC =0, comptD =0, comptConst = 0;
    
    for(int i=0; i<N; i++)
    {
        cout << "Entier " << i+1 << " : ";
        cin >> entier;
        tab[i] = entier;
    }
    
    for(int i=0; i<N; i++)
    {
        if(i != N-1)
        {
            if(tab[i] == tab[i+1])
            {
                ++comptConst;
            }
            else if (tab[i]<tab[i+1])
            {
                ++comptC;
            }
            else
            {
                ++comptD;
            }
        }
        
    }
    
    if(comptConst == N-1 )
    {
        cout << "Le tableau est constant." << endl;
    }
    else if (comptC == N-1)
    {
        cout << "Le tableau est croissant." << endl;
    }
    else if (comptD == N-1)
    {
        cout << "Le tableau est décroissant." << endl;
    }
    else
    {
        cout << "Le tableau est quelconque." << endl;
    }
    
    return 0;
}
