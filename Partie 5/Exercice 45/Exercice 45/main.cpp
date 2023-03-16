#include <iostream>
#include "Compteur.h"

using namespace std;

int main()
{
    Compteur c;
    cout << c.getValeurCompteur() << " ";
    for(int i=0; i<10; i++)
    {
        c.incrementation();
    }
    cout << c.getValeurCompteur() << " ";
    for(int i=0; i<20; i++)
    {
        c.decrementation();
    }
    cout << c.getValeurCompteur() << endl;
    return 0;
}
