#include <iostream>
#include <numeric>
using namespace std;

int main()
{
    int entier;
    cout << "Entre une valeur comprise entre 0 et 20 (bornes incluses) : ";
    cin >> entier;
    
    while( entier < 0 || entier > 20)
    {
        cout << "Erreur, recommence. \nEntre une valeur comprise entre 0 et 20 (bornes incluses) : ";
        cin >> entier;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    
    if(entier >= 0 && entier <= 20)
    {
        entier += 17;
    }
    
    cout << "Entier = " << entier << endl;
   
    return 0;
}
