#include <iostream>
using namespace std;

bool f(int t[], int n)
{
    bool b;
    int compt = 0;
    
    for(int i=0; i<n; i++)
    {
        if(t[i] >= 0 && t[i] <= 10)
        {
            ++compt;
        }
    }
   
    if(compt >= 1 )
    {
        b = true;
    }
    else
    {
        b = false;
    }
    
    return b;
}

int main() {
    
    int n;
    cout << "Entre la taille du tableau : ";
    cin >> n;
    
    int *t = new int[n];
    for(int i=0; i<n; i++)
    {
        cout << "entier " << i+1 << " : ";
        cin >> t[i];
    }
    
    cout << "Existe t'il une valeur comprise entre 0 et 10 : " << boolalpha << f(t, n) << endl;
    
    return 0;
}
