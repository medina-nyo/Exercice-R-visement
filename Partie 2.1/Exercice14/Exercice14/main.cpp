#include <iostream>
using namespace std;

int main()
{
    int tab[10];
    int entier, compteur =0;
    
    for(int i=0; i<10; i++)
    {
        cout << "Entier " << i+1 << " : " ;
        cin >> entier;
        tab[i] = entier;
        
        if(tab[i] >= 10)
        {
            ++compteur;
        }
    }
    
    cout << compteur << endl;
   
    return 0;
}
