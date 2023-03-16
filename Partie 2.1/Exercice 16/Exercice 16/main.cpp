#include <iostream>
using namespace std;

int main()
{
    int tab[10];
    int entier, indice = 0, max{tab[0]};
    
    for(int i=0; i<10; i++)
    {
        cout << "Entier " << i+1 << " : ";
        cin >> entier;
        tab[i] = entier;
    }
   
    for(int i=0; i<10; i++)
    {
       if(max < tab[i])
       {
           max = tab[i];
           indice = i;
       }
    }
    
    cout << "Indice du plus grand élément : " << indice << endl;
   
    return 0;
}
