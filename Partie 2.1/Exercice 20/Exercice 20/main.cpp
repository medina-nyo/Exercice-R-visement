#include <iostream>
using namespace std;

int const N=10;
int main()
{
    int tab[N];
    int entier, temp;
    
    for(int i=0; i<N; i++)
    {
        cout << "Entier " << i+1 << " : ";
        cin >> entier;
        tab[i] = entier;
    }

    for(int i=0; i<N; i++)
    {
        for(int j= i+1; j<N; j++)
        {
            if(tab[i] > tab[j])
            {
                temp = tab[j];
                tab[j] = tab[i];
                tab[i] = temp;
            }
        }
    }
    
    for(int i=0; i<N; i++)
    {
        cout << tab[i] << " ";
    }
    
    return 0;
}
