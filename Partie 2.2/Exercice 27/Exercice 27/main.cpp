#include<iostream>
using namespace std;

int const N = 3;
int const M = 3;
int main()
{
    int i, j, moyC[M] ;
    double somme_Ligne = 0, moyenne_Total=0;
    
    double tab[N][M];
    
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            cout << "Entre t[" << i << "][" << j << "] : ";
            cin >> tab[i][j];
        }
    }
    
    cout << "\nAffichage du tableau.\n";
    
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            cout << tab[i][j] << " ";
   
        }
        cout << endl;
    }
    
    cout << endl;
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            somme_Ligne += tab[i][j];
            moyenne_Total += tab[i][j];
            if(j == M-1)
            {
                cout << "Moyenne de la ligne " << i+1 << " : " << somme_Ligne/M << endl;
            }
        }
    }
    
    cout << endl;
    for(j=0 ; j<M ; j++)
    {
        moyC[j]=0;
    }
    
    for(i=0 ; i<N; i++)
    {
        for(j=0 ; j<M ; j++)
        {
            moyC[j] = moyC[j] + tab[i][j];
        }
    }
    
    for(j=0 ; j<3 ; j++)
    {
        cout << "Moyenne de la colonne " << j+1 << " : " << moyC[j] << endl;
    }
    
    cout << "\nMoyenne total : " << moyenne_Total/(M*N) << endl;
            
    return 0;
}
