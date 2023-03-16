#include <iostream>
using namespace std;

int f(int t[], int n)
{
    int compt = 0;
    
    for(int i=0; i<n; i++)
    {
        if(t[i] >= 0 && t[i] <= 10)
        {
            ++compt;
        }
    }
    return compt;
}

int main()
{
    int n, *t;
    cout << "Entre la taille du tableau : ";
    cin >> n;
    
    t = new int[n];
    for(int i=0; i<n; i++)
    {
        cout << "entier " << i+1 << " : ";
        cin >> t[i];
    }
    
    int compt = f(t, n);
    cout << "Nombre de valeurs comprise entre 0 et 10 : " << compt << endl;
    
    return 0;
}
