#include <iostream>
using namespace std;

int const N=10;
int const M=20;
int main()
{
    int tab_A[N], tab_B[N], tab_C[M];
    int entier_A, i=0, entier_B, n=0;
   
    cout << "Tableau A\n" << endl;
    while(i <N)
    {
        cout << "entier " << i+1 << " : ";
        cin >> entier_A;
        tab_A[i] = entier_A;
        ++i;
    }
    
    cout << endl << endl;
    cout << "Tableau B\n" << endl;
    while(n <N)
    {
        cout << "entier " << n+1 << " : ";
        cin >> entier_B;
        tab_B[n] = entier_B;
        ++n;
    }
    
    for(int i=0; i<M; i++)
    {
        tab_C[i] = tab_A[i];
        
        if(i==N)
        {
            while(i<M)
            {
                tab_C[i] = tab_B[(N+i) - M];
                ++i;
            }
        }
    }
    
    cout << endl;
    
    cout << "Tableau C : ";
    for(auto element : tab_C)
    {
        cout << element << " ";
    }
    
    cout << endl;
    
    return 0;
}
