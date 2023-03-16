#include <iostream>
#include <numeric>
using namespace std;

int main()
{
    int tabA[10], tabB[21];
    int i=0, entier;
        
   do
    {
        cout << "Entre un entier : ";
        cin >> entier;
        
        if(entier < 0 || entier > 20)
        {
            cout << "\nErreur, recommence." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
        }
        tabA[i] = entier;
        ++i;
    }while(i<10);
       
    for(int i=0; i<21; i++)
    {
        tabB[i] = 0;
    }
   
    for(int i=0; i<10; i++)
    {
        tabB[tabA[i]] = tabB[tabA[i]] + 1 ;
    }
    
    for(int i=0; i<21; i++)
    {
        cout << "Le nombre " << i << " a été tapé " << tabB[i] << " fois." << endl;
    }
    
   
    
    return 0;
}
