#ifndef Pile_h
#define Pile_h

#include <iostream>

class Pile
{
    private:
    int *p;
    size_t taille;
    int nbr;
    
    public:
    Pile(const size_t &taille);
    ~Pile();
    void empiler(int const &element);
    void depiler();
    void affiche();
};

#endif
