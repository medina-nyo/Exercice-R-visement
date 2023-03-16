#include "Pile.h"
#include <iostream>

using namespace std;

Pile::Pile(const size_t &t)
{
    taille = t;
    p = new int[taille];
    nbr = 0;
}

Pile::~Pile()
{
    delete [] p;
}

void Pile::empiler(int const &element)
{
   
    if(nbr < taille)
    {
        p[nbr] = element;
        ++nbr;
    }
    else
    {
        int *temp = new int[taille + 1];
        for(int i=0; i<nbr; i++)
        {
            temp[i] = p[i];
        }
        taille += 1;
        p = temp;
        p[nbr] = element;
        ++nbr;
    }
}

void Pile::depiler()
{
    if(nbr !=0)
    {
        taille -= 1;
        nbr -= 1;
    }
}

void Pile::affiche()
{
    for(int i=0; i<nbr; i++)
    {
        cout << p[i] << " ";
    }
    cout << endl;
}
