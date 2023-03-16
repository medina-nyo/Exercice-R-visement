#include <iostream>
using namespace std;

int const N = 10;
int main()
{
    int entier, entierV, temp;
    int tab[N];
    
    for(int i=0; i<N; i++)
    {
        cout << "Entier " << i+1 << " : ";
        cin >> entier;
        tab[i] = entier;
    }
    
    cout << endl;
    cout << "Entier V : ";
    cin >> entierV;
    cout << endl;
    
    
    for(int i=0; i<N; i++)
    {
        for(int j=i+1; j<N; j++)
        {
            if(tab[i] == entierV)
            {
                temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
        }
        if(i == N-1)
        {
            tab[i] = 0;
        }
    }
    
    for(int i=0; i<N; i++)
    {
        cout << tab[i] << " ";
    }
    return 0;
}
