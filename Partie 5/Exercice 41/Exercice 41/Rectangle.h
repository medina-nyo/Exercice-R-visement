#ifndef Rectangle_h
#define Rectangle_h

#include <iostream>

class Rectangle
{
    private :
    int largeur, hauteur;
    
    public :
    Rectangle (int l, int h);
    void setLargeur(int l);
    void setHauteur(int h);
    int getLargeur();
    int getHauteur();
    int perimetre();
    int surface ();
};

#endif
