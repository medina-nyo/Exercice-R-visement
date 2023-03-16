#include <iostream>
using namespace std;

int main()
{
    int tab[10];
    int entier, entierV;
    bool entierV_existant = false;
    
    for(int i=0; i<10; i++)
    {
        cout << "Entier " << i+1 << " : ";
        cin >> entier;
        tab[i] = entier;
    }
    
    cout << "Entier V : ";
    cin >> entierV;
    
    for(int i=0; i<10; i++)
    {
        if(tab[i] == entierV)
        {
            entierV_existant = true;
            cout << "V se trouve dans le tableau." << endl;
            break;
        }
    }
    
    if(!entierV_existant)
    {
        cout << "V ne se trouve pas dans le tableau." << endl;
    }
    return 0;
}
