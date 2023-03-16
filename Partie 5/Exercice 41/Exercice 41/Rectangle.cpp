#include "Rectangle.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle (int l, int h)
{
    largeur = l;
    hauteur = h;
}

void Rectangle::setLargeur(int l){
    largeur = l;
}

void Rectangle::setHauteur(int h){
    hauteur = h;
}
int Rectangle::getLargeur()
{
    return largeur;
}

int Rectangle::getHauteur()
{
    return hauteur;
}

int Rectangle::perimetre()
{
    return (hauteur + largeur) * 2;
}

int Rectangle::surface ()
{
    return largeur * hauteur;
}
